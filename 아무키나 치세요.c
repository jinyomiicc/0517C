#include <stdlib.h> //환경 변수 관리 함수 라이브러리
#include <stdio.h>

int main(void) {
  system("dir"); //현재 파일 목록 출력
  printf("아무 키나 치세요\n");
  _getch(); //키 하나 누르면 ?
  system("cls"); //창 지움
  
  return 0;
}