#include <stdio.h>

struct student{
    char lastName[13];  /* 13 bytes */
    int studentId;  /* 4 bytes */
    short grade;  /* 2 bytes */
};

int main()
{
    struct student pst;

    printf("size of studnet = %ld\n", sizeof(struct student)); // 24: char lastName의 메모리 크기는 13이지만 padding 때문에 16bytes 로 잡힘, int는 4bytes, short는 4bytes 총 24bytes
    printf("size of int = %ld\n", sizeof(int)); // 4: int 의 메모리 크기는 4
    printf("size of short = %ld\n", sizeof(short)); // 2: short 의 메모리 크기는 2

    printf("---------[Hankyuwon] [2019037002]---------\n");
    return 0;
}
