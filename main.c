#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
  int len2;

  len = _printf("simple sentence.\n");
  len2 = printf("simple sentence.\n");
  printf("len2 = %i\n", (unsigned int)len2);
  _printf("len = %i\n", (unsigned int)len);
  printf("Character:[%c]\n", 'h');
  _printf("Character:[%c]\n", 'h');
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
}
