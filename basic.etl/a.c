#include <stdio.h>
#include <stdlib.h>

struct conteudo
{
	char letra;
	struct conteudo *next;
};
struct campo
{
	struct conteudo *start;
	struct campo *next;
};

struct line
{
	struct campo *start;
	struct line *next;
};

struct table
{
		struct line *start;
};

struct conteudo*
new_conteudo(char letra)
{
	struct conteudo *aux = calloc(1, sizeof(struct conteudo ));
	aux->letra = letra;
	return aux;
}

struct campo*
new_campo()
{
	return (calloc(1, sizeof(struct campo)));
}

struct line*
new_line()
{
	return (calloc(1, sizeof(struct line)));
}

struct table*
new_table()
{
	return (calloc(1, sizeof(struct table)));
}


struct table *
read_file()
{
	FILE *file = fopen("cad_unico.csv", "r");
	char byte = 0;
	struct conteudo *conteudo = NULL;
	struct campo *campo = new_campo();
	struct line *line = new_line();
	struct table *table = new_table();
	while(fread(&byte, sizeof(char), 1, file))
	{
		if(byte == ';')
		{
			campo->next = new_campo();
			campo = campo->next;
			continue;		
		}
		
		if(byte == '\n')
		{
			line->next = new_line();
			line = line->next;
			continue;	
		}	

		if(table->start == NULL)
		{
			table->start = line;
		}
		
		if(line->start == NULL)
		{
			line->start = campo;
		}
		
		if(campo->start == NULL)
		{
			campo->start = new_conteudo(byte);
			conteudo = campo->start;
			continue;
		}
		conteudo->next = new_conteudo(byte);
		conteudo = conteudo->next;	
	}
	return table;
}

void
print_conteudo(struct conteudo *conteudo)
{
	if(conteudo == NULL)
	{
		printf("\n");
		return;
	}
	printf("%c", conteudo->letra);
	print_conteudo(conteudo->next);
}

void
print_campo(struct campo *campo)
{
	if(campo == NULL)
	{
		return;
	}
	printf("conteudo :: ");
	print_conteudo(campo->start);
	print_campo(campo->next);
}

void 
print(struct line *line)
{
	if(line == NULL)
	{
		return;
	}
	print_campo(line->start);
	print(line->next);
}

int
main()
{
	struct table *aux = read_file();
	print(aux->start);
}
