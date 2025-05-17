#include <stdio.h>
#define AREA(r) (3.14 * (r) * (r))
int main() {
 int radius = 5;
 printf("Area of circle: %.2f\n", AREA(radius));
 return 0;
}
