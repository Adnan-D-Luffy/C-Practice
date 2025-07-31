#include <stdio.h>
int main () {

    double price = 208939.98;
    int age = 18;
    char name[] = "Adnan";

    printf("Hello \n" );
    printf("My Name is %s \n",name);
    printf("I am %d years old \n" ,age);
    printf("I have %.2lf Taka \n",price);

    if (age == 18) {
        printf("I am eligable for marriage ");
    }
    else {
        printf("Ops :(  ");
    }
    return 0;
}