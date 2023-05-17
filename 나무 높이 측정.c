#define _CAT_SECURE_NO_WARNINGS //비주얼 스튜디오 경고 메시지 무시
#include <math.h> //함수 사용 라이브러리
#include <stdio.h>

int main(void) {
  double height, distance, tree_height, degrees, radians; //소수점 가능

  printf("나무와이 길이(단위는 미터):");
  scanf("%lf", &distance); //double형 변수 입력
  
  printf("측정자의 키(단위는 미터):");
  scanf("%lf", &height); //double형 변수 입력
  
  printf("각도(단위는 도):");
  scanf("%lf", &degrees); //double형 변수 입력

  radians = degrees * (3.141592 / 180.0); //라디안 계산

  tree_height = tan(radians) * distance + height; //탄젠트 함수 사용해서 나무 높이 계산
  printf("나무의 높이(단위는 미터): %lf\n", tree_height);
  
  return 0;
}