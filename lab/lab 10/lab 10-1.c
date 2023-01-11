//Enter a value from the keyboard to the 8-element float array. Calculate the average of the
//entered values and print it on the screen.

#include <stdio.h>

int main() {
    
    int i;
    float float_list[8];
    float total = 0;

   
    for (i = 0; i < 8; i++) {
        printf("L?tfen bir float de?er girin: ");
        scanf("%f", &float_list[i]);
        total += float_list[i];
    }

  
    float average = total / 8;
    printf("Dizinin ortalamas?: %f\n", average);

    return 0;
}

