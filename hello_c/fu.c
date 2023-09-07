#include<stdio.h>
int max(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int a, b, sum;
    scanf("%d,%d", &a, &b);
    sum = a + b;
    printf("sum is:%d\n", sum);
    printf("the bigger number is:%d\n", max(a, b));
    return 0;
}