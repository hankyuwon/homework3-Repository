//p2-2.c

#include <stdio.h>

void print1(int *ptr, int rows);

int main()
{
    int one[] = {0,1,2,3,4};

    printf("one     =%p\n",one); //0061FF0C: one의 값
    printf("&one    =%p\n",&one); //0061FF0C: one의 주소(시작 주소와 같다)
    printf("&one[0] =%p\n",&one[0]); //0061FF0C: one[0]의 주소 / 위의 세개가 같음으로 알수있는것은 one[]에서 one의 값과 one의 주소, one[0] 이 세값이 같다는 점이다.
    printf("\n");

    print1(&one[0],5);
    
    printf("---------[Hankyuwon] [2019037002]---------\n");
    return 0;
}

void print1(int *ptr, int rows)
{
    /* print out a one-dimensional array using a poitner */

    int i;
    printf("Address \t Contents\n");
    for(i=0;i<rows;i++)
    printf("%p\t %5d\n", ptr+i, *(ptr+i)); //차례대로 (&one[0]+0,*(&one[0]+0)),(&one[0]+1,*(&one[0]+1)),(&one[0]+2,*(&one[0]+2)),(&one[0]+3,*(&one[0]+3)),(&one[0]+4,*(&one[0]+4)) 를 출력한다.
    printf("\n"); //&one[0]+0 은 &one[0]과 같다. 따라서 0061FF0C가 출력. 이후 +1씩 더해질때마다 메모리값이 +4bytes만큼 증가
}                 //*(&one[0]+0) 은 &one[0]이 가리키는 값, 즉 0이 출력된다. *(&one[0]+1)은 *(&one[1])과 같으므로 one[1], 1이 출력된다. 이하 동문