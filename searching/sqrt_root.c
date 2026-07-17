
#include<stdio.h>
int main()
{
    int n;

    printf("enter a number :");
    scanf("%d",&n);
    int low=1,high=n,mid,ans=0;
      while(low<=high)
    {
          mid=(low+high)/2;
          if(mid*mid==n)
          {
               printf("square root of %d is :%d",n,mid);
               return 0;
          }
          else if(mid*mid<n)
          {
                low=mid+1;
          }
          else
          {
                high=mid-1;
          }}
          printf("not a perfect square ");
          return 0;
}
