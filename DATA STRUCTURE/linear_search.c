#include<stdio.h>
int linearsearch(int a[],int n,int target)
{
int i;
for(i=0;i<n;i++);
 {
  if(a[i]==target)
  {
   return i;
  }
 }
 return -1;
}
int main()
{
 int a[100],n,target,i;
 printf("enter the number you want to input\n");
 scanf("%d",&n);
 printf("enter %d numbers\n",n);
 for( i=0;i<n;i++)
  {printf("element %d=",i+1);
  scanf("%d",&a[i]);
  }
  printf("enter the element you want to search\n");
  scanf("%d",&target);
 int result=linearsearch(a,n,target);
 if(result!=-1)
 {
  printf("%d element not found in the array.\n",target);
 }
 else
 {
  printf("%d element found at position:%d\n",target,i);
 }
 return 0;
}
