#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    long multiplier = 0;
    long number = 0;
    long add = 0;
    long number_add = 0;
    long number_substract = 0;
    long substract = 0;
    long divide = 0;
    long number_divide = 0;


    int menuchoice;
    printf("=====Welcome to the remake of CalculatorNX named accordingly CalculatorNX2o2o=====\n");

    printf("1. Multiply\n\n");

    printf("2.Add\n\n");

    printf("3. Substract\n");

    printf("4. Divide\n");

    scanf("%d" , &menuchoice);


    switch(menuchoice)
    {
        case 1:
            printf("          What is the number you want to multiply?\n\n        ");
            scanf("%ld", &number);
            printf("        What is the multiplier?\n\n            ");
            scanf("%ld", &multiplier);
            long result = number * multiplier;
            printf("your number is %ld\n", result);
            break;

        case 2:
            printf("          What is the number?\n\n        ");
            scanf("%ld", &number_add);
            printf("        What is the number to add?\n\n            ");
            scanf("%ld", &add);
            long result_add = add + number_add;
            printf("your number is %ld\n", result_add);
            break;

        case 3:
            printf("          What is the number to substract?\n\n        ");
            scanf("%ld", &number_substract);
            printf("        What is the number to substract with?\n\n            ");
            scanf("%ld", &substract);
            long result_substract = number_substract - substract;
            printf("your number is %ld\n", result_substract);
            break;

        case 4:
            printf("          What is the number to divide?\n\n        ");
            scanf("%ld", &number_divide);
            printf("        What is the number to divide with?\n\n            ");
            scanf("%ld", &divide);
            long result_divide = number_divide / divide;
            printf("your number is %ld\n", result_divide);
            break;
        default : break;
    }
    printf("\n\n");
    printf("This homebrew politically identifies as Pro-Marxist and it's pronouns are\n He and Him.\n\n "  "MAGA 2020  \n\n" "Copyright © GOffrier#9688\n\n");
    return 0;
}
