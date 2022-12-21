#include <stdio.h>

int main() {
    
    int i;
    float float_list[8];
    float total = 0;

   
    for (i = 0; i < 8; i++) {
        printf("Lütfen bir float deðer girin: ");
        scanf("%f", &float_list[i]);
        total += float_list[i];
    }

  
    float average = total / 8;
    printf("Dizinin ortalamasý: %f\n", average);

    return 0;
}

