// Write a C program which generates even numbers between 1000 and 2000
// and then prints them

#include <stdio.h>

int main() {
    int i;

    printf("Even numbers between 1000 and 2000:\n");
    for (i = 1000; i <= 2000; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}

