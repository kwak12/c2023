#include <stdio.h>

void convert(int num, int base) {
    int rem, i = 0;
    int digits[100]; // ��ȯ�� ���ڸ� ������ �迭
    while (num != 0) { // num�� 0�� �� ������ �ݺ�
        rem = num % base; // num�� base�� ���� ������ ���
        digits[i] = rem; // �������� �迭�� ����
        i++; // �迭 �ε��� ����
        num /= base; // num�� base�� ���� ������ ����
    }
    for (int j = i - 1; j >= 0; j--) { // �迭�� �Ųٷ� ���
        printf("%d", digits[j]);
    }
}

int main() {
    int num, base;
    printf("��ȯ�� 10���� �Է� : "); // 10���� �Է� �ޱ�
    scanf_s("%d", &num);
    printf("��ȯ�� ���� �Է� (2-9): "); // ��ȯ�� ���� �Է� �ޱ�
    scanf_s("%d", &base);
    if (base < 2 || base > 9) { // ��ȯ�� ������ 2 ~ 9 ���̰� �ƴ� ���
        printf("2~9���� ���̷� �Է��ϼ���.\n"); // ���� �޽��� ���
        return 0; // ���α׷� ����
    }
    printf("��ȯ�� ���ڴ� %d �Դϴ�. ", base); // ��ȯ�� ���ڸ� ����� ������ �˸��� �޽��� ���
    convert(num, base); // num�� base������ ��ȯ�Ͽ� ���
    printf("\n"); 
    return 0;
}
