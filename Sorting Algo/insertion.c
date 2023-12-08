// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
// The array is virtually split into a sorted and an unsorted part.
// Values from the unsorted part are picked and placed at the correct position in the sorted part.

// Insertion Sort Algorithm
// To sort an array of size N in ascending order iterate over the array and compare the current element (key) to its predecessor, 
// if the key element is smaller than its predecessor, compare it to the elements before.
//  Move the greater elements one position up to make space for the swapped element.

#include<stdio.h>

void insertionSort(int arr[], int size){
    
    for (int i=1; i<size; i++){
        int j, key;
        key = arr[i];
        j = i-1;

        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        printf("Pass %d: ",i); 
        for(int k=0; k<size; k++)
            printf("%d ",arr[k]);
        printf("\n");
    }
}

void display(int arr[], int size){
    printf("The sorted array is\n");
    for (int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter how many elements you want: ");
    scanf("%d",&size);

    int arr[size]; 
    printf("Enter the elements\n");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("_______________________");
    insertionSort(arr, size);
    display(arr, size);

    return 0;
}

// Output:
// Enter the number of elements: 5
// Enter the elements: 5 4 3 2 1
// Pass 1: 4 5 3 2 1
// Pass 2: 3 4 5 2 1
// Pass 3: 2 3 4 5 1
// Pass 4: 1 2 3 4 5
// Sorted array is: 1 2 3 4 5

// Complexity Analysis of Insertion Sort:

// Time Complexity of Insertion Sort
// The worst-case time complexity of the Insertion sort is O(N^2)
// The average case time complexity of the Insertion sort is O(N^2)
// The time complexity of the best case is O(N).

// Space Complexity of Insertion Sort
// The auxiliary space complexity of Insertion Sort is O(1)

// Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order.
// And it takes minimum time (Order of n) when elements are already sorted.

// Algorithmic Paradigm: Incremental Approach

// Characteristics of Insertion Sort
// This algorithm is one of the simplest algorithms with a simple implementation
// Basically, Insertion sort is efficient for small data values
// Insertion sort is adaptive in nature, i.e. it is appropriate for data sets that are already partially sorted.

// In depth explanation:
// 1. The function insertionSort takes an array arr[] and its length n
// as input.
// 2. It starts from the second element (index 1) of the array and
// considers it as the key.
// 3. It compares this key with the elements before it. If an element is
// greater than the key, it shifts that element one position to the right.
// 4. This process continues until it finds an element smaller than the key
// or reaches the beginning of the array. It then places the key in the
// correct position.
// 5. The process repeats for all elements in the array, resulting in a
// sorted array.
// 6. After each pass, it prints the current state of the array.

// Here's a step-by-step breakdown:
// 1; i < n; i++) : This loop goes through each element in
// • for (i =
// the array starting from the second element.
// - 1; : The current element is considered as
// • key = arr[i]; j = 1
// the key and j is set to the index of the previous element.
// • while (j && arr[j] > key) : This loop shifts all elements
// greater than the key one position to the right.
// • arr[j + 1] = arr[j]; J
// - 1; : This shifts the current element
// one position to the right and decrements j .
// • arr[j + 1] = key; : After all greater elements have been shifted,
// the key is placed in its correct position.
// • Xd: "*i); : This prints the pass number.
// • for(int 1<20; k<n; k++) : This prints the
// array after each pass.
// • printf("\n"); : This prints a newline character for formatting.