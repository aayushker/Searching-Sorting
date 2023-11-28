#include<stdio.h>

void insertionSort(int arr[], int size){
    
    for (int i=1; i<size; i++){
        int j, key;
        key = arr[i];
        j = i-1;

        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void display(int arr[], int size){
    printf("The sorted array is\n");
    for (int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter how many elements you want: ");
    scanf("%d",&size);

    int arr[size]; 
    printf("Enter the elements\n");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    insertionSort(arr, size);
    display(arr, size);

    return 0;
}