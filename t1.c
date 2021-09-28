#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Russian");
    float a, b, c, x1, x2, x3, y1, y2, y3;
    printf("¬ведите точку A:");
    scanf("%f %f", &x1, &y1);
    printf("¬ведите точку B:");
    scanf("%f %f", &x2, &y2);
    printf("¬ведите точку C:");
    scanf("%f %f", &x3, &y3);
    a = pow(x1, 2) + pow(y1, 2);
    b = pow(x2, 2) + pow(y2, 2);
    c = pow(x3, 2) + pow(y3, 2);
    if (a<= b && a <= c)
        printf("Ѕлижайша€ к началу координат точка: A(%0.f, %0.f)", x1, y1);
    else if (b <= a && b <= c)
        printf("Ѕлижайша€ к началу координат точка: B(%0.f, %0.f)", x2, y2);
    else if (c <= a && c <= b)
        printf("Ѕлижайша€ к началу координат точка: C(%0.f, %0.f)", x3, y3);
}