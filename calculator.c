#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int mod(int a, int b)
{
    return a % b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{

    int num1, num2, choice;

    for (;;)
    {

        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting program...");
            break;
        }

        printf("Enter num1: ");
        scanf("%d", &num1);

        printf("Enter num2: ");
        scanf("%d", &num2);

        switch (choice)
        {

        case 1:
            printf("Addition %d\n", add(num1, num2));
            break;

        case 2:
            printf("Subtraction %d\n", sub(num1, num2));
            break;

        case 3:
            printf("Multiplication %d\n", mul(num1, num2));
            break;

        case 4:
            if (num2 != 0)
                printf("Division %d\n", div(num1, num2));
            else
                printf("Cannot divide by zero\n");
            break;

        case 5:
            printf("Modulus %d\n", mod(num1, num2));
            break;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}