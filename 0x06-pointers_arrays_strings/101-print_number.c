#include <stdio.h>

int _putchar(char c);

/**
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
 **/

void print_number(int n)
{
    unsigned int n1;

    n1 = n;

    if (n < 0)
    {
        _putchar('-');
        n1 = -n;
    }

    if (n1 / 10 != 0)
    {
        print_number(n1 / 10);
    }
    _putchar((n1 % 10) + '0');
}

int main(void) {
    // Your code goes here
    return 0;
}

int _putchar(char c) {
    putchar(c);
    return (0);
}

