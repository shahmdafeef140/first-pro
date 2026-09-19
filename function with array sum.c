#include <stdio.h>

int sumArray(int arr[5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[5];
    int result;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    result = sumArray(arr);
    printf("%d\n", result);
    return 0;
}