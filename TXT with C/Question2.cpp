/*Ebru Ece Aytürk-19050111037-seeing the array and switching between the rows*/
#include <stdio.h>
int main(){
	
	double number[7][4];
	int row1,row2;
	float swap[10];
	int i,j,a,b;
	
	FILE *matrix;
	matrix = fopen ("matrix.txt","r");
	
	
	if(matrix == NULL){
		printf("There is no matrix.txt file!!\n");
	}
	else if (matrix != NULL){
    printf("The contents of the array is :\n");
			for(i = 0; i < 7; i++){
				for( j = 0; j < 4; j++){
				fscanf(matrix, "%lf", &number[i][j]); //for taking array elements from the matrix.txt file
				printf(" %.1lf", number[i][j]);				
				}
				printf("\n");
			}			
		}	
	
	 do{
     	
     	printf("Enter two row indexes to swap: ");
    	scanf("%d %d", &row1, &row2);
	 }
	 while(row1 > 6 ||row1 < 0 || row2 > 6 || row2 < 0);
    	
    		
    for(i = 0 ; i < 4; i++){
    	swap[i] = number[row1][i]; //swap operations
    	number[row1][i] = number[row2][i];
    	number[row2][i] = swap[i];
	}
    		
    printf("The contents of the array AFTER the swap operation: \n");
    for(a = 0; a < 7; a++){
    		for(b = 0; b < 4; b++){
    
    			printf("%.1f ", number[a][b]); //printing the swap versions
    			
			}
			printf("\n");
		}
    
fclose(matrix);
return 0;



}
