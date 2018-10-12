#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;
    double delta;

    printf("podaj a: ");
    scanf(" %i", &a);
    printf("podaj b: ");
    scanf(" %i", &b);
    printf("podaj c: ");
    scanf(" %i", &c);
    delta = (b * b) - (4* a * c);
    if
            (a == 0)
    {
        printf("to nie jest równanie kwadratowe");
    }
    else
        {
        if
                (delta > 0)
        {
            printf("pierwszy wynik x: %2f", (-b - sqrt(delta)) / (2 * a));
            printf("drugi wynik x: %2f/n", (-b + sqrt(delta)) / (2 * a));
        } else {
            if
                    (delta == 0) {
                printf("pierwszy wynik x: %2i/n", -b / (2 * a));
            } else {
                if
                        (delta < 0) {
                    printf("brak wyników");
                }
            }

        }
    }
    return 0;


}