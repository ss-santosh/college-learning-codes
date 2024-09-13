#include <stdio.h>
int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100],n,key;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, n, key);
    printf("enter the number you want to input\n");
    scanf("%d",&n);
    printf("enter %d numbers \n",n);
    for(i=0;i<n;i++)
    {printf    }
    if (result != -1)
    {
        printf("Element %d found at index %d\n", key, result);
    }
    else
    {
        printf("Element %d not found in the array\n", key;
    }
    return 0;
}

