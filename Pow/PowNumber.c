#include <stdio.h>
#include <stdlib.h>

int powFunction (int n, int powNumber){
    if(powNumber == 0) return 1;
    else return n * powFunction(n, powNumber - 1);
}

int main(){
    int n, powNumber;

    // Get root number
    do{
        printf("Enter root number: ");
        scanf("%d",&n);
    }while(n <= 0);

    //Puissance Treatment
    do{
        printf("Enter a pow number: ");
        scanf("%d",&powNumber);
    } while (n < 0);

    //display of result
    printf("%d ^ %d is %d\n", n, powNumber, powFunction(n, powNumber));
    
    
    return 0;
}