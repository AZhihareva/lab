#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define PI 3.14159265

void main(void) {
    setlocale(LC_ALL, "Russian");
    float x, y, x1, x2, y1, y2, r, r1, s, s1;

    printf("Введите точку O:");
    scanf("%f %f", &x, &y);
    printf("Введите точку A:");

    scanf("%f %f", &x1, &y1);
    printf("Введите точку B:");
    scanf("%f %f", &x2, &y2);
    s = pow(x2-x, 2) + pow(y1-y, 2);
    s1 = pow(x2-x, 2) + pow(y2-y, 2);
    r = sqrt(s);
    r1 = sqrt(s1);
    if (r == r1)
    printf("Точка B(%0.f, %0.f) принадлежит окружности", x2, y2);
    else
    printf("Точка B(%0.f, %0.f) не принадлежит окружности", x2, y2);
}