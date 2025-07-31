#include <stdio.h>
#include <string.h>

int main () {

    int age;
    char name[30];
    printf("What's your age? ");
    scanf("%d",&age);
    printf("Oh you are %d years old \n",age);

    //skip \n from new line buffer
    getchar(); // it reads stdin;
    printf("Enter your full name ?\n");

    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
    //removing the buffer
    printf("Oh You are %s \n", name);

    printf("So hello");
    return 0;
}