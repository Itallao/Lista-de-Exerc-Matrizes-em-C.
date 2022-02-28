/*
  Tarefa 15-  Exercicio 1. Faça um programa que recebe uma matriz 3x4 e mostrar a soma dos elementos dela.

 AUTHOR: ITALLO RODRIGUES MORENO
*/



#define LIN 3
#define COL 4
#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
  	
	int  tab[3][4], soma=0, col, lin;
	
	for(lin=0; lin < 3; lin++){
		for(col=0;  col < 4; col++){
			printf("Digite um valor para tab[%i][%i]: ", lin, col);
			scanf("%i", &tab[lin][col]);	
		}	
	}
	
	for(lin=0; lin < 3; lin++){
		for(col=0;  col < 4; col++){
			soma += tab [lin][col];			
			printf("\t%i ", tab[lin][col]);
		}
		printf("\n");
	}
	
	
	
	  
    
    
    printf("\n Soma total:  %i\n\n ", soma);
	   
	return 0;	
   
}
	
