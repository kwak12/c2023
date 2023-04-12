#include <stdio.h>

// �ִ� ����� �Լ�
int gcd(int a, int b) {
    while (b != 0) { // b�� 0�� �ƴ� ������ �ݺ�
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// �ּ� ����� �Լ�
int lcm(int a, int b) {
    int gcd_val = gcd(a, b);
    return (a * b) / gcd_val;
}

// �Ҽ� �Ǻ� �Լ�
int is_prime(int n) {
    if (n < 2) { // 0�� 1�� �Ҽ��� �ƴ�
        return 0;
    }
    for (int i = 2; i * i <= n; i++) { // 2���� n�� �����ٱ��� �ݺ�
        if (n % i == 0) { // n�� i�� ������ ������ ��
            return 0; // �Ҽ��� �ƴ�
        }
    }
    return 1; // �Ҽ���
}

// ���� �ڷ����� �Ķ���ͷ� �ϴ� �ִ� ����� �Լ�
int gcd_with_params(int a, int b) {
    return gcd(a, b);
}

// ���� �ڷ����� �Ķ���ͷ� �ϴ� �ּ� ����� �Լ�
int lcm_with_params(int a, int b) {
    return lcm(a, b);
}

// ���� �ڷ����� �Ķ���ͷ� �ϴ� �Ҽ� �Ǻ� �Լ�
int is_prime_with_params(int n) {
    return is_prime(n);
}

// �Ķ���� ���� ���� scanf�� �޴� �ִ� ����� �Լ�
int gcd_without_params() {
    int a, b;
    printf("�ΰ��� ������ �Է��Ͻÿ� : ");
    scanf_s("%d %d", &a, &b);
    return gcd(a, b);
}

// �Ķ���� ���� ���� scanf�� �޴� �ּ� ����� �Լ�
int lcm_without_params() {
    int a, b;
    printf("�ΰ��� ������ �Է��Ͻÿ� : ");
    scanf_s("%d %d", &a, &b);
    return lcm(a, b);
}

// �Ķ���� ���� ���� scanf�� �޴� �Ҽ� �Ǻ� �Լ�.
int is_prime_without_params() {
    int n;
    printf("������ �Է��Ͻÿ� : ");
    scanf_s("%d", &n);
    return is_prime(n);
}

int main() {
    printf("GCD �ִ����� : %d\n", gcd_with_params(12, 18));
    printf("LCM �ּҰ���� : %d\n", lcm_with_params(12, 18));
    printf("�Ҽ��Ǻ��Լ� : %d\n", is_prime_with_params(23));
    printf("�ִ����� : %d\n", gcd_without_params());
    printf("�ּҰ���� : %d\n", lcm_without_params());
    printf("�Ҽ� �� : %d\n", is_prime_without_params());
    return 0;
}
