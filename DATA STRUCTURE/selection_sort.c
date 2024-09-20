#include<stdio.h>
void selectionsort(int arr[],int n){
int i , j , midindex , temp;
for(i=0;i<n-1;i++){
midindex=i;
for(j=i+1;j<n;j++){
if(arr[j]<arr[midindex]){
midindex=j;
}
}
temp=arr[midindex];
arr[midindex]=arr[i];
arr[i]=temp;
}
}
void printarray(int arr[], int size){
for(int i=0; i<size; i++){
printf("%d",arr[i]);
}
printf("\n");
}
int main(){
int arr[]={64,25,12,22,11};
int n=sizeof(arr)/sizeof(arr[0]);
printf("original array:\n");
printarray(arr, n);
selectionsort(arr , n);
printf("sorted array:\n");
printarray(arr , n);
return 0;
}
