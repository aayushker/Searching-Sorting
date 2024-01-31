// Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, 
// sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.

// In simple terms, we can say that the process of merge sort is to divide the array into two halves, sort each half, and then merge the sorted 
// halves back together. 
// This process is repeated until the entire array is sorted.

// How does Merge Sort work?
// Merge sort is a recursive algorithm that continuously splits the array in half until it cannot be further divided i.e., the array has only 
// one element left (an array with one element is always sorted). 
// Then the sorted subarrays are merged into one sorted array.

#include<stdio.h>

void merge(int arr[], int l, int m, int r){
    int i=l, j=m+1, k=l;
    int temp[r];
    while (i<=m && j<=r){
        if (arr[i]<=arr[j]){
            temp[k] = arr[i];
            i++; k++;
        }
        else{
            temp[k] = arr[j];
            j++; k++;
        }
    }
    while(i<=m){
        temp[k] = arr[i];
        i++; k++;
    }
    while(j<=r){
        temp[k] = arr[j];
        j++; k++;
    }

    for (int p=l; p<=r; p++){
        arr[p] = temp[p];
    }
}

void mergeSort(int arr[], int l, int r){
    if (l<r){
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m , r);
    }
}

void display(int arr[], int size){
    printf("The array is\n");
    for (int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements\n");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    mergeSort(arr, 0, size-1);

    display(arr, size);

    return 0;
}

// Complexity Analysis of Merge Sort
// Time Complexity: O(N log(N)),  Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation. 

// T(n) = 2T(n/2) + θ(n)

// The above recurrence can be solved either using the Recurrence Tree method or the Master method. 
// It falls in case II of the Master Method and the solution of the recurrence is θ(Nlog(N)). 
// The time complexity of Merge Sort isθ(Nlog(N)) in all 3 cases (worst, average, and best) as merge sort always divides the array into two halves 
// and takes linear time to merge two halves.

// Auxiliary Space: O(N), In merge sort all elements are copied into an auxiliary array. So N auxiliary space is required for merge sort.

// Applications of Merge Sort:
// Sorting large datasets: Merge sort is particularly well-suited for sorting large datasets due to its guaranteed worst-case time complexity of O(n log n).
// External sorting: Merge sort is commonly used in external sorting, where the data to be sorted is too large to fit into memory.
// Custom sorting: Merge sort can be adapted to handle different input distributions, such as partially sorted, nearly sorted, or completely unsorted data.
// Inversion Count Problem

// Advantages of Merge Sort:
// Stability: Merge sort is a stable sorting algorithm, which means it maintains the relative order of equal elements in the input array.
// Guaranteed worst-case performance: Merge sort has a worst-case time complexity of O(N logN), which means it performs well even on large datasets.
// Parallelizable: Merge sort is a naturally parallelizable algorithm, which means it can be easily parallelized to take advantage of multiple processors or threads.

// Drawbacks of Merge Sort:
// Space complexity: Merge sort requires additional memory to store the merged sub-arrays during the sorting process. 
// Not in-place: Merge sort is not an in-place sorting algorithm, which means it requires additional memory to store the sorted data. 
// This can be a disadvantage in applications where memory usage is a concern.
// Not always optimal for small datasets: For small datasets, Merge sort has a higher time complexity than some other sorting algorithms, 
// such as insertion sort. This can result in slower performance for very small datasets.