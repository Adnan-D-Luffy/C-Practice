#include <stdio.h>

int main () {

    int age;
    char name[30];
    printf("What's your age? ");
    scanf("%d",&age);
    printf("Oh you are %d years old \n",age);

    //skip \n from new line buffer
    getchar(); // it reads stdin;
    printf("Enter your full name ?");

    fgets(name, sizeof(name), stdin);
    printf("Oh You are %s", name);


    return 0;
}