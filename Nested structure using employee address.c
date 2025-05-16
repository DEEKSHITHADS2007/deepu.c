#include <stdio.h>
struct Address {
    char city[50];
    int pin;
};
struct Employee {
    char name[50];
    int id;
    struct Address address;
};
int main() {
    struct Employee emp;
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter city: ");
    scanf("%s", emp.address.city);
    printf("Enter pin: ");
    scanf("%d", &emp.address.pin);
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("City: %s\n", emp.address.city);
    printf("PIN: %d\n", emp.address.pin);
    return 0;
}
