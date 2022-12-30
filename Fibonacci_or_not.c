#include <stdio.h>
int main() 
{
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    scanf("%d",&n);
    while(nextTerm<n) 
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    if(nextTerm==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}