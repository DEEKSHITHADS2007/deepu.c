#include <stdio.h>
struct Student {
    char name[50];
    int marks[3]; 
};
int main() {
    struct Student students[3];
    float average;
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter marks for 3 subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += students[i].marks[j];
        }
        average = sum / 3.0;
        printf("\nStudent: %s", students[i].name); 
        printf("Average Marks: %.2f\n", average);
    }
    return 0;
}
