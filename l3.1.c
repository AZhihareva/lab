#include <stdio.h>
#include <locale.h>

main() {
    setlocale(LC_ALL,"Russian");
    float d=0, r=0, m=0;
    printf("������� ��������� �����: ");
    scanf("%f", &r);
    printf("������� �������� �����: ");
    scanf("%f", &m);
    for(d = 0; r < m; ++d){
        r += r*0.04/12;
    }
    printf("\n%0.f ", d);
    getchar();
    getchar();
    return 0;
}