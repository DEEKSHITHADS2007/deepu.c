#include <stdio.h>
#include<math.h>
int i, num, isprime = 1;
int main() {
printf("Enter the value of num starting from positive 2:");
scanf("%d", &num); 
if(num<=1){
    isprime=0;
}
else {
    int limit=(int)sqrt(num);
    for(i = 2; i <= limit; i++) {
        if(num % 1 == 0) {
            isprime = 0;{
        }
    }
    }
    if(isprime) {
        printf("It is a prime\n");
    } else {
        printf("It is not a prime\n");
    }
    return 0;
}
}
