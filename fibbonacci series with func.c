#include<stdio.h>
int fib[40];
int fibo(int n)
{
    if(fib[n]!=0)
    return fib[n];
    if(n==1||n==2)
    return fib[n];
    fib[n]=fibo(n-1)+fibo(n-2);
    return fib[n];
}
int main()
{
    int x,i;
    fib[1]=1;
    fib[2]=1;
    scanf("%d",&x);
    fibo(x);
    for(i=0;i<=x;i++)
    {
        printf("%d\t",fib[i]);
    }
    return 0;
}