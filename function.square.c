#include <stdio.h>

int square(int sq)
{

    return sq * sq;
}

int main()
{
    int result;
    int n;
    scanf("%d\n", &n);
    result = square(n);
    printf("%d\n", result);
    return 0;
}
