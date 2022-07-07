#include <stdio.h>
int main()
{
    int i,j=0,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            if(i%2==0)
            {
                j++;
                break;
            }
        }
    }
    if(j==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}