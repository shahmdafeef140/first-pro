#include <stdio.h>
void eat(char first, int turn)
{
    if (turn > 5)
    {
        return;
    }
    if (first == 'A')
    {
        if (turn % 2 == 1)
        {
            printf("Karim eats first\n");
        }
        else
        {
            printf("ram eats first\n");
        }
    }
    if (first == 'B')
    {
        if (turn % 2 == 1)
        {
            printf("ram eats first\n");
        }
        else
        {
            printf("Karim eats first\n");
        }
    }
    eat(first, turn + 1);
}

int main()
{
    char first;
    scanf(" %c", &first);
    eat(first, 1);
    return 0;
}