/*Ebru Ece Aytürk-19050111037-collect letters from the txt file and converse 1D array*/
#include <stdio.h>

int main(){

FILE *words;
words = fopen("words.txt","r");
char letter[50][50]; 
char tot[5]; 
int number;
int i,j,k;

if(words == NULL){
	printf("There is no words.txt file");
}
else{


	printf("\nWhich word do you want to display?\n");
    scanf("%d",&number);
	
    	for(i = 0; i < 5; i++){
    		for(j = 0; j <12; j++){
    			fscanf(words,"%s",&letter[i][j]); 
			}
		}
      printf("The word is: ");
      for ( k = 0; k < 5; k++){
      tot[k] = letter[k][number-1]; 
      printf("%c", tot[k]);
}
}
fclose(words);
return 0;
}

