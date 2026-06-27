#include <stdio.h>

int findMax(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",findMax(a,b));
    return 0;
}