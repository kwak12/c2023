#include <stdio.h>

void convert(int num, int base) {
    int rem, i = 0;
    int digits[100]; // 변환된 숫자를 저장할 배열
    while (num != 0) { // num이 0이 될 때까지 반복
        rem = num % base; // num을 base로 나눈 나머지 계산
        digits[i] = rem; // 나머지를 배열에 저장
        i++; // 배열 인덱스 증가
        num /= base; // num을 base로 나눈 몫으로 갱신
    }
    for (int j = i - 1; j >= 0; j--) { // 배열을 거꾸로 출력
        printf("%d", digits[j]);
    }
}

int main() {
    int num, base;
    printf("변환할 10진수 입력 : "); // 10진수 입력 받기
    scanf_s("%d", &num);
    printf("변환할 진법 입력 (2-9): "); // 변환할 진수 입력 받기
    scanf_s("%d", &base);
    if (base < 2 || base > 9) { // 변환할 진수가 2 ~ 9 사이가 아닌 경우
        printf("2~9진수 사이로 입력하세요.\n"); // 에러 메시지 출력
        return 0; // 프로그램 종료
    }
    printf("변환된 숫자는 %d 입니다. ", base); // 변환된 숫자를 출력할 것임을 알리는 메시지 출력
    convert(num, base); // num을 base진수로 변환하여 출력
    printf("\n"); 
    return 0;
}
