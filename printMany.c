#include "printmany.h"

/* print a string as many times as specified */
void printMany(char *toPrint, int numTimes)
{
  int count;

  for (count = 0; count < numTimes; count++) {
    printf("%s", toPrint);
  }

}

// print a string once
void print1(char *toPrint)
{
  printMany(toPrint, 1);
}

// print a string twice
void print2(char *toPrint)
{
  printMany(toPrint, 2);
}

// print a string 4 times
void print4(char *toPrint)
{
  printMany(toPrint, 4);
}

// print a string 8 times
void print8(char *toPrint)
{
  printMany(toPrint, 8);
}
