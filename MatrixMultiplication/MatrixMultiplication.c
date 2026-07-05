#include <stdio.h>
#include <stdlib.h>

int main(){

int i, j, k, linA, colin, colB;
    int A[10][10], B[10][10], C[10][10];

    //get row number for Matrix A
    do{
        printf("Enter a row number for Matrix A: ");
        scanf("%d", &linA);
    }while(linA <= 0 || linA > 10);


    //get column number for Matrix A and row for Matrix B
    do{
        printf("Enter a (column A = row B ) number : ");
        scanf("%d", &colin);
    }while(colin <= 0 || colin > 10);


    //Get each value of Matrix A
    printf("====> Enter Each Element of Matrix A <====\n");

    for (i = 0; i < linA; i++){
        for (j = 0; j < colin; j++){
            printf("\tA[%d][%d] = ", i,j);
            scanf("%d", &A[i][j]);
        }
    }

    //get column number for Matrix B
    do{
        printf("Enter a column number for Matrix B : ");
        scanf("%d", &colB);
    }while(colB <= 0 || colB > 10);


     //Get each value of Matrix B
    printf("====> Enter Each Element of Matrix B <====\n");

    for (i = 0; i < colin; i++){
        for (j = 0; j < colB; j++){
            printf("\tB[%d][%d] = ", i,j);
            scanf("%d", &B[i][j]);
        }
    }

    //Display Matrix A
    printf("\n====> THE MATRIX A <====\n");
    printf("\nA[%d][%d]: \n\n", linA, colin);

    for (i = 0; i < linA; i++){
        for (j = 0; j < colin; j++){
            printf("%4d", A[i][j]);
        }
        printf("\n\n");
    }
    

    //Display Matrix B
    printf("\n====> THE MATRIX B <====\n");
    printf("\nB[%d][%d]: \n\n", colin, colB);

    for (i = 0; i < colin; i++){
        for (j = 0; j < colB; j++){
            printf("%4d", B[i][j]);
        }
        printf("\n\n");
    }

    //treatment for Matrix multiplication
    for(i = 0; i < linA; i++){
        for (k = 0; k < colB; k++){
            C[i][k] = 0;
            for(j = 0; j < colin; j++){
                C[i][k] += A[i][j] * B[j][k];
            }
        }
        
    }
    
    //Display Matrix Mutliplied
    printf("\n====> THE MATRIX MULTIPLIED <====\n");
    printf("\nC[%d][%d]: \n\n", linA, colB);

    for (i = 0; i < linA; i++){
        for (k = 0; k < colB; k++){
            printf("%4d", C[i][k]);
        }
        printf("\n\n");
    }



    return 0;
}