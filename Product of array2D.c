#include <stdio.h>
int main()
{
    int arr[3][5];
    int total = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)

        {
            total = total * arr[i][j];
        }

        printf("product of the element:%d\n", total);
    }

    return 0;
}