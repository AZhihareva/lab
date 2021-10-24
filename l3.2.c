#include <stdio.h>
#include <locale.h>

main() {
    setlocale(LC_ALL,"Russian");
    float c1, c2;
    int i=1;
    printf("Первый сосуд: ");
    scanf("%f", &c1);
    printf("Второй сосуд: ");
    scanf("%f", &c2);
    while(i<=6)
    {
        c1 /= 2;
        c2 += c1;
        c2 /= 2;
        c1 += c2;
        i++;
    }
    printf("В первом сосуде %.1f л\n Во втором сосуде %.1f л",c1, c2);
    puts("");
}