#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Remove the last digit
    number = number / 10;

    printf("Number after removing the last digit: %d\n", number);

    return 0;
}