#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a=0, b=1;
    int nex=a+b;
    printf("%d %d",a,b);
    for(i=3;i<=n;++i)
    {
        printf(" %d",nex);
        a=b;
        b=nex;
        nex=a+b;
    }
}