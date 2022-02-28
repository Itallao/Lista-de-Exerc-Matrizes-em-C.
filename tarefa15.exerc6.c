/*
  Tarefa 15-  Exercicio 6 Define-se como elemento minimax de uma matriz o menor elemento da linha onde 
  se encontra o maior elemento da matriz. Faça um programa que recebe uma matriz 4x4 e mostra qual é seu elemento minimax, bem como sua posição na 
  matriz.

 AUTHOR: ITALLO RODRIGUES MORENO
 
*/




#include <stdio.h>  
#include <locale.h> 


int minimaxf (int matriz[4][4], int *minimax, int *l, int *c) {
  
  *l=0;
  int i, j, maior;
  maior=matriz[0][0];
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (matriz[i][j] > maior) {
        *l = i;
        *c = j;
        maior = matriz[i][j];
      }
    }
  }

  *minimax=maior;
  for (i = 0; i < 44; i++) {
    if (matriz[*l][i] < *minimax) {
      *c = i;
      *minimax = matriz[*l][i];
    }
  }
}

return 0;


}
