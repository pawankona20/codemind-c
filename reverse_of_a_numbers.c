#include<stdio.h>
int main()
{
    int a,n,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        r=r*10+a;
    }
    printf("%d",r);
}