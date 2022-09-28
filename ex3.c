#include <stdlib.h>
#include <stdio.h>
#include "matrizLib.h"

int main(){
	
	int i,j,lin,cols,mat[100][100], res;
	
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&lin,&cols);
	
	geraMatrix(mat,lin,cols);
	printf("\n*** Matrix ***");
	printMatrix(mat,lin,cols);
	
	res = menorMatrix(mat,lin,cols);
	
	printf("\n\nMenor valor da matrix: %d\n",res);
	
	return 0;
}
