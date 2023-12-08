#include<stdio.h>

void insertionSort(int a[], int n){
    for (int i=1; i<n; i++){
        int j, key = a[i];
        j = i-1;
         
        while (j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
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