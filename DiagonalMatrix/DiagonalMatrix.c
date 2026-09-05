#include <stdio.h>
#include <stdlib.h>
#define MAX 50


int main(){

    int matrix[MAX][MAX];
    int 
        i, j, 
        dimension;

        
    //get dimension of the Matrix
    do{
        printf("Enter a dimension of the Matrix: ");
        scanf("%d", &dimension);
    }while(dimension < 0 || dimension > MAX);

    //Create a diagonal Matrix
    for(i = 0; i < dimension; i++){
        for(j = 0; j < dimension; j++){
            if(i == j) matrix[i][j] = 1;
            else matrix[i][j] = 0;
        }
    }
    
    //display the matrix
    for(i = 0; i < dimension; i++){
        for(j = 0; j < dimension; j++){
            printf("%2d", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("\n");
    return 0;
}

