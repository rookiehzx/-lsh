#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
 printf("Enter your first name: ");
 fgets(name, 255, stdin);
 name[strlen(name)-1] = '\0'; /* remove the newline at the end */

 printf("Hello, %s!\n", name);
 return 0;
}
