#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL,"Russian");
    int a[5];
    int i,g=0,l;
    for(i=0;i<5;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);}
    for(i=0;i<4;i++){
        if(a[i]>a[i+1]){
            g++;}
    }
    if(g==4) printf("��,��� �������� �����������");
    else printf("���, �� ��� �������� � ������� ��������");
    getch();
}