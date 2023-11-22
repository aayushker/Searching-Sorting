#include<stdio.h>

int binaryS(int a[], int l, int r, int ele){
    while (l<=r){
        int mid = (l+r)/2;
        if (a[mid]==ele){
            return mid+1;
        }
        else{
            if (a[mid]>ele){
                return binaryS(a,l,mid-1,ele);
            }
            else if (a[mid]<ele){
                return binaryS(a,mid+1,r,ele);
            }
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter the total number of elements you want to enter ");
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int ele, pos;
    printf("Enter the element you want to search ");
    scanf("%d",&ele);
    pos = binaryS(a, 0, n-1, ele);
    
    if (pos==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element is found at %d",pos);
    }
    return 0;
}