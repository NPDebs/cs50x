#include <stdio.h>
#include <stdbool.h>

// int main() {
//     printf("Hello world!\n");
// }

// Working with booleans.
int sleep() {
    bool isSleepy = true;
    printf("%d\n", (int)isSleepy);
    printf("Close your eyes, my little munchkin.\n");
    return 1;
}

int main() {
    sleep();
    return 1;
}

