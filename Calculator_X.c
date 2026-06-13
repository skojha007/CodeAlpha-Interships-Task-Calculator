#include<stdio.h>

int calculator()
{
    int a, b;
    char c;
    printf("\nEnter 1st Number: ");
    scanf("%d", &a);
    printf("Enter Basic Arithmetic Operation to Perform\n (+,-,*,/)\n Your Choice: ");
    scanf(" %c", &c);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    switch (c)
    {
    case '+':
        printf("%d + %d = %d\n", a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d\n", a,b,a-b);
        break;
    case '*':
        printf("%d * %d = %d\n", a,b,a*b);
        break;
    case '/':
        if(b==0){
            printf("Division by zero is not possible.\n");
        }
        else{
            printf("%d / %d = %f\n", a,b,(float)a/b);
        }
        break;
    default:
        printf("Unidentified Operation\n");
        break;
    }

    return 0;
}

int main()
{
    char choice;

    printf("============================\n");
    printf("<This is a Basic Calculator>\n");
    printf("============================\n");

    do {
        calculator();

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using my calculator!\n");
    return 0;
}