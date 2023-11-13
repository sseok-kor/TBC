#include <stdio.h>  // 전처리기 (pre - processor) : 컴파일 전에 처리하는 것


int main()		// main 함수 정의 시작
{				// 영역(scope)의 시작
	int a;
	int b;		// 변수 선언 (variable declaration)
	int c;
	
	a = 1;		// 변수에 값 대입 (assignment)
	b = 2;
	c = a + b;		// 변수에 연산 결과 대입 (operation assignment)
	
	printf("Result is %i", c);		// 함수 호출 (Call or Invoke)

	return 0;		// 결과 값(value)을 반환(return) 
}				// 영역의 끝