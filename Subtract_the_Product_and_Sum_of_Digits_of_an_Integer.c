#include<stdio.h>
int main()
{
    int n,s=0,r,pro=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        pro=pro*r;
        s=s+r;
        n/=10;
    }
    printf("%d",pro-s);
}