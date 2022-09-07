#include<stdio.h>
int lsearch(int [],int,int);
void main()
{
    int i,n,a[10],search,ans;
    printf("\n enter the values of n");
    scanf("%d",&n);
    printf("\nNow enter the values of array");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the element to be search");
    scanf("%d",&search);
    ans=lsearch(a,n,search);
    printf("\n the element is at %d position",ans);
}
int lsearch(int a[10],int n,int search)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            return (i+1);
            break;
        }
    }
    return -1;
}