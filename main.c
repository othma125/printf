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

  len = _printf("Let's try to printf a simple sentence.\n");
  len2 = printf("Let's try to printf a simple sentence.\n");
  printf("len2 = %d\n", len2);
  _printf("len = %d\n", len);
  printf("Character:[%c]\n", 'h');
  _printf("Character:[%c]\n", 'h');
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
}