#include <stdio.h>
void eat(char first, int turn)
{
    if (turn > 5)
    {
        return;
    }
    if (first == 'H')
    {
        if (turn % 2 == 1)
        {
            printf("Musfiq eats the food\n");
        }
        else
        {
            printf("Tanvir eats the food\n");
        }
    }
    if (first == 'T')
    {
        if (turn % 2 == 1)
        {
            printf("Tanvir eats the food\n");
        }
        else
        {
            printf("Musfiq eats the food\n");
        }
    }

    eat(first, turn + 1);
}

int main()
{
    char first;
    scanf("%c", &first);
    eat(first, 1);
    return 0;
}