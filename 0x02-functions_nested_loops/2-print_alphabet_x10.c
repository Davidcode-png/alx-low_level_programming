#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */


void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar (10);
}

int main(void)
{
int i;
for (i=0,i<10,i++)
{
print_alphabet();
}
  
  return(0);
}
