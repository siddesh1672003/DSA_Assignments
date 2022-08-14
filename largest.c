#include<stdio.h>
int main()
{
    int a[5],i,max=0,n;
    printf("Enter the Array Size  :");
    scanf("%d",&n);
    printf("Enter the elements in Array");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
       //printf("\n");
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
           {
            max=a[i];
           }
    }

    printf("Largest Number in the array is %d",max);


}
