#include<stdio.h>
int main()
{
	int i,sum=0,oddsum=0,n,a[n];
	int ad;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
	    if(a[i]%2==0)
	    {
	    sum=sum+a[i];
	    }
	}
	for(i=0;i<=n;i++)
	{
	    if(a[i]%2!=0)
	    {
	    oddsum=oddsum+a[i];
	    }
	}
	ad=sum-oddsum;
	if(ad<0)
	{
	    ad=-ad;
	}
	printf("%d",ad);
}