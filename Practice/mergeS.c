#include<stdio.h>

void merge(int arr[], int l, int m, int r){
    int i=l, j=m+1, k=0;
    int temp[r];
    while (i<=m && j<=r){
        if (arr[i]<=arr[j]){
            temp[k] = arr[i];
            i++; k++;
        }
        else{
            temp[k] = arr[j];
            j++; k++;
        }
    }
    while(i<=m){
        temp[k] = arr[i];
        i++; k++;
    }
    while(j<=r){
        temp[k] = arr[j];
        j++; k++;
    }

    for (int p=0; p<k; p++){
        arr[l+p] = temp[p];
    }
}

void mergeSort(int arr[], int l, int r){
    if (l<r){
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m , r);
    }
}

void display(int arr[], int size){
    printf("The array is\n");
    for (int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements\n");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    mergeSort(arr, 0, size-1);

    display(arr, size);

    return 0;
}