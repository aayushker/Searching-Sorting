//*** Linear Search ***//
// Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set.

#include<stdio.h>
#include<stdlib.h>

int search(int arr[], int ele, int n){
    for (int i=0; i<n; i++){
        if (arr[i] == ele){
            return i;
        }
    }
}

int main(){
    int n,ele,pos;
    printf("Enter how many elements you want to enter: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements in the array:\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search");
    scanf("%d",&ele);
    pos= search (arr, ele, n);
    printf("Element found on position %d", pos+1);
    return 0;
}