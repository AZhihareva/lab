#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

void main(void) {
    setlocale(LC_ALL, "Russian");
    int i, d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char *m[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char *v;

    printf("¬ведите краткое название мес€ца на английском:");
    scanf("%s", v);
    for (i = 0; i < 12; i++) {
       if (strcmp(m[i],v) == 0){
           printf(" оличество дней в этом мес€це: %d", d[i]);
       };
    }
}