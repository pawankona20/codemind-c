#include<stdio.h>
int main()
{
    int n,i,sum=0,sq=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        sq=sq+(i*i);
    }
    int b=sum*sum;
    int c=b-sq;
    printf("%d",c);
}