#include <stdio.h>

int findSum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", findSum(a, b));
    return 0;
}
