#include <stdio.h>//   과제1

int main(void) {

    char name[20], department[30];//이름과 학과명을 받을 변수를 선언함
    int num, brithday;//학번과 생년월일을 받기위해 변수를 선언함

    printf("본인의 이름 : ");
    scanf_s("%s", name, sizeof(name));//이름을 입출력하기위서 scanf와 printf를 사용함


    //생년월일을 입력받기위한 문구와 입력을 위해 scanf와 printf를 사용함.
    printf("생년월일 : ");
    scanf_s("%d", &brithday);

    printf("학번 : ");
    scanf_s("%d", &num);

    printf("학과명 : ");
    scanf_s("%s", department, sizeof(department));


    //입력받은 값을 출력하기위해서 서식문자로 해당 문자를 받고 선언된 변수로 출력함.
    printf("이름 : %s\n", name);
    printf("생년월일 : %d\n", brithday);
    printf("학번 : %d\n", num);
    printf("학과명 : %s\n", department);



}