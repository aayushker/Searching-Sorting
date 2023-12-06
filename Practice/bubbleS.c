#include<stdio.h>

void bubbleS(int a[], int n){
    for (int i=0; i<n-1; i++){
        int flag = 0;
        for (int j=0; j<n-i-1; j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }
}

void display(int arr[], int n){
    printf("The array is: \n");
    for (int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter how many number you want to enter: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    bubbleS(arr,n);
    display(arr,n);

    return 0;
}