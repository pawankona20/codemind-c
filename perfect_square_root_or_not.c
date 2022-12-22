#include<stdio.h>
int main()
{
    int i, number,ps=0;
    scanf("%d", &number);

    if(number == 1 || number == 0)
    {
        printf("True");
        ps=1;
    }

    for(i = 2; i <= number/2; i++)
    {
        if(number == i*i)
        {
            printf("True");
            ps=1;
            break;
        }
    }
    if(ps == 0)
        printf("False");

    return 0;
}