#include <stdio.h>
#define MAX 50

int main(){

    int
        k, a, dimension, i,
        listOfNumber[MAX] = {};


    //get dimension of array
    do{
        printf("Enter a number to define dimension: ");
        scanf("%d", &dimension);
    }while(dimension < 0 || dimension > MAX);

    //get each element of the array
    for(i = 0; i < dimension; i++){
        printf("=> Element n°%d: ",i);
        scanf("%d", &listOfNumber[i]);
    }

    printf("\n======== LIST BEFORE ROTATION ========\n");
    //display list before rotate
    for(int i = 0; i < dimension; i++){
        printf("%2d", listOfNumber[i]);
    }

    //get rotation value k
    do{
        printf("\n\nHow much to rotate list ?: ");
        scanf("%d", &k);
    }while(k < 0);

    //Rotation list with k value
    while(k != 0){
        a = listOfNumber[0];
        for(int i = 0; i < dimension; i++){
            listOfNumber[i] = listOfNumber[i + 1];
        }
        listOfNumber[dimension - 1] = a;

        k--;
    }

    printf("\n======== LIST AFTER ROTATION ========\n");
    //display list after rotate
    for(int i = 0; i < dimension; i++){
        printf("%2d", listOfNumber[i]);
    }


    printf("\n");
    return 0;
}