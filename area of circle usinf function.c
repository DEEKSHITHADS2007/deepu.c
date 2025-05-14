#include <stdio.h>
int radius, area; 
int calculate_area(int r) {
    return (int)(3.14 * r * r);
}
int main() {
    printf("Enter the radius: ");
    scanf("%d", &radius);
    area = calculate_area(radius);
    printf("Area of the circle is %d\n", area);

    return 0;
}
