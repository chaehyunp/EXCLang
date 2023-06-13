#include <stdio.h>
//#include <malloc.h> //malloc(); free();기능만 있음
#include <stdlib.h> //stdlib(standard library) malloc기능 + 알파

//int increase(int* p);
//void output(int* p[]);

void main()
{
	/*int a = 10;
	int* p; //포인터 변수 - 주소를 저장하는 용도의 변수
	p = &a;

	printf("%p\n", &a); //a의 주소
	printf("%p\n", p); //p가 가진 값(a의 주소)

	//p가 가진 주소 안에 있는 데이터를 출력
	printf("%d\n", *p); //역참조연산자(포인터연산자) 사용

	double b = 3.14;
	double* p2;
	p2 = &b;

	printf("%lf\n", *p2);

	char c = 'G';
	char* p3;
	p3 = &c;

	printf("%c\n", *p3);

	int num = 100;
	int* pp;
	pp = &num;

	*pp = 200;
	printf("%d\n", num);

	printf("input : ");
	scanf_s("%d", pp); //&주소연산자 사용하지 않음
	printf("%d\n", num);*/

	/*int a = 10;
	int b = a;

	int num = 100;
	int* p1 = &num;
	int* p2;
	p2 = p1;

	printf("%d\n", *p1);
	printf("%d\n", *p2);

	*p1 = 5000;
	printf("%d\n", *p1);
	printf("%d\n", *p2);
	//같은 주소를 가지고 있음으로써 값을 공유

	int n1 = 100;
	int n2 = 200;
	int* ppp;

	ppp = &n1;
	printf("%d\n", *ppp);
	
	ppp = &n2;
	printf("%d\n", *ppp);*/

	//포인터 사용 4가지용도 첫 번째
	/*int a = 10;
	printf("a : %d\n", a);

	increase(&a); //증가 작업 기능을 호출, a변수의 주소를 전달해주기
	printf("a : %d\n", a);*/

	//포인터 사용 4가지용도 두 번째
	/*char aaa[10] = "Hello";
	//printf("%s\n", &aaa[0]); //&aaa[0] == aaa
	printf("%s\n", aaa); //s는 값이 아니라 주소 필요 (string은 참조변수임)

	char* p; 
	p = "android"; 
	//큰따옴표는 주소를 의미
	//p에 "android" 데이터를 준 것이 아니라 문자열 상수의 시작주소를 대입한 것
	printf("%s\n", p); //문자열을 저장한 것이 아님!! 참조한 것!!

	int n;
	n = 10;
	printf("%d", n); //주소인지 데이터인지만 다르고 구조적으로는 같음, 값저장하는 느낌*/

	/*char aaa[10];
	char* p;

	scanf_s("%s", aaa, 10);
	printf_s("%s\n", aaa);

	scanf_s("%s", p, 10);  
	printf("%s\n", p);

	//포인터 변수는 캐릭형 배열에 비해서 글자수 제한이나 데이터 변경에 자유로워 보이나
	//키보드 입력 불가, 문자열을 가르켜서 입력은 가능하나 굳이...*/

	//포인터 사용 4가지용도 세 번째(첫 번째와 유사)
	/*int aaa[3] = {10, 20, 30};
	output(aaa); //배열을 보낸것 no, 배열시작주소(aaa[0]의 주소) 보낸것 -> 포인터변수로 받아야함 
	//aaa == &aaa[0] 배열의 이름은 배열시작주소와 같음
	//이름이 값이 아니므로 파라미터로 배열값 전달 불가*/

	//포인터 사용 4가지용도 네 번째
	/*//Heap메모리에 정수형 숫자를 저장하기위해 4byte 공간 받아보기
	int* p = malloc(4); //할당된 주소를 리턴해줌
	*p = 10; //이 주소에 10을 넣어줘!
	printf("%d\n", *p); //포인터가 가르키는 곳의 정수를 출력해줘!

	free(p);*/

	/*double* p = malloc(8);
	*p = 3.14;
	printf("%lf\n", *p);

	char* pp = malloc(1);
	*pp = 'G';
	printf("%c\n", *pp);*/
	
	//포인트 변수 배열
	int aaa[3] = { 10, 20, 30 };
	int bbb[3] = { 100, 200, 300 };
	int ccc[3] = { 1000, 2000, 3000 };

	int* ps[3] ; //배열 전체를 가르키는 것이 아니라 한 개를 가르킨 것(첫번째 주소)
	ps[0] = &aaa[0]; //==aaa
	ps[1] = bbb;
	ps[2] = ccc;

	printf("%d\n", *(ps[0]+0));
	printf("%d\n", *(ps[0]+1));
	printf("%d\n", *(ps[0]+2));

	printf("%d\n", *(ps[1] + 0));
	printf("%d\n", *(ps[1] + 1));
	printf("%d\n", *(ps[1] + 2));

	printf("%d\n", *(ps[2] + 0));
	printf("%d\n", *(ps[2] + 1));
	printf("%d\n", *(ps[2] + 2));

	char* names[3];
	names[0] = "rachel"; //리터럴 상수 주소를 대입
	names[1] = "robin";
	names[2] = "rosie";

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", names[i]);
	}

	int* p = NULL; 
	//쓰레기값이나 주소 모두 숫자, 기본적으로 초기화해놓자
	//0은 첫번째 주소
	//초기값 int 0, double 0.0, char ASCII 0,  pointer null 
	//(어쨌든 다 0에 해당하는 값이지만 숫자 0과 구분하기위해)  
}

//포인터 사용 4가지용도 첫 번째
/*int increase(int* p)
//매개변수(파라미터)에 값을 보내면 원본 값은 변하지 않음 call by Value
//주소를 보내면 원본 값이 변할 수 있음 call by Address, Reference
{
	//*p = *p + 1;
	//*p++; 연산자의 우선순위때문에 ++이 먼저되므로 주소가 ++이 됨
	(*p)++;
}*/

//포인터 사용 4가지용도 세 번째(첫 번째와 유사)
/*void output(int p[]) //원래 "int* p" 배열이 아니고 포인터변수임, 그냥 표기법만 허용해준것
{
	//printf("%d\n", *(p+0)); //주소에 +1은 수치적 1이 아니라 옆집 의미 eg. int형은 4칸 옆, char형은 1칸 옆
	//printf("%d\n", *(p+1));
	//printf("%d\n", *(p+2));

	printf("%d\n", p[0]); //컴퓨터가 보기엔 p나 aaa나 같음
	printf("%d\n", p[1]);
	printf("%d\n", p[2]);
}*/ 