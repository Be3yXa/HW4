#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int A, B, C;

    printf("Введите массу ингредиентов A, B и C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
        printf("Реакция успешно запустилась! Философский камень получен.\n");
    }
    else {
        printf("Реакция не запустилась. Пропорции нарушены.\n");
    }

    return 0;
}