#include <stdio.h>

// Function prototypes
void indexsequentialsearch(int arr[], int key, int n);
void seqsearch(int arr[], int start, int end, int key);

int main()
{
    int n, key, arr[40];
    printf("enter the no of elements in an array");
    scanf("%d", &n);
    printf("enter all the elements of an array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the key");
    scanf("%d", &key);
    indexsequentialsearch(arr, key, n);
    return 0;
}

void indexsequentialsearch(int arr[], int key, int n)
{
    int index[20];
    int j = 0, start, end, bs, x = 0;
    printf("enter the block size");
    scanf("%d", &bs);

    // Initialize index array
    for (int i = 0; i < n; i = i + bs)
    {
        index[x++] = i;
    }

    if (key < index[0] || key > arr[index[x - 1]])
    {
        printf("Sorry! Key not found in the array");
    }
    else
    {
        for (int i = 1; i < x; i++)
        {
            if (key < arr[index[i]])
            {
                start = index[i - 1];
                end = start + bs - 1; // Adjust end to stay within the block
                break;
            }
        }
    }
    seqsearch(arr, start, end, key);
}

void seqsearch(int arr[], int start, int end, int key)
{
    int i;
    int flag = 0;
    for (i = start; i <= end; i++)
    {
        if (key == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("key not found");
    }
    else
    {
        printf("key found at %d position", i + 1);
    }
}