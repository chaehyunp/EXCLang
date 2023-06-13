#include <stdio.h>

/*void login(); //함수의 프로토타입

void main()
{
	login(); //함수호출
	printf("main..\n");
	login(); //재호출 가능
}

void login()
{
	printf("login\n");
	printf("join\n");
}*/

/*void display(void);

void main()
{
	display();
}

//리턴X,파라미터X
//단순 출력만 하는 기능(함수)
void display()//main으로 아무것도 리턴도 파라미터도 없음(C언어에서는 파라미터의 void 생략 가능, 자바는 쓰면 에러)
{
	printf("Hello world!\n");
}*/

/*void display(int n, int a, double avr, int hund, char cap);

void main()
{
	int num = 10;
	int age = 25;
	double avr = 90.3;//그 영역에서 만든 변수 "지역변수"는 그 영역에서만 사용 가능

	display(num, age + 1, avr, 100, 'A');//수식, 정수값, 캐릭값 가능
}

void display(int n, int a , double avr, int hund, char cap)//매개변수는 줄여쓸 수 없음, 중복되는 자료형이더라도 전부 작성, 자료형/갯수/순서 중요
{
	printf("num : %d\n", n);
	printf("num : %d\n", a);
	printf("average : %lf\n", avr);
	printf("%d", hund);
	printf("%c", cap);
}*/

/*void main()
{
	int n;
	n = aaa();
	//어떤 함수의 리턴 값은 다음줄에서 받을 수 없음 
	//int형 변수 'n'에 aaa를 실행하고 나온 리턴값을 대입 
	//함수를 대입한 것이 아니라,함수호출의 결과를 대입한 것!!!

	printf('%d', n);
}

int aaa()
{
	printf("aaa\n");
	return 100;
}*/

/*int getM(int a, int b);
int input();

void main()
{
	int num1, num2;

	//입력기능을 가진 함수 호출, 키보드 입력값을 num 변수에 넣기
	num1 = input();
	num2 = input();//함수 재사용 가능

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);

	int max = getM(num1, num2);
	printf("큰 값 : %d", max);
}

//전달받은 2개의 정수 중에서 큰 값을 구해주는 기능 함수
int getM(int a, int b)
{
	//int max;
	//if (a > b) max = a;
	//else max = b;

	//return max;

	if (a > b) return a;
	else return b;
}

int input()
{
	int n;
	printf("input : ");
	scanf_s("%d", &n);

	return n;
}*/


/*void display(); //리0파라0
int input(); //리1파라0
int sum(int x, int y); //리1파라1
void output(int x, int y, int z); //리0파라1

void main()
{
	//1.안내문구 기능 함수 호출
	display();

	//2. 사용자로부터 정수 2개 입력받는 기능(함수) 사용(호출)
	int a, b;
	a = input();
	b = input();

	//3. 2개의 정수값을 덧셈하여 결과를 주는 함수 호출
	int c = sum(a, b);

	//4. 모든 결과 값 출력
	output(a, b, c);
}

void display()
{
	printf("사용자로부터 2개의 정수를 입력받아 덧셈하는 프로그램\n");
}

int input()
{
	int n;
	printf("input : ");
	scanf_s("%d", &n);
	return n;
}

int sum(int x, int y)
{
	return x + y;
}

void output(int x, int y, int z)
{
	printf("%d + %d = %d\n", x, y, z);
}*/

/*int ddd()
{
	return 5;//리턴값은 ONLY ONE!
	//return을 만나면 main함수로 돌아감 이후에 코드를 작성해도 기능하지않음
	//if (a < 0) return; 
	//print("%d", a); 반복문의 break와 같은 역할
}

int ccc()
{
	return 100 + ddd();
}

void bbb()
{
	int n = ccc();
	printf("bbb : %d\n", n);
}

void aaa()
{
	printf("aaa\n");
	bbb();//함수에서 다른 함수사용 가능, main에서만 호출no
}

void main()//메인함수는 운영체제가 부르고 운영체제에게 돌려줌
{
	aaa();
	//if(조건) return -1; => 버그, 
	//return 0; => 정상작동
}*/

//재귀호출
void aaa(int n)
{
	if (n <= 0) return;
	printf("aaa\n");
	aaa(n - 1); //재귀호출 Recurcive call eg. 애니팡에서 동서남북 같은 그림인지 물을때
	//값을 이용해서 4번만 반복
	printf("kkk\n"); //aaa의 재귀호출이 끝나고 돌아올때 찍힘
}

void main()
{
	aaa(4);
}