#include <stdio.h>

int sumArray(int arr[5])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return (float)sum / 5;
}

int main()
{
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = sumArray(arr);
    printf("%d", result);
    return 0;
}