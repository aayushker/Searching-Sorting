#include<stdio.h>

void countingSort(int arr[], int size){

    int max = arr[0];
    for (int i=1; i<size; i++){
        if (arr[i] > max)
            max = arr[i];
    }

    int outputArray[size];
    int countArray[max+1];
    for (int i=0; i<max+1; i++){
        countArray[i] = 0;
    }

    for (int i=0; i<size; i++){
        ++countArray[arr[i]];
    }

    for (int j=1; j<=max; j++){
        countArray[j] += countArray[j-1]; 
    }

    for (int k=0; k<size; k++){
        outputArray[--countArray[arr[k]]] = arr[k];
    }

    for (int l=0; l<size; l++){
        arr[l] = outputArray[l];
    }
}

void display(int arr[], int size){
    printf("The array is:\n" );
    for (int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter how many elements you want to enter: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements:\n");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    countingSort(arr, size);
    display(arr, size);

    return 0;
}