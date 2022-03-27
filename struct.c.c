#include <stdio.h>

struct student1 {
   char lastName;
   int studentId;
   char grade;
};

typedef struct {
   char lastName;
   int studentId;
   char grade;
} student2;

int main() {

   struct student1 st1 = { 'A',100,'A' };

   printf("st1.lastName=%c\n", st1.lastName); // A
   printf("st1.studentId=%d\n", st1.studentId); // 100
   printf("st1.grade=%c\n", st1.grade); // A

   student2 st2 = { 'B',200,'B' };  //  typedef struct를 쓰면 struct를 안써도됨

   printf("\nst2.lastName=%c\n", st2.lastName); // B
   printf("st2.studentId=%d\n", st2.studentId); // 200
   printf("st2.grade=%c\n", st2.grade); // B

   student2 st3;

   st3 = st2;

   printf("\nst3.lastName=%c\n", st3.lastName); // B : st3 = st2 로 인해 st2의 값들이 st3로 넘어옴
   printf("st3.studentId=%d\n", st3.studentId); // 200
   printf("st3.grade=%c\n", st3.grade); // B

   /* equality test 
   if(st3==st2) // 이런식으로 비교할 수 없음. 하나하나 비교해줘야함 ex) if(strcmp(person1.name, person2.name)) return FALSE;
      printf("equal\n");
   else
     {
         printf("not equal\n");
     }
*/
      printf("---------[Hankyuwon] [2019037002]---------\n");

   return 0;

}