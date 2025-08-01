#include <stdio.h>
#include <string.h>

int main () {


    int age ;
    char name[30] ;
   
    printf("What's your name ? :- ");
    fgets(name, sizeof(name), stdin); // getchar();
    name[strlen(name)-1] = '\0';
    printf("So your name is %s \n",name);
    printf("So how old are you ? :-");
    scanf("%d",&age);
     printf("So you are %d years old",age);
    return 0 ;
}