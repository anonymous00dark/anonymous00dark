#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
  int number, guess, ng = 1;
  srand(time(0));
  number = rand() % 100 + 1;

  do
  {
    printf("\n\nGuess a number\n\n");
    scanf("%d", &guess);

    if (guess < number)
    {
      printf(" \n\nHigher Number Please !\n\n");
    }
    else if (guess > number)
    {
      printf("\n\nLower Number Please !\n\n ");
    }
    else
    {
      printf("\n\nYou guessed it correct in %d attempts\n\n", ng);
    }
    ng++;
  } while (guess != number);
  getch();
  return 0;
}