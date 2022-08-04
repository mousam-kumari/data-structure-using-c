#include<stdio.h>
void main()
{
   int a[100],i,ele,n;
   printf("enter the number of elements in an array:");
   scanf("%d",&n);
   printf("enter the array ");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("enter the element to be searched");
   scanf("%d",&ele);
   for(i=0;i<n;i++)
   {
         if(a[i]==ele)
            {
              printf("%d is found at location %d \n",ele,i+1);
              break;
             }
         else
           {
              printf("%d is not present in the array",ele);
               break;
            }
     }
}