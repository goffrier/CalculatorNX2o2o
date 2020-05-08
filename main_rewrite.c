#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
long multiplier = 0;
long number = 0;

 int menuchoice;
 printf("=====Welcome to the remake of CalculatorNX named accordingly CalculatorNX2020=====\n");
 printf("1. Multiply\n");
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
default : break;
}
printf("\n\n");
printf("This homebrew politically identifies as Pro-Marxist and it's pronouns are\n He and Him.\n\n "  "MAGA 2020  \n\n" "Copyright © GOffrier#9688\n\n");
return 0;
}