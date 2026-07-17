
#include<stdio.h>
int main()
{
    int n,val;

    printf("enter the number of element:");
    scanf("%d",&n);
    int ar[n];
 printf("enter the sorted elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&val);
    int low=0,high=n-1,mid;
    while(low<=high)
    {
          mid=(low+high)/2;
          if(ar[mid]==val)
          {
                 printf("%d element found at position %d\n",val,mid+1);
                 return 0;
          }
          else if(val<ar[mid])
          {
                high=mid-1;
          }
          else{low=mid+1;}
    }
    printf("%d element not fouund",val);
    return 0;
}
