#include<stdio.h>
int main()
{
    int r,n,t,s=0;
    scanf("%d",&n);//123
    t=n;
    while(n)
    {
        r=n%10;//1
        s=(s+r)*10;//3210
        n=n/10;
    }
    s=s/10;
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}