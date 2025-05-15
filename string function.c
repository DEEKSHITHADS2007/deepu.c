#include <stdio.h>
#include<string.h>
int main() 
{
char name[10];
printf("enter your name");
scanf("%s",&name);
printf("%s\n",&name);
int length=strlen(name);
printf("%d\n",length);
strcpy(name,"kavya");
printf("%s\n",&name);
int comp=strcmp("deepu","deep");
printf("%d\n",comp);
strcat(name,"craker");
printf("%s\n",name);
}
