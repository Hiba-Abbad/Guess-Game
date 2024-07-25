#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    printf("                                 Welcome to \"Guess the Number\"\n ");
    
    // printf("Random number : %d\n", random_number);
   int no_of_guesses = 0;
   int guessed_no;

   do{

  printf("Guess the number : ");
   scanf("%d",&guessed_no);
   if(guessed_no > random_number){
      printf("Lower number please!\n\n");
   }else if(guessed_no < random_number) {
       printf("Higher number please!\n\n");
   }else{
        printf("Congrats!!\n");
   }
   no_of_guesses++;

   } while (guessed_no != random_number);
   
    printf("You guessed the number in %d guesses!\n",no_of_guesses);

    return 0;
}
