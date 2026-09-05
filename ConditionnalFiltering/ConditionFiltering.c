#include <stdio.h>
#include <stdlib.h>

//append() type: integer
void append(int *ptr, int length, int value){
    ptr[length] = value;
}


//function to display the list of number
void displayList(int pairLength, int *pairValue){
    int i;
    for(i = 0; i < pairLength; i++){
        printf("%3d", pairValue[i]);
    }
}


//Function get only the pair value in array
void onlyPair(
    int length, 
    int *ptr, 
    int *ptrPair, 
    int pairLength, 
    int limit
){
    int i;
    //get only the pair number of the list
    for(i = 0; i < length; i++){
        if(ptr[i] % 2 == 0 && ptr[i] > limit) {
            append(ptrPair,pairLength, ptr[i]);
            pairLength ++;
        }
    }

    //call displayList function to display all values 
    displayList(pairLength, ptrPair);
}

//Function who remove duplicates values inside a list
void noDuplicates(){

}

//main
int main(){
    
    int 
        numberList[] = {8,5,2,12,54,87,62,11,88,45,23},
        pairValue[] = {},
        noDuplicatesValue[] = {};

    int 
        i, limit = 10, pairLength = 0, counter = 0,
        length = sizeof(numberList) / sizeof(numberList[0]);

    //get only the pair values
    onlyPair(
        length, 
        numberList, 
        pairValue, 
        pairLength,
        limit
    );
    
    //removing duplicates
    noDuplicates();

    int j;
    for(i = 0; i < length - 1; i++){
        for(j = i + 1; j < length; j++){
            if(numberList[i] != numberList[j]){
                append(noDuplicatesValue, counter, numberList[i]);
            }
        }
    }
    printf("\n");
    return 0;
}