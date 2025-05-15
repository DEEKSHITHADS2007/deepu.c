#include <stdio.h>
void printCharacters(const char *str) {
int i = 0;
while (str[i]!='\0') {
printf("Character %d: %c\n", i + 1, str[i]);
i++;
 }
}
int main() {
char name[] = "Siet";
printCharacters(name);
return 0;
}
