#include<stdio.h>
int main()
{
    int h,m,i,p;
    float y=0;
    scanf("%d %d",&i,&p);
    if((i>=0 && i<12)&&(p>=0 && p<60))
    {
        float h=i;
        float m=p;
        y =((30*h)-(11*m)/2);
        if(y<0)
        {
            y *=-1;
        }
        if(y>180)
        {
            y=360-y;
        }
        printf("%.7f",y);
    }
    return 0;

}
