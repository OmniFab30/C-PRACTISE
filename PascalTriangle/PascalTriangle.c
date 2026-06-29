#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long long matrix[10][10];
    int i, j,dim;

    printf("====> PASCAL'S TRIANGLE <====\n");

    // Dimension of matrix
    //get dimension
    do{
        printf("Enter a dimension number: ");
        scanf("%d", &dim);
    }while(dim <= 0 || dim > 10);
    
    //Treatment to Pascal's Triangle
    for (i = 0; i <= dim; i++){
        printf("\n");
        for (j = 0; j <= i; j++){
            if(j == 0 || j == i) matrix[i][j] = 1;
            else matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
            printf("%5llu", matrix[i][j]);
        }
    }

    printf("\n\n");

    return 0;
}