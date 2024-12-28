#include <stdio.h>

// +-&/%

int add(int num1, int num2)
{
    printf("The sum of %d + %d is: %d", num1, num2, num1 + num2);
}

int minus(int num1, int num2)
{
    printf("The sum of %d - %d is: %d", num1, num2, num1 - num2);
}

int multiply(int num1, int num2)
{
    printf("The sum of %d * %d is: %d", num1, num2, num1 * num2);
}

float divide(int num1, int num2)
{
    printf("The sum of %d / %d is: %.2f", num1, num2, (float)num1 / num2);
}

int modulo(int num1, int num2)
{
    printf("The sum of %d %% %d is: %d", num1, num2, num1 % num2);
}

int main()
{
    int num1, num2, choice;

    printf("Enter your number 1: ");
    scanf("%d", &num1);

    printf("Enter your number 2: ");
    scanf("%d", &num2);

    printf("\n\nPress 1 for addition\n");
    printf("Press 2 for subtract\n");
    printf("Press 3 for multiply\n");
    printf("Press 4 for divide\n");
    printf("Press 5 for modulo\n");
    printf("Press 6 for exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n");
    switch (choice)
    {
    case 1:
        add(num1, num2);
        break;

    case 2:
        minus(num1, num2);
        break;

    case 3:
        multiply(num1, num2);
        break;

    case 4:
        divide(num1, num2);
        break;

    case 5:
        modulo(num1, num2);
        break;
    case 6:
        printf("Exit");
        break;

    default:
        printf("Enter choice between 1 to 6");
        break;
    }
}