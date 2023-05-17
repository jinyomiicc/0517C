#include <math.h> // 수학 함수 라이브러리
#include <stdio.h>
#define PI 3.141592 // PI를 3.1415952로 지정

double rad(double degree) {   //실수형 함수 만들기
  return PI * degree / 180.0; //각도를 라디안으로 변환
}
void drawbar(int height) {         //막대그래프를 그리는 함수
  for (int i = 0; i < height; i++) // y보다 적게 반복해서 * 출력
    printf("*");
  printf("\n");
}

int main(void) {
  int degree, x, y;
  for (degree = 0; degree <= 90; degree += 10) { // 0부터 10씩 늘어나면서 90이 되면 멈춤
    y = (int)(60 * sin(rad((double)degree)) + 0.5); // 계산 후 정수부분만 남김(int)
    drawbar(y);     // y값을 이용해 막대그래프 그림
  }
  return 0;
}