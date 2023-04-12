#include <stdio.h>

// 최대 공약수 함수
int gcd(int a, int b) {
    while (b != 0) { // b가 0이 아닐 때까지 반복
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 최소 공배수 함수
int lcm(int a, int b) {
    int gcd_val = gcd(a, b);
    return (a * b) / gcd_val;
}

// 소수 판별 함수
int is_prime(int n) {
    if (n < 2) { // 0과 1은 소수가 아님
        return 0;
    }
    for (int i = 2; i * i <= n; i++) { // 2부터 n의 제곱근까지 반복
        if (n % i == 0) { // n이 i로 나누어 떨어질 때
            return 0; // 소수가 아님
        }
    }
    return 1; // 소수임
}

// 정수 자료형을 파라미터로 하는 최대 공약수 함수
int gcd_with_params(int a, int b) {
    return gcd(a, b);
}

// 정수 자료형을 파라미터로 하는 최소 공배수 함수
int lcm_with_params(int a, int b) {
    return lcm(a, b);
}

// 정수 자료형을 파라미터로 하는 소수 판별 함수
int is_prime_with_params(int n) {
    return is_prime(n);
}

// 파라미터 없이 수를 scanf로 받는 최대 공약수 함수
int gcd_without_params() {
    int a, b;
    printf("두개의 정수를 입력하시오 : ");
    scanf_s("%d %d", &a, &b);
    return gcd(a, b);
}

// 파라미터 없이 수를 scanf로 받는 최소 공배수 함수
int lcm_without_params() {
    int a, b;
    printf("두개의 정수를 입력하시오 : ");
    scanf_s("%d %d", &a, &b);
    return lcm(a, b);
}

// 파라미터 없이 수를 scanf로 받는 소수 판별 함수.
int is_prime_without_params() {
    int n;
    printf("정수를 입력하시오 : ");
    scanf_s("%d", &n);
    return is_prime(n);
}

int main() {
    printf("GCD 최대공약수 : %d\n", gcd_with_params(12, 18));
    printf("LCM 최소공배수 : %d\n", lcm_with_params(12, 18));
    printf("소수판별함수 : %d\n", is_prime_with_params(23));
    printf("최대공약수 : %d\n", gcd_without_params());
    printf("최소공배수 : %d\n", lcm_without_params());
    printf("소수 편별 : %d\n", is_prime_without_params());
    return 0;
}
