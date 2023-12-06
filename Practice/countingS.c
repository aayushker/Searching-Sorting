#include<stdio.h>

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