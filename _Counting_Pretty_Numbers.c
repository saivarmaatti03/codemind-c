#include<stdio.h>
int main()
{
    int n,i,j,n1,n2,r,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&n1,&n2);
        c=0;
        for(j=n1;j<=n2;j++)
        {
            r=j%10;
            if(r==2 || r==3 ||r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}