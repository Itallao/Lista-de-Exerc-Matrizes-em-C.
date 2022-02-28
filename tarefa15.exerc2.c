
/*
  Tarefa 15-  Exercicio 1. Faça um programa que recebe uma matriz 3x4 e mostrar a soma dos elementos dela.

 AUTHOR: ITALLO RODRIGUES MORENO
*/




#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 3
int main()
{
   long matriz[4][4], menor;
int i, j, pos_i, pos_j;
menor = matriz [0][0];
for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  {
      if(matriz[i][j]<menor)
      {
        menor=matriz[i][j];
        pos_i=i; 
        pos_j=j;
      }
  }
}
   printf("O menor elemento: %d\n", menor);
   printf("Posicao: [%d][%d]\n", pos_i,pos_j);
   
  system("PAUSE");    
  return 0;
}
