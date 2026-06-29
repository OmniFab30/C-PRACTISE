#include <stdio.h>
#include <stdlib.h>

int main() {
    int lin, col, matrix[10][10];
    int i, j, sumLin, sumCol, sum;

    // Dimension of matrix
    //get line
    do{
        printf("Enter a line number: ");
        scanf("%d", &lin);
    }while(lin < 1 || lin > 10);

    //get column
    do{
        printf("Enter a column number: ");
        scanf("%d", &col);
    }while(col < 1 || col > 10);

    
    //Get each value of Matrix
    printf("====> Enter Each Element of Matrix <====\n");

    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("\tMatrix[%d][%d] = ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Display Matrix
    printf("\n====> THE MATRIX <====\n\n");

    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%4d", matrix[i][j]);
        }

        printf("\n\n");
    }

    //Calcul sum of value 
    sum = 0;
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            sum += matrix[i][j];
        }
    }
    printf("====> Sum : %d\n", sum);


    
    return 0;
}