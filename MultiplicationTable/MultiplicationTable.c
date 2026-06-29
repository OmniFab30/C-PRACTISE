#include <stdio.h>

int MultiplicationTable(int root, int i){
    int result;
    return root * i;
}

int main(){

    int i, n;

    //get root number
    do{
        printf("Enter a root number: ");
        scanf("%d", &n);
    }while(n < 1);


    //Display Multiplication table
    printf("\n====> TABLE %d <====\n\n", n);
    for (i = 0; i <= 10; i++){
        printf("%d x %d = %d \n", n, i, MultiplicationTable(n, i));
    }

    
    return 0;
}