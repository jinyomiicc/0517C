#include <stdio.h>
#include <time.h> //시간 함수 라이브러리

int main(void) {
  time_t start, end;  //시간을 저장하는 데이터 타입
  start = time(NULL); //현재 시간 초 단위로 가져옴
  printf("10초가 되면 아무 키나 누르세요\n");
  while (1) {      //무한으로 반복
    if (getchar()) // 아무 키 하나 누르면 멈춤
      break;
  }
  printf("종료되었습니다.\n");
  end = time(NULL); //현재 시간 값
  printf("경과된 시간은 %ld 초 입니다.\n", end - start);
  return 0;
}