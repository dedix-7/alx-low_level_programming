#include "main.h"

/**
 *  print_last_digit - show last number digit
 *  @n: argument
 *  Return: integer
 */

int print_last_digit(int n)
{
  int r;

  r = n % 10;

  _putchar(r);
  return(0);
}
