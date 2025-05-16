#include <stdio.h>
int i, num, isprime = 1;
int main() {
printf("Enter the value of num starting from positive 2:");
scanf("%d", &num);
    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            isprime = 0;
            break;
        }
    }
    if(isprime == 1) {
        printf("It is a prime\n");
    } else {
        printf("It is not a prime\n");
    }
    return 0;
}
