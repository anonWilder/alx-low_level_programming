#include <stdio.h>

// Define a function to generate the Fibonacci sequence
void fibonacci(int *a, int *b)
{
    int c = *a + *b;
    *a = *b;
    *b = c;
}

int main(void)
{
    // Initialize the sum to 0
    int sum = 0;

    // Initialize the first two terms of the sequence
    int a = 1, b = 2;

    // Generate the Fibonacci sequence
    while (b <= 4000000)
    {
        // If the current term is even, add it to the sum
        if (b % 2 == 0)
        {
            sum += b;
        }

        fibonacci(&a, &b);
    }

    // Print the sum of the even-valued terms
    printf("%d\n", sum);

    return 0;
}

