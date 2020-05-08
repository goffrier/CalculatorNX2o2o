//include stdio and stdlib for guess what? standard input output
#include <stdio.h>
#include <stdlib.h>
// let's multiply with goff

//Main function,takes the multiplier from the input which is get_int,then takes the number from guess what? get_int. 
//then multiplies multiplier and number and throws it in a result via int,from there we print the result via printf(). %i get's the closest integer(result in that case)
//finally we return 0 to say that the program runned succesfully 
int main(int argc, char const *argv[])
{
   long multiplier = 0;
    long number = 0;
     printf("          what is the number you want to multiply?\n\n        ");
      scanf("%ld", &number);
       printf("        what is the multiplier?\n\n            ");
       scanf("%ld", &multiplier);
      long result = number * multiplier;
     printf("your number is %ld\n", result);
    printf("\n");
   printf("This homebrew politically identifies as Pro-Marxist and it's pronouns are\n He and Him.\n\n "  "MAGA 2020  \n\n" "Copyright © GOffrier#9688\n\n");
	return 0 ;
}


