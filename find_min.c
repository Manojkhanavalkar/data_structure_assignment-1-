#include<stdio.h>
void main()
{
    int a[10],i,n,min;
    printf("\n enter the no of elements want to enter");
    scanf("%d",&n);
    printf("\n now enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //findig max values
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
         min=a[i];
    }
    printf("\n the min value is %d",min);
}