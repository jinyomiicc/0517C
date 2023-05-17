#include <stdlib.h> //난수 생성 함수 라이브러리
#include <stdio.h>
#include <conio.h> //window 제공 컴파일러에서 사용
#include <time.h> //시간 관련 함수 

void disp_car(int car_number, int distance){ //반환 값 없이 함수 만들기
  int i;
  printf("CAR#%d:", car_number);
  for(i = 0; i < distance/10; i++){ // i가 10보다 작으면 반복
    printf("*");
  }
  printf("\n");
}

int main(void) {
  int i;
  int car1_dist = 0, car2_dist = 0; 
  int car3_dist = 0; // 3번째 자동차

  srand((unsigned)time(NULL)); //난수 초기화

  for(i = 0; i < 6; i++){ // i가 5될 때 까지 반복
    car1_dist +=rand()%100; //난수 0부터 99가 나오고 이걸 car1_dist에 더함
    car2_dist += rand()%100;
    car3_dist += rand()%100;
    disp_car(1, car1_dist); //car_number에 1, distance는 위에 난수가 들어감
    disp_car(2, car2_dist);
    disp_car(3, car3_dist);
    printf("-----------------\n");
    _getch();
  }
  return 0;
}