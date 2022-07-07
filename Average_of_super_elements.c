#include <stdio.h>
int main()
{
    int i,j,t,t1,n,c=0;
    float sum=0,m=0,res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<=n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                if(i!=j)
                {
                    arr[j]=0;
                }
            }
        }
        if(c==arr[i])
        {
            m=m+1;
            sum=sum+t;
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
    else
    {
       res=(sum/m);
       printf("%.2f",res);
    }
}