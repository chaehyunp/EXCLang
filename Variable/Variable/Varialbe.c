#include <stdio.h>

void main()
{
	//데이터를 저장하는 변수 만들기[변수선언]
	//문법: 자료형 변수명;
	//대입연산자(=): 연산자 중심으로 우측값을 좌측에 대입
	int a;
	a = 10;

	//a라는 이름의 변수 안에 있는 값 10을 화면에 보여주기(출력)
	printf("a:%d\n", a);

	//a라는 이름의 변수의 값을 20으로 변경하기(대입하기)
	a = 20;
	printf("변경된 a값:%d\n", a);

	printf("\n");

	//다른 자료형의 데이터들 변수 사용해보기
	float b;
	b = 3.14;
	printf("원주율:%.2f\n", b);

	printf("\n");

	char vitaminType;
	vitaminType = 'C';
	printf("비타민%c\n", vitaminType);
	vitaminType = 'B';
	printf("비타민%c\n", vitaminType);


	int num1;//변수선언
	num1 = 10; //변수 값 대입
	printf("%d\n", num1);

	int num2 = 20; //변수를 만들면서 *초기화했다*
	printf("%d\n", num2);

	int A, B, C, D; //같은 자료형일경우,연결연산자를 이용해서 여러 개의 변수 한 번에 선언

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double)); //float과 double의 차이: 소수점 아래로 얼마나 표현할 수 있는가

	printf("\n");

	float AA = 0.123456789123456789;
	double BB = 0.123456789123456789;

	printf("%.20f\n", AA);
	printf("%.20lf\n", BB);

}