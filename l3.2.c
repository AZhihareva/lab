#include <stdio.h>
#include <locale.h>

main() {
    setlocale(LC_ALL,"Russian");
    float c1, c2;
    int i=1;
    printf("������ �����: ");
    scanf("%f", &c1);
    printf("������ �����: ");
    scanf("%f", &c2);
    while(i<=6)
    {
        c1 /= 2;
        c2 += c1;
        c2 /= 2;
        c1 += c2;
        i++;
    }
    printf("� ������ ������ %.1f �\n �� ������ ������ %.1f �",c1, c2);
    puts("");
}