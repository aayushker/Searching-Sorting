// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
// This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

// In Bubble Sort algorithm, 
// traverse from left and compare adjacent elements and the higher one is placed at right side. 
// In this way, the largest element is moved to the rightmost end at first. 
// This process is then continued to find the second largest and place it and so on until the data is sorted.

// 1. The function bubbleS takes an array arr[] and its size n as input.
// 2. It uses two nested loops to iterate over the array. The outer loop i goes from 0 to n-2 , and the inner loop
// j goes from 0 to n-i-2.
// 3. A flag variable is initialized to 0 at the start of each outer loop iteration. This flag is used to check if any
// swaps occurred during the inner loop iteration.
// 4. In the inner loop, each element arr[j] is compared with the next element arr[j+l] . If arr[j] is greater
// than arr[j+l] they are in the wrong order and need to be swapped.
// 5. The swap is done using a temporary variable temp . After the swap, flag is set to 1 to indicate that a swap has occurred.
// 6. After each inner loop iteration, if flag is still , it means no swaps occurred, which means the array is
// already sorted. In this case, the function breaks out of the outer loop early.
// 7. The function returns when it's done sorting the array.

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

// Complexity Analysis of Bubble Sort:
// Time Complexity: O(N^2)
// Auxiliary Space: O(1)

// Advantages of Bubble Sort:
// Bubble sort is easy to understand and implement.
// It does not require any additional memory space.
// It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

// Disadvantages of Bubble Sort:
// Bubble sort has a time complexity of O(N2) which makes it very slow for large data sets.
// Bubble sort is a comparison-based sorting algorithm, which means that it requires a comparison operator to determine the relative order of elements in the input data set. 
// It can limit the efficiency of the algorithm in certain cases.