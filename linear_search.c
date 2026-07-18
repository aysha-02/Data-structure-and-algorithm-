#include<stdio.h>
int main()
{
    int n,val;

    printf("enter the number of element:");
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&val);
    for(int i=0; i<n; i++)
    {
        if(ar[i]==val)
        {
            printf("%d element found at position %d\n",val,i+1);
            return 0;
        }
    }

    printf( printf("%d element not found",val);
    return 0;
}
