#include <stdio.h>
#include "header1.h"

int main(void) {
    int num1, num2, t1, t2, t3, t4, t5, t6;


    printf("�� ������ �Է��Ͻÿ� :");
    scanf_s("%d %d", &num1, &num2);


    int t1 =  FindLCM(num1, num2);
    printf("�� ������ �ּ� ����� : %d", t1);

    int t2 = FindGCD(num1, num2);
    printf("�� ������ �ִ� ����� : %d", t2);


}