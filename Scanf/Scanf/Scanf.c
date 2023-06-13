#include <stdio.h>

void main()
{
	//키보드를 통해 사용자의 값을 입력받기 : scanf
	//scanf("서식문자", &변수명); (큰따옴표(") 안에 띄어쓰기나 \n 쓰지않기)
	//char bloodType;
	//scanf_s("%c", &bloodType, 1); //char를 쓸때 safe버전은 입력되는 charater의 갯수 입력해야 함

	//사용자로부터 2개의 정수를 입력받기

	/*int a;
	int b;

	scanf_s("%d", &a);
	scanf_s("%d", &b);*/

	//값 출력
	/*printf("a:%d\n", a);
	printf("b:%d\n", b);*/

	//사용자로부터 2개의 정수를 입력받아 두 수를 덧셈하기
	/*int a;
	int b;
	printf("2개의 정수 a,b 값을 입력하면 덧셈의 결과가 나옵니다.\n");
	printf("\n");
	printf("정수 a의 값을 입력하시오\n");
	scanf_s("%d", &a);
	printf("정수 b의 값을 입력하시오\n");
	scanf_s("%d", &b);

	int c;
	c = a + b;
	printf("%d+%d=%d\n", a, b, c);*/

	//구구단 출력 프로그램
	printf("구구단 출력 프로그램\n");
	printf("\n");

	int mlt;
	
	printf("단수 입력 : ");
	scanf_s("%d", &mlt);
	printf("\n");

	printf("%d*%d=%d\n", mlt, 1, mlt * 1);
	printf("%d*%d=%d\n", mlt, 2, mlt * 2);
	printf("%d*%d=%d\n", mlt, 3, mlt * 3);
	printf("%d*%d=%d\n", mlt, 4, mlt * 4);
	printf("%d*%d=%d\n", mlt, 5, mlt * 5);
	printf("%d*%d=%d\n", mlt, 6, mlt * 6);
	printf("%d*%d=%d\n", mlt, 7, mlt * 7);
	printf("%d*%d=%d\n", mlt, 8, mlt * 8);
	printf("%d*%d=%d\n", mlt, 9, mlt * 9);

	//scanf 명령 하나에 여러 개의 변수값 입력받기
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("a:%d\n", a);
	printf("b:%d\n", b);
}