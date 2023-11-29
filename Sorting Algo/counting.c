// Counting Sort is a non-comparison-based sorting algorithm that works well when there is limited range of input values. 
// It is particularly efficient when the range of input values is small compared to the number of elements to be sorted. 
// The basic idea behind Counting Sort is to count the frequency of each distinct element in the input array and use that information to place 
// the elements in their correct sorted positions.

// Counting Sort Algorithm
// Declare an auxiliary array countArray[] of size max(inputArray[])+1 and initialize it with 0.
// Traverse array inputArray[] and map each element of inputArray[] as an index of countArray[] array, 
// i.e., execute countArray[inputArray[i]]++ for 0 <= i < N.
// Calculate the prefix sum at every index of array inputArray[].
// Create an array outputArray[] of size N.
// Traverse array inputArray[] from end and update outputArray[ countArray[ inputArray[i] ] – 1] = inputArray[i]. 
// Also, update countArray[ inputArray[i] ] = countArray[ inputArray[i] ]–.

#include<stdio.h>

void countingSort(int inputArray[], int size){

    int max = inputArray[0];
    for (int i=1; i<size; i++){
        if (inputArray[i] > max)
            max = inputArray[i];
    }

    int outputArray[size];
    int countArray[max+1];
    for (int i=0; i<max+1; i++){
        countArray[i] = 0;
    }

    for (int i=0; i<size; i++){
        ++countArray[inputArray[i]];
    }

    for (int j=1; j<=max; j++){
        countArray[j] += countArray[j-1]; 
    }

    for (int k=0; k<size; k++){
        outputArray[--countArray[inputArray[k]]] = inputArray[k];
    }

    for (int l=0; l<size; l++){
        inputArray[l] = outputArray[l];
    }
}

void display(int arr[], int size){
    printf("The array is:\n" );
    for (int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter how many elements you want to enter: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements:\n");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    countingSort(arr, size);
    display(arr, size);

    return 0;
}

// Complexity Analysis of Counting Sort:
// Time Complexity: O(N+M), where N and M are the size of inputArray[] and countArray[] respectively.
// Worst-case: O(N+M).
// Average-case: O(N+M).
// Best-case: O(N+M).
// Auxiliary Space: O(N+M), where N and M are the space taken by outputArray[] and countArray[] respectively.

// Advantages of Counting Sort
// Counting sort generally performs faster than all comparison-based sorting algorithms, such as merge sort and quicksort, 
// if the range of input is of the order of the number of input.
// Counting sort is easy to code
// Counting sort is a stable algorithm.

// Disadvantages of Counting Sort
// Counting sort doesn’t work on decimal values.
// Counting sort is inefficient if the range of values to be sorted is very large.
// Counting sort is not an In-place sorting algorithm, It uses extra space for sorting the array elements.