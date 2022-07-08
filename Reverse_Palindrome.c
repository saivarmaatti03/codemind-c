#include <stdio.h>
int main()
{
    int k,r,t,sum,z,p=0;
    scanf("%d",&k);
    x:
    sum=0;
    t=k;
    z=k;
    while(t>0)
    {
        r=t%10;
        sum=(sum+r)*10;
        t=t/10;
    }
    sum=sum/10;
    z=z+sum;
    k=z; 
    p=0;
    while(z>0)
    {
        r=z%10;
        p=(p+r)*10;
        z=z/10;
    }
    p=p/10;
    if(k==p)
    {
        printf("%d",p);
    }
    else
    {
        goto x;
    }
    
}