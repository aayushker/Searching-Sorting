#include<stdio.h>

int binaryS(int a[], int n, int ele){
    for (int i = 0; i<n; i++){
        if (a[i]==ele){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n,ele;
    printf("Enter the total number of elements you want to enter");
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int pos;
    printf("Enter the element you want to find");
    scanf("%d",&ele);
    pos = binaryS(a, n, ele);
    if (pos==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at location %d",pos);
    }
    return 0;

}