#include <stdio.h>

int main()
{
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
 if (num >= 10 && num <= 100)
 {
 printf("The number is within the range 10 to 100.\n");
 }
 else
 {
 printf("The number is outside the range 10 to 100.\n");
 }
 return 0;
}
