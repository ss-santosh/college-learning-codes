//COUNTING SORT
#include <stdio.h>

int getMax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
        max = a[i];  
   }  
   return max; //maximum element from the array  
}  

void countSort(int a[],int n)
{
    int output[n];
    int max=getMax(a,n);
    int count[max+1];
    
    for (int i = 0; i <= max; ++i)   
    {  
        count[i] = 0; // Initialize count array with all zeros  
    } 
    for (int i = 0; i < n; i++) // Store the count of each element  
    {  
    count[a[i]]++;  
    }  
    for(int i = 1; i<=max; i++) 
    {
      count[i] =count[i]+count[i-1]; //find cumulative frequency  
    }
    for (int i = n - 1; i >= 0; i--) 
    {  
    output[--count[a[i]]]=a[i]; // decrease count for same numbers  
    } 
    for(int i = 0; i<n; i++) 
    {  
      a[i] = output[i]; //store the sorted elements into main array  
    }  
}
void printArray(int a[], int n) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}
int main()  
{    
    int a[100],n,i;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the %d elements of array\n",n);
    for (i = 0; i < n; i++)  
        scanf("%d",&a[i]); 
    printf("Before sorting array elements are - \n");
    printArray(a, n);  
    countSort(a,n);   
    printf("\nAfter sorting array elements are - \n");    
    printArray(a, n);  
    return 0;
}
/* OUTPUT
Enter the size of an array:
5
Enter the 5 elements of array
45
96
87
26
84
Before sorting array elements are - 
45 96 87 26 84 
After sorting array elements are - 
26 45 84 87 96
*/
