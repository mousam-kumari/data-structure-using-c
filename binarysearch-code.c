#include<stdio.h>
int bsearch(int a[],int s,int e,int key)
{
     int i,j;
     i=s;
     j=e;
     while(i<j)
{
    int mid=(i+j)/2;
    if(a[mid]==key)
       return mid;
    else if(a[mid]<key)
      i=mid+1;
    else if(a[mid]>key)
      j=mid-1; 
}
    return -1;
}
void main()
{
   int a[100],key,n;
   printf("enter the number of elements in an array:");
   scanf("%d",&n);
   printf("enter the array ");
   for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("enter the element to be searched");
   scanf("%d",&key);
   for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
    {
         if(a[i]<a[j])
            {
	int temp=a[i];
	a[i]=a[j];
                   a[j]=temp;
              }
      }
   if(bsearch(a,0,n-1,key)==-1)
        printf("%d is not found at location %d \n");
   else
        printf("element is found at location %d",bsearch(a,0,n-1,key));
          
}