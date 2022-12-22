#include<stdio.h>
int main ()
{
int n,rem,l= 0;
scanf ("%d", &n);

while (n>0)
    {
rem =n%10;
if (l<rem)
 {
       l = rem;
 }
n = n/10;
    }
printf ("%d",l);
return 0;
}