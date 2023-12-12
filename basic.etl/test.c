#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct content
{
    char data;
    struct content *next;
};

struct cell
{
    struct content *content;
    struct cell *next;
    int sizeofcontent;
};

struct line
{
    struct cell *line_data;
    struct line *next;
    int numberofcells;
};

struct sheet
{
    struct line *sheet;
    struct line *next;
    int numberoflines;
};

struct table
{
    struct sheet *mytable;
};

void
get_data(struct cell *mydestine, char value)
{
    if(mydestine->content == NULL)
    {
        mydestine->content = (struct content*) calloc(1,sizeof(struct content));
        mydestine->sizeofcontent = 1;
        mydestine->content->data = value;
    }
    else
    {
        struct content *temp = NULL;
        temp = mydestine->content;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = (struct content*) calloc(1, sizeof(struct content));
        temp->next->data = value;
        temp->next->next = NULL;
        mydestine->sizeofcontent = mydestine->sizeofcontent + 1;
    }
}

void
get_cell(struct line *mydestine, struct cell *newcell)
{
    if(mydestine->line_data == NULL)
    {
        mydestine->line_data = newcell;
        mydestine->numberofcells = 1;
    }
    else
    {
        struct cell *temp = NULL;
        temp = mydestine->line_data;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newcell;
        mydestine->numberofcells = mydestine->numberofcells + 1;
    }
}

void
get_line(struct sheet *mydestine, struct line *newline)
{
    if(mydestine->sheet == NULL)
    {
        mydestine->sheet = newline;
        mydestine->numberoflines = 1;
    }
    else
    {
        struct line *temp = NULL;
        temp = mydestine->sheet;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newline;
        mydestine->numberoflines = mydestine->numberoflines + 1;        
    }
}

void
get_table(struct table *mydestine, char *name)
{
    if(mydestine->mytable == NULL)
    {
        mydestine->mytable = (struct sheet*) calloc(1,sizeof(struct sheet));
        get_table(mydestine, name);
    }
    else
    {
        if(mydestine->mytable->sheet == NULL)
        {
            mydestine->mytable->sheet = (struct line*) calloc(1, sizeof(struct line));
            get_table(mydestine, name);
        }
        else
        {
            if(mydestine->mytable->sheet->line_data == NULL)
            {
                mydestine->mytable->sheet->line_data = (struct cell*) calloc(1, sizeof(struct cell));
                get_table(mydestine, name);
            }
            else
            {
                if(mydestine->mytable->sheet->line_data->content == NULL)
                {
                    mydestine->mytable->sheet->line_data->content = (struct content*) calloc(1, sizeof(struct content));
                    get_table(mydestine, name);
                }
                else
                {
                    FILE *myfile = NULL;
                    myfile = fopen(name, "r");  
                    if (myfile == NULL)
                    {
                        printf("error on read file, this archive realy exists ?");
                        return;
                    }                  
                    char buffer = 0;
                    struct cell *cell = NULL;
                    cell = (struct cell*) calloc(1, sizeof(struct cell));
                    struct line *line = NULL;
                    line = (struct line*) calloc(1, sizeof(struct line));


                    while(fread(&buffer, sizeof(char), 1, myfile))
                    {
                        if(buffer == ';')
                        {
                            get_cell(line, cell);
                            cell = NULL;
                            cell = (struct cell*) calloc(1, sizeof(struct cell));
                            continue;
                        }
                        if(buffer == '\n')
                        {
                            get_line(mydestine->mytable, line);
                            line = NULL;
                            line = (struct line*) calloc(1, sizeof(struct line));
                            continue;
                        
                        }
                        get_data(cell, buffer);

                    }
                    fclose(myfile);
                }
            }
            
        }
    }
}

void
show(struct table *mytable)
{

    struct sheet *sheettemp = mytable->mytable;
    while(sheettemp != NULL)
    {   
        struct line *templine = sheettemp->sheet;
        while(templine != NULL)
        {
            struct cell *celltemp = templine->line_data;
            while(celltemp != NULL)
            {
                struct content *datatemp = celltemp->content;
                while (datatemp != NULL)
                {
                    printf("%c", datatemp->data);
                }
                datatemp = datatemp->next;
            }
            printf(" ");
            celltemp = celltemp->next;
        }
        printf("\n");
        templine = templine->next;   
    }
}



int main()
{
    struct table *mytable =  NULL;
    mytable = (struct table*) calloc(1,sizeof(struct table));
    get_table(mytable, "teste.csv");
    show(mytable);
    return 0;
}
