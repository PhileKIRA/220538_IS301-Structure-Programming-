/*
Name: Philemon KIRA 
ID No. 220538
IS3 2026
Algorithm:
1.Start the program
2.Initialize variables:
  -Set attempts = 5
3.Generate a random number between 1 and 20
4.Display message asking user to guess the number
5.Repeat the following steps:
  -Display remaining attempts
  -Prompt user to enter a guess
  -Read user input
6.Check the guess:
  -If guess is equal to the random number:
  -Display success message
  -Exit the loop
  - Else if guess is less than the number:
  -Display “guess is low” message
  - Else:
  -Display “guess is high” message

7. Decrease attempts by 1

8. If attempts reach 0:
   -Display game over message with correct number
   -Ask user if they want to try again
   -If user enters ‘y’ or ‘Y’:
   -Reset attempts to 5
   -Generate a new random number
   -Continue the game
   -Else:
   -End the program

9. Close program
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x;
    int number;
    int attempts = 5;
    char choice;
    srand(time(0));
    number = rand() % 20 + 1;

    printf("I am thinking of a number between 1 and 20. Can you guess it?\n");

    while (1) {
        printf("Attempts remaining: %d\n", attempts);
        scanf("%d", &x);

             if (x == number) {
                printf("Congratulations! You did it.\n");
                break;
            }
             else if(x < number) {
                     printf("Your guess is low. Try again.\n");
            }
       
             else {
                   printf("Your guess is high. Try again.\n");
             }
        attempts --;
        if (attempts == 0){
            printf("Game over! The number I was thinking of was: %d\n", number);
            printf("Do you want to try again? (y/n):");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y'){
            attempts = 5;
            number = rand() % 20 + 1;
            continue;
            } 
            else {
            break;
            }
        }
    }

    return 0;
}
