#include <stdlib.h>
#include <stdio.h>
#include "matrizLib.h"

int main(){
	
	int lin, cols, mat[100][100], busca;
	
	
	printf("Quantidade de linhas e colunas: ");
	scanf("%d%d",&lin, &cols);
	
	geraMatrix(mat,lin,cols);
	
	printf("\n*** Matrix ***");
	printMatrix(mat,lin,cols);
	
	buscaMatrix(mat,lin,cols);
	
	return 0;
}
