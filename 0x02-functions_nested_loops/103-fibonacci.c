#include <stdio.h>

// define a function to generate the Fibonacci sequence
void fibonacci(int *a, int *b) {
    int c = *a + *b;
    *a = *b;
    *b = c;
}

int main() {
    // initialize the sum to 0
    int sum = 0;

    // initialize the first two terms of the sequence
    int a = 1, b = 2;

    // generate the Fibonacci sequence
    while (b <= 4000000) {
        // if the current term is even, add it to the sum
        if (b % 2 == 0) {
            sum += b;
        }

        fibonacci(&a, &b);
    }

    // print the sum of the even-valued terms
    printf("%d\n", sum);

    return 0;
}

