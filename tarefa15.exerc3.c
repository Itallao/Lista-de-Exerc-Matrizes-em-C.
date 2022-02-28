/*
  Tarefa 15 -  Exercicio 3- Faça um programa que recebe uma matriz 3x3 e gera uma segunda matriz com o dobro de cada valor. No final, 
  exiba a segunda matriz formatada na tela.

 AUTHOR: ITALLO RODRIGUES MORENO
*/








#include <stdio.h>
#include <stdlib.h>

 void main()
 {
 
 
 int A[3][4], B[3][4], i, j;

 printf("\nDigite os 12 valores da matriz:\n");
 for (i=0; i<3; i++) {
 for (j=0; j<4; j++) {
 scanf("%d", &A[i][j]);
 B[i][j] = A[i][j] * 2;
 }
 }
 printf("\nElementos da matriz:\n");
 for (i=0; i<3; i++) {
printf("\n");
 for (j=0; j<4; j++) {
 printf("%d \t", B[i][j]);
 }
 }
 }
