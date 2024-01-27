#include <stdio.h>

int main () {

    sayHi("Milan", 40);
    sayHi("Julan", 41);
    sayHi("Mjulan", 55);

    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are  %d", name, age);
}