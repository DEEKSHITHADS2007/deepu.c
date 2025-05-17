#include <stdio.h>
int main() {
 FILE *fp = fopen("data.txt", "w");
 if (fp == NULL) {
 printf("Error opening file!\n");
 return 1;
 }
 fprintf(fp, "Hello, File Handling!\n");
 fclose(fp);
 printf("Data written to file successfully.\n");
 return 0;
}
