#include <stdio.h>//   ����1

int main(void) {

    char name[20], department[30];//�̸��� �а����� ���� ������ ������
    int num, brithday;//�й��� ��������� �ޱ����� ������ ������

    printf("������ �̸� : ");
    scanf_s("%s", name, sizeof(name));//�̸��� ������ϱ����� scanf�� printf�� �����


    //��������� �Է¹ޱ����� ������ �Է��� ���� scanf�� printf�� �����.
    printf("������� : ");
    scanf_s("%d", &brithday);

    printf("�й� : ");
    scanf_s("%d", &num);

    printf("�а��� : ");
    scanf_s("%s", department, sizeof(department));


    //�Է¹��� ���� ����ϱ����ؼ� ���Ĺ��ڷ� �ش� ���ڸ� �ް� ����� ������ �����.
    printf("�̸� : %s\n", name);
    printf("������� : %d\n", brithday);
    printf("�й� : %d\n", num);
    printf("�а��� : %s\n", department);



}