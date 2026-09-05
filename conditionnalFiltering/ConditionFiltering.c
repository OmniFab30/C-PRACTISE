#include <stdio.h>
#include <stdlib.h>

//append() type: integer
void append(int *ptr, int length, int value){
    ptr[length] = value;
}

int main(){
    
    int 
        numberList[] = {12,54,87,62,11,88,45,23},
        pairValue[] = {};

    int 
        i, pairLength = 0,
        length = sizeof(numberList) / sizeof(numberList[0]);

    //get only the pair number of the list
    for(i = 0; i < length; i++){
        if(numberList[i] % 2 == 0) {
            append(pairValue,pairLength, numberList[i]);
            pairLength ++;
        }
    }
    
    //display the list of number
    for(i = 0; i < pairLength; i++){
        printf("%3d", pairValue[i]);
    }

    printf("\n");
    return 0;
}