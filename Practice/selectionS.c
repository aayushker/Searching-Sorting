#include<stdio.h>

void selectionS(int arr[], int size){
    int i,j;    
    for (i=0; i<size-1; i++){

        int minIndex=i;
        for (j=i+1; j<size; j++){
            if (arr[j]<arr[minIndex]){
            minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void display(int arr[], int size){
    printf("The array is: \n");
    for (int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int size; 
    printf("Enter how many elements you want to enter ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements\n");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    selectionS(arr, size);
    display(arr, size);

    return 0;
}