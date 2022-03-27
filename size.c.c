#include <stdio.h>
#include <stdlib.h>

void main()
{
    int** x;

    printf("sizeof(x) = %lu\n", sizeof(x)); // 8: 주소를 저장
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // 8: 주소를 저장
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // 4: 값을 저장

    printf("---------[Hankyuwon] [2019037002]---------\n");
}