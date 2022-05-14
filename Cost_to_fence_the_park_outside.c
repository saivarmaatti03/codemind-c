#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    {
       int o_r=(l+w+w)*(b+w+w); //outer fence area
       int i_r=(l*b); //inner fence area
       int cost=c*(o_r-i_r); //total cost of fence
    printf("%d",cost);
    }
}