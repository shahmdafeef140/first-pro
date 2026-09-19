#include <stdio.h>
void square(int sq)
{
    printf("%d\n", sq);
}

int main()
{
    int a;
    scanf("%d", &a);
    square(a * a);

    return 0;
}