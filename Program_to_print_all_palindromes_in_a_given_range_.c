#include<stdio.h>
int main()
{
    int n1,n2,i,r,k=0,temp;
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
        temp=i;
        k=0;
        while(temp>0)
        {
            r=temp%10;
            k=(k+r)*10;
            temp=temp/10;
        }
        k=k/10;
        if(i==k)
        {
            printf("%d ",i);
        }
    }
}