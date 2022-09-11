#include<stdio.h>
#include<stdlib.h>
void Rbsearch(int a[10],int low,int high,int x);
void main()
{
    int i,n;
    int x,a[10];
    printf("\n enter how many array elements:");
    scanf("%d",&n);
    printf("\n enter  array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the value to be search:");
    scanf("%d",&x);
    Rbsearch(a,0,n-1,x);

}
void Rbsearch(int a[10],int low,int high,int x)
{
    int i;
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(x==a[mid])
        {
            printf("\n element element foung at %d",mid+1);
            exit(0);
        }
        else if(x>a[mid])
        Rbsearch(a,mid+1,high,x);
        else if(x<a[mid])
        Rbsearch(a,low,mid-1,x);
    }
    else if(low>high)
    {
        printf("\n element not found");
        exit(0);
    }
    
}