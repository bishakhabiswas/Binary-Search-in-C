#include<stdio.h>
binary_search(int A[],int n,int key)
{   int left ,right,mid;
   left = 0;
   right = n-1;

   while(left<=right)
   {
       mid=(left+right)/2;
       if(A[mid]==key)

       {
           return mid;
       }
       if(A[mid]<key)
       {
           left = mid+1;
       }
       else {
        right = mid-1;
       }
   }
}
 int main()
{


    int n;
    printf("Enter the number of element of array");
    scanf("%d",&n);
    int A[n];
    int i;
     printf("Enter the elements of array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int key;
    printf("which number u want to search for:?");
    scanf("%d",&key);

    int index = binary_search(A,n,key);

    if(index== -1)
    {
        printf("the key was not found in the array");

    }
    else
    {
        printf("the key found at the array number %d",index);
    }

    return 0;
}

/*#include <stdio.h>
int main()
{
 int a[1000];
 int n;
 printf("Enter the size of array:");
 scanf("%d",&n);
 printf("Enter the element of array:");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);

 }
 int key;
 printf("Enter any key value");
 scanf("%d",&key);
 int left,right,mid;


}*/
