#include<stdio.h>

int binaryS(int a[], int n, int ele){
    int l=0, r=n-1;
    while (l<=r){
        int mid = (l+r)/2;

        if (a[mid]==ele){
            return mid+1;
        }
        else{
            if (a[mid]>ele){
                r = mid-1;
            }
            else{
                l = mid+1;
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