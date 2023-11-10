#include<stdio.h>
#include<stdlib.h>

int binaryS(int* a, int ele, int l, int r){
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (a[mid] == ele)
            return mid;

        if (a[mid] > ele)
            return binaryS(a, ele, l, mid - 1);

        return binaryS(a, ele, mid + 1, r);
    }

    return -1;
}

int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array\n");
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int ele,pos;
    printf("Enter the ele to find\n");
    scanf("%d",&ele);
    pos = binaryS(a, ele, 0, n-1);
    if (pos == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element %d found at %d\n",ele, pos+1);
    }
    return 0;
}