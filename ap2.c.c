//ap2.c

#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5]; // 5개의 정수 저장
    int *plist[5]; // 정수에 대한 5개 포인터 저장

    list[0]=10;
    list[1]=11;

    plist[0]=(int*)malloc(sizeof(int)); // plist[0]에 int만큼의 메모리 할당

    printf("list[0] \t= %d\n", list[0]); // 10: list[0]=10;
    printf("address of list \t = %p\n",list); // 0061FF0C: list의 주소
    printf("address of list[0] \t = %p\n",&list[0]); // 0061FF0C: list[0]의 주소
    printf("address of list + 0 \t = %p\n",list+0); // 0061FF0C: list의 시작 부분부터 (+0) 부분, 즉 list[0]과 같다.
    printf("address of list + 1 \t = %p\n",list+1); // 0061FF10: list의 시작 부분부터 (+1)(+1의 의미는 메모리 영역에서 4bytes 증가를 뜻함) 부분, 즉 list[1]이다. list[0]의 주소에서 4bytes만큼 증가
    printf("address of list + 2 \t = %p\n",list+2); // 0061FF14: list의 시작 부분부터 (+2) 부분. 이하 동문
    printf("address of list + 3 \t = %p\n",list+3);
    printf("address of list + 4 \t = %p\n",list+4);
    printf("address of list[4] \t = %p\n",&list[4]); // 0061FF1C: list의 시작 부분부터 (+4)(메모리 영역에서 16bytes 만큼 증가한 영역) 부분, 즉 list[4]를 뜻하므로 list+4와 같은 주소가 출력된걸 알 수 있다.
    
    free(plist[0]);  //메모리 해제

    printf("-------------[hankyuwon][2019037002]------------");
}