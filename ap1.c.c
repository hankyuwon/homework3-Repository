//ap1.c
#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5]; //5개의 정수 저장
    int *plist[5]={NULL,}; //정수에 대한 5개 포인터 NULL로 초기화

    plist[0]=(int *)malloc(sizeof(int)); //plist[0]에 int크기의 메모리 할당

    list[0]=1;
    list[1]=100;

    *plist[0]=200;


    printf("value of list[0]=           =%d\n",list[0]); // 1: list[0]=1;
    printf("address of list[0]          =%p\n",&list[0]);// 0061FF0C: list[0]의 주소
    printf("value of list               =%p\n",list);    // 0061FF0C: list 의 값
    printf("address of list (&list)     =%p\n",&list);   // 0061FF0C: list 의 주소 list[0]의 주소, list값, list의 주소 세개가 같은걸 확인하고 배열에서 이름은 "주소" 임을 알 수 있다. / list[0]의 시작 주소 = list 의 전체 시작 주소 = list 의 값임을 알 수 있음


    printf("------------------------------------------\n\n");
    printf("value of list[1]   =%d\n", list[1]);  // 100: list[1]=100;
    printf("address of list[1] =%p\n",&list[1]);  // 0061FF10: list[1]의 주소
    printf("value of *(list+1) =%d\n",*(list+1)); //list주소값에서 4bytes만큼 이동한 값, 0061FF10은 0061FF0C 와 4bytes 만큼 떨어져있다. list+1에서 +1 의미는 단순히 sizeof(int)형 만큼의 메모리크기를 증가시키겠다는 의미
    printf("address of list+1  =%p\n", list+1);   // 0061FF10: list[0]에서 4bytes만큼 메모리에서 건넛값. list[0]의 주소가 list+1과 같은걸 보면 배열 하나의 크기는 4bytes(초기에 배열을 int로 선언했기때문)임을 알 수 있다.

    printf("------------------------------------------\n\n");
    
    printf("value of *plist[0]   =%d\n", *plist[0]);// 200: *plist[0]=200;
    printf("&plist[0]            =%p\n",&plist[0]); // 0061FEF8: plist[0]의 주소
    printf("&plist               =%p\n",&plist);    // 0061FEF8: plist의 주소
    printf("plist                =%p\n",plist);     // 0061FEF8: plist의 값
    printf("plist[0]             =%p\n", plist[0]); // 00CB15E8: plist[0]
    printf("plist[1]             =%p\n", plist[1]); // plist값을 초기에 NULL로 설정해줬기 때문에 0으로 출력됨.
    printf("plist[2]             =%p\n", plist[2]); // 이하 동문
    printf("plist[3]             =%p\n", plist[3]);
    printf("plist[4]             =%p\n", plist[4]);

    free(plist[0]); // 메모리 해제

    printf("---------[Hankyuwon] [2019037002]---------\n");
}