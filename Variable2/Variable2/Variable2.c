#include <stdio.h>

/*int g; //전역변수 : 어디에서나 사용할 수 있지만, RAM 공간을 많이 잡아먹음

void main()
{
	int a; //지역변수
	a = 10; //0K
	g = 100;
	printf("g : %d", g);
}

void aaa()
{
	int k; //지역변수
	k = 20; //0K
	//a = 100; //ERROR
	g = 200;
	printf("g : %d", g);
}*/

/*int g;

void main()
{
	printf("%d\n", g);//전역변수는 '0'

	int l;
	printf("%d\n", l);//지역변수에 초기화나 대입을 하지않으면 쓰레기값

	//전역변수가 초기화가 되어있는 것이 아니라 RAM에 할당되는 공간이 다르기 때문
	//지역변수가 할당되는 곳은 쓰레기값이 차있고 전역변수가 할당되는 곳은 000...
}

void aaa()
{
	int g = 100;
	//전역변수는 지역변수에 의해 가려진다
	//전역변수와 이름이 동일한 지역변수 선언 가능, 지역변수를 우선시
}*/

//static int g; //정적전역변수
//보통 지역변수를 전역처럼 사용하기 위함으로 정적전역변수는 거의 사용하지않음


/*void aaa()
{
	//int num = 10;
	//num++;
	//printf("num : %d\n", num);//값 11 반복

	static int count = 0; 
	//함수 안에 있지만 실제로는 함수 밖에 있음
	//따라서, 이 지역만 쓸 수 있지만 변수의 값은 함수 실행이 종료되어도 사라지지않음
	count++;
	printf("aaa 함수 호출 %d번째\n", count); //11, 12, 13... 값 누적
}

void bbb()
{
	static int count = 0;
	count++;
	printf("bbb 함수 호출 %d번째\n", count);
}

void main()
{
	//int a = 10; //지역변수
	//static int b = 100; //정적변수(정적지역변수)

	aaa();
	aaa();
	bbb();
	aaa();
	aaa();
	aaa();
	bbb();
	bbb();
}*/
