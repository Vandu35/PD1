//Bir say�n�n �ift mi tek mi oldu�unu kontrol eden fonksiyonu ve kullan�m�n� g�steren program� 
//yaz�n�z
#include <stdio.h>

int is_even(int num) {
    return (num % 2 == 0);
}

int main() {
    int num;

    printf("Enter an integer to check if it's even: ");
    scanf("%d", &num);

    if (is_even(num)) {
        printf("The number %d is even.\n", num);
    } else {
        printf("The number %d is odd.\n", num);
    }

    return 0;
}

