#include<stdio.h>
#include<stdlib.h>

int linearS(int a[], int ele, int n){
    for (int i=0; i<n; i++){
        if (a[i] == ele){
            return i;
            exit(0);
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int ele,search;
    printf("Enter the element to find\n");
    scanf("%d",&ele);
    search = linearS(a, ele, n);
    if (search == -1){
        printf("Element not found\n");
    }
    else{
        printf("The element %d found at %d\n",ele,search+1);
    }
    return 0;
}