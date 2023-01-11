//Ýki ayrý fonksiyon oluþturarak bir tamsayýnýn asal sayý mý yoksa Armstrong mu yoksa her ikisi mi 
//olduðunu kontrol etmeyi saðlayan programý yazýnýz
#include <stdio.h>

int is_prime(int num) {
    int i;
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (i = 5; i * i <= num; i = i + 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    return 1;
}

int is_armstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    return (result == num);
}

int main() {
    int num;
    printf("Enter an integer to check if it's prime and/or armstrong: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("The number %d is prime.\n", num);
    else
        printf("The number %d is not prime.\n", num);

    if (is_armstrong(num))
        printf("The number %d is an armstrong number.\n", num);
    else
        printf("The number %d is not an armstrong number.\n", num);
    return 0;
}

