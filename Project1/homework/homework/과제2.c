#include <stdio.h>
#include "header1.h"

int main(void) {
    int num1, num2, t1, t2, t3, t4, t5, t6;


    printf("두 정수를 입력하시오 :");
    scanf_s("%d %d", &num1, &num2);


    int t1 =  FindLCM(num1, num2);
    printf("두 정수의 최소 공배수 : %d", t1);

    int t2 = FindGCD(num1, num2);
    printf("두 정수의 최대 공약수 : %d", t2);


}