#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, lin, col, tmp;
    int A[10][10], B[10][10];

    //get row number
    do{
        printf("Enter a row number: ");
        scanf("%d", &lin);
    }while(lin <= 0 || lin > 10);


    //get column number
    do{
        printf("Enter a column number: ");
        scanf("%d", &col);
    }while(col <= 0 || col > 10);


    //Get each value of Matrix
    printf("====> Enter Each Element of Matrix <====\n");

    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("\tA[%d][%d] = ", i,j);
            scanf("%d", &A[i][j]);
        }
    }

    //Display Matrix
    printf("\n====> THE MATRIX <====\n");
    printf("\nA[%d][%d]: \n", lin, col);

    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%4d", A[i][j]);
        }

        printf("\n\n");
    }
    
    //Treatment of Matrix Transposition
    for(j = 0; j <= col; j++){
        for(i = 0; i <= lin; i++)
            B[j][i] = A[i][j];
    }

    //Display Matrix transposed
    printf("====> THE MATRIX TRANSPOSED <====\n");
    printf("\nA[%d][%d]: \n", col, lin);

    for (j = 0; j < col; j++){
        for (i = 0; i < lin; i++){
            printf("%4d", B[j][i]);
        }

        printf("\n\n");
    }



    return 0;
}