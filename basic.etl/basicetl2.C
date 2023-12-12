#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct data
{
  char data[256];
  struct data *next;
};

struct line
{
  struct data *currentline;
  struct line *nextline;
};

struct table
{
  struct line *currenttable;
  struct table *nexttable; 
};

struct final_table
{
  struct table *start;
};
/*
void
showline(struct line *line)
{
  if(line != NULL)
  {
    struct data *temp = line->currentline;
    while (temp != NULL)
    {
      printf("%s", temp->data);
      temp = temp->next;
    }
  }
}

void
show(struct final_table *table)
{
	if(table->start == NULL)
	{
		printf("your table is empty !");
	}
	else
	{
    struct table *temp = table->start;
    struct line *templine = temp->currenttable;
		while(templine != NULL)
		{
			showline(templine);
			templine = templine->nextline;
		}
	}
}
*/


struct table*
createnewtable()
{
  struct table *newtable = NULL;
  newtable = (struct table*) calloc(1,sizeof(struct table));
  
  return newtable;
}

struct line*
createnewline()
{
  struct line *newline = NULL;
  newline = (struct line*) calloc(1,sizeof(struct line));
  
  return newline;
}

struct data*
createnewdata()
{
  struct data *newdata = NULL;
  newdata = (struct data*) calloc(1,sizeof(struct data));
  memset(newdata->data, 0, 256);

  return newdata;
}

void 
add_line_on_table(struct table *table, struct line *newline)
{
  if(table->currenttable == NULL)
  {
    table->currenttable = newline;
  }
  else
  {
    struct line *temp = NULL;
    temp = table->currenttable;
    while (temp->nextline != NULL)
    {
      temp = temp->nextline;
    }
    temp->nextline = newline;
  }
}

void
add_data_on_line(struct line *line, char datain[256])
{
  if(line->currentline == NULL)
  {
    line->currentline = createnewdata();
    strcpy(line->currentline->data, datain);
    line->currentline->next = NULL; 
  }
  else
  {
    struct data *temp = NULL;
    temp = line->currentline;
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = createnewdata();
    temp = temp->next;
    strcpy(temp->data, datain);
  }
}

struct table*
read_csv(char *name)
{

  struct table *newarchive = NULL;
  newarchive = createnewtable();
  struct line *line = NULL;
  line = createnewline();  

  FILE *myfile = NULL;
  myfile = fopen(name, "r");
  char control_buffer = 0;
  

  char buffer[256] = {0};
  int i = 0;
  while(fread(&control_buffer, sizeof(char), 1, myfile))
  {
    //int read = fscanf(myfile,"[^;]", buffer);
    if(control_buffer == ';')
    {
      add_data_on_line(line, buffer);
      if(newarchive->currenttable == NULL)
      {
        newarchive->currenttable = line;
      }
      line->nextline = createnewline();
      line = line->nextline;
      continue;
    }
    if(control_buffer == '\n')
    {
      add_line_on_table(newarchive, line);
      line = line->nextline;
      line = createnewline();
      continue;
    }
    buffer[i] = control_buffer;
    i++;
  }
  return newarchive;
}

int main(int argc, char **argv)
{
  struct final_table *table = NULL;
  table = (struct final_table*) calloc(1,sizeof(struct final_table));
  //printf("%s ", argv[1]);
  

	table->start = read_csv("cad_unico.csv");
 // show(table);

	return 0;
}
