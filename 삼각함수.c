#include <math.h> //수학 함수 포함 라이브러리
#include <stdio.h>

int main(void) {
  double pi = 3.1415926535; //double로 소수점 사용
  double x, y;

  x = pi / 2; // double pi 값을 2로 나눔
  y = sin(x);
  printf("sin(%f) = %f\n", x, y); //f는 실수 형식 지정자로 double,float 변수 출력
  y = cos(x);
  printf("cos(%f) = %f\n", x, y); //바뀐 y값 출력
}