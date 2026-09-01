#include <stdio.h>

void greet(const char *name){ 
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
}

int main()
{
    printf("Hello World!\n");
    char name[50];
    printf("Enter your name : ");
    scanf("%s",name);
    greet(name);
}