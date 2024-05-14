#include <stdio.h>
#include <time.h> // For time()
#include <stdlib.h> // For rand() and srand()

// Video that inspired this program:
// https://youtu.be/094y1Z2wpJg?si=aGSBCuYL3I-NVgxi

// Possible features:
// - Menu system
// - Choose input number
// - Step Minimum: Only output a calculation sequence that meets the minimum step amount input by user
// - Add every number to ordered list so I can give the user the numbers they saw
// - Basic stat gathering after a round: How many Evens, how many Odds, longest Even streak, longest odd streak, 
// - Press enter to continue (toggle option: off default)
// - Initial random n can be negative (toggle option: off default)

int main() {
    printf("Welcome to three-n-plus-one!\n");
    printf("Program Explanation...\n");

    // Generate first random input number
    srand(time(NULL)); // Seeding randomness from current time
    int n = rand(); // By default, rand() will return only between 0 and RAND_MAX
    int step = 0;

    do {
        step++;
        printf("[Step %d]\n", step);
        printf("The number is [%d]\n", n);

        // If even: Divide by 2
        // (currentNumber / 2)
        if (n % 2 == 0) {
            printf("[%d] is even. Performing ([%d] / 2)...\n", n, n);
            n = n / 2;
        }


        // If odd: Multiply by 3, then add 1
        // (currentNumber * 3) + 1
        else if (n % 2 != 0) {
            printf("[%d] is odd. Performing ([%d] * 3) + 1...\n", n, n);
            n = (n * 3) + 1;
        }

        printf("\n");


    } while (n != 1); // If currentNumber is 1, end

    step++;
    printf("[Step %d] Number has reached 1!\n", step);

    return 0;
}

// To compile the code (before running it), open a terminal / cmd and run:
// (the .c file is saved as "three-n-plus-one.c", so use the right words!)

// **gcc version**
// gcc three-n-plus-one.c -o three-n-plus-one
// Then run: ./three-n-plus-one