// This is a C program game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char a, b;
    printf("Enter w for water, s for snake and g for gun : ");
    scanf("%c", &a);
    srand(time(NULL));
    int n = rand() % 3;
    if (n == 0)
    {
        b = 's';
    }
    else if (n == 1)
    {
        b = 'w';
    }
    else if (n == 2)
    {
        b = 'g';
    }

    printf("You have choosen %c\n", a);
    printf("Computer has choosen %c\n", b);

    if ((a == 's' && b == 'w') || (a == 'w' && b == 'g') || (a == 'g' && b == 's'))
    {
        printf("You won!!");
    }
    else if ((a == 's' && b == 's') || (a == 'w' && b == 'w') || (a == 'g' && b == 'g'))
    {
        printf("Match Tie");
    }
    else
    {
        printf("You Lose!!");
    }
    return 0;
}
