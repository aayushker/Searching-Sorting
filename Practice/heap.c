#include<stdio.h>

void Heapify(int a[], int size, int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int largest = i;
    if(l<size && a[l]>a[largest])
        largest = l;
    if(r<size && a[r]>a[largest])
        largest = r;
    if(largest!=i){
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        Heapify(a, size, largest);
    }
}

void buildHeap(int a[], int size){
    for(int i=size/2;i>=0;i--)
        Heapify(a, size, i);
}

void heapSort(int a[], int size){
    buildHeap(a, size);
    for(int i=size-1;i>=0;i--){
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        Heapify(a, i, 0);
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

    heapSort(arr, size);
    display(arr, size);

    return 0;
}