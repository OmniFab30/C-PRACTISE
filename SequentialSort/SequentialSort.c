#include<stdio.h>

int main()
{
    int numberList[] = {1,7,9,34,23,54,2,9};
    int i, j, temp;
    int length = sizeof(numberList) / sizeof(numberList[0]);
    
    puts("#Before Sorting\r");
    for(i = 0; i < length; i++) 
        printf("%5d", numberList[i]);
    
    //algorithm for sequential sorting
    for(i = 0; i < length - 1; i++){
        for(j = i + 1; j < length; j++){
            if(numberList[i] > numberList[j]){
                temp = numberList[i];
                numberList[i] = numberList[j];
                numberList[j] = temp;
            }
        }
    }
    
    //display the result
   puts("\n#After Sorting\r");
   for(i = 0; i < length; i++) 
        printf("%5d", numberList[i]);
       
    printf("\n");
   return 0;
}