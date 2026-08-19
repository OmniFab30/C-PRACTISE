#include <stdio.h>
#include <stdlib.h>

//function to get max value
int getMaxValue(int heapTab[], int size){
    int maxValue = heapTab[0];

    //Algorithm to find max value
    for(int i = 0; i < size; i++){
        if(maxValue < heapTab[i]) 
            maxValue = heapTab[i];
    }

    return maxValue;
}

//function to get min value
int getMinValue(int heapTab[], int size){
    int minValue = heapTab[0];

    //Algorithm to find min value
    for(int i = 0; i < size; i++){
        if(minValue > heapTab[i]) 
            minValue = heapTab[i];
    }
    
    return minValue;
}

//function to permute two values
void permute(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

//function to get parent's index
int parent(int index){
    int parentIndex = (int)(index - 1) / 2 ;
    return parentIndex;
}

//function to get left children's index
int leftChildren(int index){
    int leftChildren = (int)(2*index + 1);
    return leftChildren;
}

//function to get right children's index
int rightChildren(int index){
    int rightChildren = (int)(2*index + 2);
    return rightChildren;
}

int main(){
    int heapTab[20];
    int n, i, j;

    //get a number max for heapTab
    do{
        printf("Enter a number (n < 0): ");
        scanf("%d", &n);
    }while (n <= 0 && n > 20);

    //Get each element value
    printf("============== GET ELEMENT =============\n");
    for (i = 0; i < n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &heapTab[i]);
    }

    //Display each value
    printf("============== DISPLAY ELEMENT =============\n");
    for(i = 0; i < n; i++){
        printf("Index %d ==> %d\n", i, heapTab[i]);
    }


    printf("\n===> Max Value: %d", getMaxValue(heapTab, n)); //Display max value
    printf("\n===> Min Value: %d", getMinValue(heapTab, n));  //Display min value

    //Function to show parent of each element
    printf("\n\n====================== PARENT =========================");
    printf("\nRoot : %d", heapTab[0]);
    for(int parentIndex = 0, i = 0; i < n; i++){
        parentIndex = parent(i);

        if(parentIndex > 0){
            printf("\nValue: %d ==> Parent: %d",heapTab[i],heapTab[parentIndex]);
        }
    }

    printf("\n\n====================== LEFT CHILDREN =========================");
    //Function to show left children of each element
    for(int leftChildrenIndex = 0, i = 0; i < n; i++){
        leftChildrenIndex = leftChildren(i);

        if(leftChildrenIndex <= (n - 1)){
            printf("\nValue: %d ==> Left children: %d",heapTab[i],heapTab[leftChildrenIndex]);
        }
    }

    printf("\n\n====================== RIGHT CHILDREN =========================");
    //Function to show right children of each element
    for(int rightChildrenIndex = 0, i = 0; i < n; i++){
        rightChildrenIndex = rightChildren(i);

        if(rightChildrenIndex <= n){
            printf("\nValue: %d ==> Right children: %d",heapTab[i],heapTab[rightChildrenIndex]);
        }
    }
    
    printf("\n");
    return 0;
}

