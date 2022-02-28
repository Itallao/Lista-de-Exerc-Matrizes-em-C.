/*
  Tarefa 15-  Exercicio 4-Faça um programa que recebe uma matriz 4x4 e exibe os elementos da sua diagonal principal.

 AUTHOR: ITALLO RODRIGUES MORENO
*/





#include <stdio.h>  
#include <locale.h> 
int main ()
{
	setlocale(LC_ALL, "Portuguese");
  	
 	int lin,col, tab;
 	int mat[4][4];
 	for (lin=0; lin<=3; lin++)
 	{
 	for (col=0; col<=3;col++)
 	{
 		printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
		scanf("%d", &mat[lin][col]);
		}
 	}
 
 		printf("Matriz\n");
 
 for (lin=0;lin<=3;lin++)
 {
 for (col=0;col<=3;col++)
		 printf("%d\t",mat[lin][col]);
 		printf("\n\n");
	}
 
 printf("\n\nDiagonal principal\n\n");
 	for (lin=0; lin<=3;lin++)
 	{
 	printf("%d\n",mat[lin][lin]);
 	for (tab=1;tab<=lin+1;tab++)
 	printf("\t");
 	}	
 
 
 printf("\n\n");
 
 
 return 0;
}

	
