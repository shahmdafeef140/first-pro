#include <stdio.h>
int maximum(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a, b, max;
    scanf("%d %d", &a, &b);
    max = maximum(a, b);
    printf("%d\n", max);

    return 0;
}