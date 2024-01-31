// QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.
// The key process in quickSort is a partition(). The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot.

// Partition is done recursively on each side of the pivot after the pivot is placed in its correct position and this finally sorts the array.

// How Quicksort works

#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    // Choose the rightmost element as pivot
    int pivot = arr[high];
    
    // Index of smaller element
    int i = (low - 1);
    
    // Traverse through all elements
    // Compare each element with pivot
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;
            // Swap arr[i] and arr[j]
            swap(&arr[i], &arr[j]);
        }
    }
    
    // Swap the pivot element with the element at (i + 1)
    swap(&arr[i + 1], &arr[high]);
    
    // Return the pivot index
    return (i + 1);
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array
        int pivotIndex = partition(arr, low, high);
        
        // Recursively sort the sub-arrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Driver code
int main() {
    int size; 
    printf("Enter how many elements you want to enter ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements\n");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    quickSort(arr, 0, size - 1);
    
    printf("Sorted array: ");
    printArray(arr, size);
    
    return 0;
    
}

// Time Complexity:
// Best Case: Ω (N log (N))
// The best-case scenario for quicksort occur when the pivot chosen at the each step divides the array into roughly equal halves.
// In this case, the algorithm will make balanced partitions, leading to efficient Sorting.
// Average Case: θ ( N log (N))
// Quicksort’s average-case performance is usually very good in practice, making it one of the fastest sorting Algorithm.
// Worst Case: O(N2)
// The worst-case Scenario for Quicksort occur when the pivot at each step consistently results in highly unbalanced partitions. When the array is already sorted and the pivot is always chosen as the smallest or largest element. To mitigate the worst-case Scenario, various techniques are used such as choosing a good pivot (e.g., median of three) and using Randomized algorithm (Randomized Quicksort ) to shuffle the element before sorting.
// Auxiliary Space: O(1), if we don’t consider the recursive stack space. If we consider the recursive stack space then, in the worst case quicksort could make O(N).

// Advantages of Quick Sort:
// It is a divide-and-conquer algorithm that makes it easier to solve problems.
// It is efficient on large data sets.
// It has a low overhead, as it only requires a small amount of memory to function.

// Disadvantages of Quick Sort:
// It has a worst-case time complexity of O(N2), which occurs when the pivot is chosen poorly.
// It is not a good choice for small data sets.
// It is not a stable sort, meaning that if two elements have the same key, their relative order will not be preserved in the sorted output in case of quick sort, because here we are swapping elements according to the pivot’s position (without considering their original positions).