#include<stdio.h>
#include<stdlib.h>

int factorial(int a){
    int fact = 1, i;
    for(i = 1; i <= a; i++) fact *= i;
    return fact;
}

int main(){

    int n;

    do{
        printf("Enter a root number (n => 0) : ");
        scanf("%d", &n);
    } while(n < 0);

    if (n > 0) printf("===> Factorial of %d is %d\n", n, factorial(n));
    else printf("===> Factorial of %d is 1\n", n);


    return 0;
}