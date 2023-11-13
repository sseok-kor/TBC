int main()
{
	int x; // declaration -> 정수 하나를 담을만한 메모리 공간을 확보했고, 그 공간을 x를 이용해 접근 할 수 있다.
	int y;
	int z;

	x = 1; // assignment
	y = 2;

	z = x + y;

	return 0; // 왜 하필 0인가? -> 잘 끝났다라는 신호로 OS에 보내줌
}

// 컴파일러는 엔터(줄바꿈 공백)은 전부 무시함
// statement 끝에는 ;이 들어감