//p2-1.c

#include <stdio.h>

#define MAX_SIZE 100

float sum(float [],int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    for(i=0;i<MAX_SIZE; i++) // input[0]부터 input[MAX_SIZE-1]까지 MAX_SIZE개수만큼 생성
    input[i]=i;
    /* for checking call by reference */
    printf("address of input = %p\n",input); // 004070A0: input의 시작지점, 즉 input[0]의 주소와 같음

    answer = sum(input, MAX_SIZE);
    printf("The sum is: %f\n", answer); // 4950: 1~99 까지 더한 값

    printf("---------------[hankyuwon][2019037002]----------------");
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list); // 004070A0: input의 주소값이 넘어옴
    printf("address of list = %p\n\n", &list); // 0061FF00: input의 주소가 아닌 다른 주소값을 갖는다. 따라서 list 는 input의 주소값만 받아왔음을 알 수 있다.

    int i;
    float tempsum=0; // list[0]부터 list[99]까지의 합
    for(i=0;i<n;i++)
    tempsum+=list[i];
    return tempsum;
}