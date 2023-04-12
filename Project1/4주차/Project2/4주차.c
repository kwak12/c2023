#include <stdio.h>

int main(void) {

    int  num1;

    printf("출력할 구구단 단수 입력 : ");
    scanf_s("%d", &num1);

    for (int i = 1; i <= 9; i++) {

        printf("%d * %d = %d\n", num1, i, num1 * i);

    }
}