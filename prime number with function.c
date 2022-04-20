#include<stdio.h>
#include<math.h>

int prime(long long int n)
{
    int i,root;

    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return 0;
    }
    root =sqrt(n);

    for(i=3;i <=root;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long int i,k=0,x;
    scanf("%lld",&x);
    if((x>=1)&&(x<500000)){
    for(i=2;i<=500002;i++){

    if(1==prime(i))
        {
            k++;
        }
        if(k==x){
            printf("%lld",i);
            break;
        }
    }
    }

    return 0;

}
