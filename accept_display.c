#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("\n enter the no of elements want to enter");
    scanf("%d",&n);
    printf("\n now enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n displaying arrays");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}