#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printf("Pass %d: ",i);
        for(int k=0;k<n;k++)
            printf("%d ",arr[k]);
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    insertionSort(arr,n);
    printf("Sorted array is: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
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

// Time Complexity: O(n^2)
// Auxiliary Space: O(1)
// Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order.
// And it takes minimum time (Order of n) when elements are already sorted.
// Algorithmic Paradigm: Incremental Approach
