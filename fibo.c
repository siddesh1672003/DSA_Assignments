#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the number:");// for accepting a number
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    if(n==0) // checking if the number is fibonacci number and further printing output
        printf("%d is a Fibonacci Number",n);
    while(c<n) 
    {
         a=b;  
         b=c;
         c=a+b;
    }
    // checking if the number is fibonacci number and printing output
    if(c==n)
        printf("%d is a Fibonacci Number",c);
    else
        printf("%d is not a Fibonacci Number",n);
}
