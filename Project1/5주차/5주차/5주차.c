#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



int main(void) {

    double x = 0;
    double y = 0;

    int count = 0, circle = 0;

    srand(time(NULL));

    while (count < 10000) {

        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        count++;

    }
    if (sqrt(pow(x, 2.0) + pow(y, 2.0)) <= 1) {
        circle++;

    }
    printf("%d번째 루프 원주율 계산 결과 %lf\n", count, 4 * ((double)circle) / (double)count);

}