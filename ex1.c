#include<stdio.h>
#include "matrixlib.h"

void main(){
     int mat[100][100], lin, col, i, j, x, cont;
     printf("Insira a quantidade de linhas e colunas: ");
     scanf("%d%d", &lin, &col);
     geraMatrix(mat, lin, col);
     
     printf("Insira um numero para verificacao: ");
     scanf("%d", &x);
     
     for(i=0; i<lin; i++){
             for(j=0; j<col; j++){
                     if(mat[i][j]>x){
                     cont++;
                     }
             }        
     }
     
     printf("Existem %d numeros maior que %d na matriz. \n\n", cont, x);
     printMatrix(mat, lin, col);
     

}

