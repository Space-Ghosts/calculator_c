#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "subtract.h"
#include "add.h"
#include "multiply.h"
#include "divide.h"
#include "modulo.h"

//#define NUM1 5
//#define NUM2 0

int main (int argc, char* argv[])
{
    if (4 == argc)
    {
        int num1       = atoi(argv[1]);
        int num2       = atoi(argv[3]);
        char operator  = argv[2][0];

        int tempnum    = 0;
        argc = argc;
        printf("[]----CALCULATOR----[]\n");
        printf("Num1: %d\n", num1);
        printf("Num2: %d\n", num2);
        printf("Operator: %c\n\n", operator);

        switch (operator)
        {
            case '+':
                tempnum = add(num1, num2);
                printf("%d + %d = %d\n",num1, num2, tempnum);
                break;

            case '-':
                tempnum = subtract(num1, num2);
                printf("%d - %d = %d\n",num1, num2, tempnum);
                break;

            case '*':
                tempnum = multiply(num1, num2);
                printf("%d * %d = %d\n",num1, num2, tempnum);
                break;

            case 'x':
                tempnum = multiply(num1, num2);
                printf("%d x %d = %d\n",num1, num2, tempnum);
                break;

            case '/':
                printf("%d ÷ %d = ", num1, num2);
                if (0 != num2)
                {
                    tempnum = divide(num1, num2);
                    printf("%d\n", tempnum);
                }
                else
                {
                    printf("Error: Cannot divide by zero\n");
                }
                break;

            case '%':
                printf("%d %% %d = ", num1, num2);
                if (0 != num2)
                {
                    tempnum = modulo(num1, num2);
                    printf("%d\n", tempnum);
                }
                else
                {
                    printf("Error: Cannot divide by zero\n");
                }
                break;

            default:
                printf("  []----[ERROR]----[]\n");
                printf("Operator provided invalid!\n");
                printf(" - Can only be the following: +, -, x, /, %%\n");
        }
    }

    else
    {
        printf("  []----[ERROR]----[]\n");
        printf("Must have valid arguments when executing this file\n");
        printf("Format:   $./calc 5 + 5\n");
    }

}

//end of calc.c file
