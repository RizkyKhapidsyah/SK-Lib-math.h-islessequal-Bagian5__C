#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("islessequal(2.0,1.0)      = %d\n", islessequal(2.0, 1.0));
    printf("islessequal(1.0,2.0)      = %d\n", islessequal(1.0, 2.0));
    printf("islessequal(1.0,1.0)      = %d\n", islessequal(1.0, 1.0));
    printf("islessequal(INFINITY,1.0) = %d\n", islessequal(INFINITY, 1.0));
    printf("islessequal(1.0,NAN)      = %d\n", islessequal(1.0, NAN));

    _getch();
    return 0;
}