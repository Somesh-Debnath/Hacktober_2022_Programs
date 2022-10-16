// This program can swap the values of 2 variables without a need of 3rd variable

#include <stdio.h>

int main(){


    int a,b;
    printf("Enter Value of A\n>>");
    scanf("%d", &a);

    printf("Enter Value of B\n>>");
    scanf("%d",&b);

    printf("As of right now the values of A and B are %d and %d respectively\n", a,b);

    a = a + b - (b = a);

    printf("Now after switching the values without using a third variable the new values of A and B are %d and  %d respectively.\n", a,b);
    
    return 0;

}
