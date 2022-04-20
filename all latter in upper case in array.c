#include<stdio.h>
int main()
{
    char ch[]={'B','a','n','g','l','a','d','e','s','h'};
    int i;

    for(i=0;i <10;i++)
    {
        if(ch[i] >= 97 && ch[i] <= 122)
        {
            ch[i]='A' +( ch[i] -'a');
        }
    }
    printf("%s \n",ch);
    return 0;

}
