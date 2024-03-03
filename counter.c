// Import c library to provide functions for input/output ops.
#include <stdio.h>

// Define the main function which returns an integer value.
int main() {
    printf("Start the countdown!\n");

    int i;
    for (i = 10; i >= 0; i--) {
        printf("%i\n", i);
    }
}
