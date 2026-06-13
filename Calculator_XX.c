#include<stdio.h>
int main()
{
    int a,b;
    char c, choice;

    do {
        printf("This is a Basic Calculator\n");
        printf("Enter 1st Number: ");
        scanf("%d", &a);
        printf("Enter 2nd number:");
        scanf("%d", &b);
        printf("Enter Basic Arithmetic Operation to Perform\n (+,-,*,/)\n Your Choice: ");
        scanf(" %c", &c);

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
                printf("%d / %d = %d\n", a,b,a/b);
            }
            break;
        default:
            printf("Unidentified Operation\n");
            break;
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}