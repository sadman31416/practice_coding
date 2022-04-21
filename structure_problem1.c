#include<stdio.h>
float l,m;

typedef struct 
{
    /* data */
    int p;
    int q;
}rationtal;
int add(rationtal a)
{
    return a.q+a.p;
}
int min(rationtal a)
{
    return a.p-a.q;
}
int mult(rationtal a)
{
    return a.p*a.q;
}
int div(rationtal a)
{
    float f;
    l=a.p*1.0;
    m=a.q*1.0;

    f=(float)l/m;
    printf("%d/%d=%.2f\n",a.p,a.q,f);
    return 0;
}
int gcd(rationtal a)
{
    int n;
    while(a.q!=0)
    {
        n=a.q;
        a.q=a.p%a.q;
        a.p=n;
    }
    return a.p;
    
}
int main()
{
    rationtal x;
    printf("type the value of x and y in one line\n");
    scanf("%d %d",&x.p,&x.q);
    printf("%d+%d=%d\n",x.p,x.q,add(x));
    printf("%d-%d=%d\n",x.p,x.q,min(x));
    printf("%d*%d=%d\n",x.p,x.q,mult(x));
    div(x);
    printf("gcd of %d and %d is :%d",x.p,x.q,gcd(x));
    
    return 0;
}

