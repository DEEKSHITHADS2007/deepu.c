#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}
int main() {
    struct Complex num1, num2, sum, diff;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);
    sum = add(num1, num2);
    diff = subtract(num1, num2);
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference = %.2f + %.2fi\n", diff.real, diff.imag);
    return 0;
}
