#include <stdlib.h>
#include <stdio.h>
#include "matrizLib.h"

int main(){
	
	
	int mat[100][100], i, j, ordem;
	
	printf("Insira a ordem da Matriz: ");
	scanf("%d",&ordem);
	for(i=0;i<ordem;i++)
		for(j=0;j<ordem;j++){
		
 			if(i==j){
 				mat[i][j]=1;
	 		}else{
	 			mat[i][j]=0;
			}
		}
			 
	for(i=0;i<ordem;i++){
		printf("\n");
		for(j=0;j<ordem;j++){
			printf("%2d",mat[i][j]);
		}
	}
	return 0;
}
