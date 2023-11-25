#include<stdio.h>

int bubbleS(int arr[], int n){
    int i,j;
    for (i=0; i<n-1; i++){
        int flag = 0;
        for (j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }
    return 0;
}

void display(int arr[], int n){
    printf("The array is\n");
    for (int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int n;
    printf("How many elements you want to enter ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int  i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    bubbleS(arr,n);
    display(arr,n);
    return 0;

}