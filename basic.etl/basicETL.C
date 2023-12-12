#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
/*
//my structs
struct data
{
	char Parentesco[64];
	char DataNas[32];
	char Sexo[32];
	char BolsaFamilia[32];
	char PopRua[32];
	char GrauDeInstituição[32];
	char CorRaca[32];
	char Cras[32];
	char MesAnoReferencia[32];
	char Regional[32];
	char FaixaDeRenda[32];
	int ValRemuneracaoMesPassado;
	int Idade;
	int FaixaDesatualizacaoCadastral;
};

struct node
{
	struct data *people;
	struct data *next;
	struct data *prev;
};

struct list
{
	struct node *head;
};



// my fundamentals functions

int
isempty(struct list *list)
{
  return list->head == NULL ? 1 : 0;
}

void
show(struct list *list)
{
  struct list *temp = list->head;
  do
  {
    printf("%s ", temp->Parentesco);
	  printf("%s ", temp->DataNas);
	  printf("%s ", temp->Sexo);
	  printf("%s ", temp->BolsaFamilia);
	  printf("%s ", temp->PopRua);
	  printf("%s ", temp->GrauDeInstituição);
	  printf("%s ", temp->CorRaca);
	  printf("%s ", temp->Cras);
	  printf("%s ", temp->MesAnoReferencia);
	  printf("%s ", temp->Regional);
	  printf("%s ", temp->FaixaDeRenda);
	  printf("%d ", temp->ValRemuneracaoMesPassado);
	  printf("%d ", temp->Idade);
	  printf("%d ", temp->FaixaDesatualizacaoCadastral);
	  temp = temp->next;
  }while(temp != list->head)
}


struct list*
creatlist()
{
	struct list *newlist = NULL;
	newlist = (struct list*) malloc(sizeof(struct list));
	newlist->head = NULL;
	
	return newlist;
}

struct node*
createdata(char Parentesco[64], char DataNas[32], int Idade, char Sexo[32], char BolsaFamilia[32], char PopRua[32],
					 char GrauDeInstituição[32], char CorRaca[32], char FaixaDeRenda[32], int ValRemuneracaoMesPassado,
					 char Cras[32], char Regional[32], int FaixaDesatualizacaoCadastral, char MesAnoReferencia[32])
{
  struct node *data = NULL;
  data->next = NULL;
  data->prev = NULL;
	
  //creating a new people
  data->people = (struct data*) malloc(sizeof(struct data));
  //Copy string/int to struct
  strcpy(data->people->Parentesco, Parentesco);
  strcpy(data->people->DataNas, DataNas);
  data->people->Idade = idade;
  strcpy(data->people->Sexo, Sexo);
  strcpy(data->people->BolsaFamilia, BolsaFamilia);
  strcpy(data->people->PopRua, PopRua);
  strcpy(data->people->GrauDeInstituição, GrauDeInstituição);
  strcpy(data->people->CorRaca, CorRaca);
  strcpy(data->people->FaixaDeRenda, FaixaDeRenda);
  data->people->ValRemuneracaoMesPassado = ValRemuneracaoMesPassado;
  strcpy(data->people->Cras, Cras);
  strcpy(data->people->Regional, Regional);
  data->people->FaixaDesatualizacaoCadastral = FaixaDesatualizacaoCadastral;
  strcpy(data->people->MesAnoReferencia, MesAnoReferencia);
	
  //return the pointer to new people
  return people;	
}



void
push(struct list *list, char Parentesco[64], char DataNas[32], int Idade, char Sexo[32], char BolsaFamilia[32], char PopRua[32], 
     char GrauDeInstituição[32], char CorRaca[32], char FaixaDeRenda[32], int ValRemuneracaoMesPassado, char Cras[32], 
     char Regional[32], int FaixaDesatualizacaoCadastral, char MesAnoReferencia[32])
{
	if(list->head == NULL)
	{
		struct node *newnode = NULL;
		newnode = createdata(Parentesco, DataNas, Idade, Sexo, BolsaFamilia, PopRua, GrauDeInstituição, CorRaca,
												 FaixaDeRenda, ValRemuneracaoMesPassado, Cras, Regional, FaixaDesatualizacaoCadastral,
												 MesAnoReferencia);
		list->head = newnode;
	}
	else
	{
		struct node *temp = NULL;
		temp = list->head;
		struct node *prev = NULL;
		while(temp != NULL)
		{
			prev = temp;
			temp = temp-> next;
		}	
		struct node *newnode = NULL;
		newnode = createdata(Parentesco, DataNas, Idade, Sexo, BolsaFamilia, PopRua, GrauDeInstituição, CorRaca,  
												 FaixaDeRenda, ValRemuneracaoMesPassado, Cras, Regional, FaixaDesatualizacaoCadastral,
												 MesAnoReferencia);
		newnode->prev = prev;
		newnode->next = list->head;
		temp->next = newnode;
		list->head->prev = newnode;
		
	}
}



void
pop(struct list *list)
{
	if(isempty(list))
	{
	  printf("this list is empty please add elements beforing remove it");
	}
	else
	{
	  struct node *temp = NULL;
		temp = list->head;
		struct node *prev = NULL;
		
		while(temp->next != list->head)
		{
			prev = temp;
			temp = temp-> next;
		}
		
		list->head->prev = prev;
		free(prev->next);
		prev->next = list->head;
		free(prev);
		free(temp);
	}
}

struct list*
read(char **file)
{
  struct list *listofdata;
}
*/




int main(int argc, char **argv)
{
  //char *file[];
  //strcpy(file, argv[1]);
  printf("%s ", argv[1]);


	return 0;
}
