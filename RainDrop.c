#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int k;
    k=n;
    char str[5];
    if(n%3==0)
    {
        printf("Pling");
    }
    if(n%5==0)
    {
        printf("Plang");
    }
    if(n%7==0)
    {
        printf("Plong");
    }
    if(n%7!=0 && n%3!=0 && n%5!=0)
    {
        //sprintf(str,"%d",n);
        printf("%d",n);
    }
}