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
        printf("I am eligable for marriage \n");
    }
    else {
        printf("Ops :(  ");
    }

    //width precision flages
    int a , b , c , d,e;
    a= 1;
    b =2;
    c=3;
    d= -103;
    e = 100;
    printf("%04d\n",a);
    printf("%03d\n",b);
    printf("%02d\n",c);
    
    printf("%+d\n",d);
    printf("%+d\n",e);
//space
    printf("%50.2f\n",price);
    return 0;
}