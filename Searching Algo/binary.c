// C program to implement Binary Search
// Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. 

// Procedure
// Compare the middle element of the search space with the key. 
// If the key is found at middle element, the process is terminated.
// If the key is not found at middle element, choose which half will be used as the next search space.
// If the key is smaller than the middle element, then the left side is used for next search.
// If the key is larger than the middle element, then the right side is used for next search.
// This process is continued until the key is found or the total search space is exhausted.

#include <stdio.h>

// An iterative binary search function.
int binarySearch(int arr[], int n, int ele)
{
	int l =0 , r =n-1;
	while (l <= r)
	{
		int mid = l + (r - l) / 2;

		// Check if ele is present at mid
		if (arr[mid] == ele)
			return mid+1;

		// If ele greater, ignore left half
		if (arr[mid] < ele)
			l = mid + 1;

		// If ele is smaller, ignore right half
		else
			r = mid - 1;
	}

	// If we reach here, then element was not present
	return -1;
}

// Driver code
int main(){
    int n;
    printf("Enter how many elements you want to enter ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array\n");
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int ele, pos;
    printf("Enter the element you want to find ");
    scanf("%d",&ele);
    pos = binarySearch(a,n,ele);

    if (pos == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at %d",pos);
    }
    return 0;
}

// Complexity Analysis of Binary Search:
// ----------------------------------------

// Time Complexity: 
// Best Case: O(1)
// Average Case: O(log N)
// Worst Case: O(log N)
// Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space will be O(logN).

// Advantages of Binary Search:
// Binary search is faster than linear search, especially for large arrays.
// More efficient than other searching algorithms with a similar time complexity, such as interpolation search or exponential search.
// Binary search is well-suited for searching large datasets that are stored in external memory, such as on a hard drive or in the cloud.

// Drawbacks of Binary Search:
// The array should be sorted.
// Binary search requires that the data structure being searched be stored in contiguous memory locations. 
// Binary search requires that the elements of the array be comparable, meaning that they must be able to be ordered.

// Applications of Binary Search:
// Binary search can be used as a building block for more complex algorithms used in machine learning, such as algorithms for training neural networks or finding the optimal hyperparameters for a model.
// It can be used for searching in computer graphics such as algorithms for ray tracing or texture mapping.
// It can be used for searching a database.