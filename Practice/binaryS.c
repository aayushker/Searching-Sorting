#include<stdio.h>

int binaryS(int a[], int n, int ele){
    int low =0 , high =n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if (a[mid] == ele){
            return mid+1;
        }
        else{
            if (a[mid]>ele){
               high = mid-1;
            }
            else{
                 low = mid+1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter how many elements you want to enter ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array\n");
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int ele, pos;
    printf("Enter the element you want to find ");
    scanf("%d",&ele);
    pos = binaryS(a,n,ele);

    if (pos == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at %d",pos);
    }
    return 0;
}