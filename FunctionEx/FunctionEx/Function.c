#include <stdio.h>

//예제9-1
/*int sum(int x, int y)
{
	int result = 0;
	result = x + y;
	return result;
}

void main()
{
	int answer = 0;
	answer = sum(3, 4);
	printf("%d\n", answer);
}*/

//예제9-2
/*int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}

void main()
{
	int i, j, k;
	
	printf("숫자 두 개를 입력하세요 : ");
	scanf_s("%d %d", &i, &j);

	k = max(i, j);
	printf("%d와 %d 중 큰 수는 %d입니다.\n", i, j, k);
}*/

//예제9-3
/*double dv(double x, double y);
double input();
void output(double x);
void infm();

void main()
{
	double num1, num2, result;

	infm();
	printf("첫 번째 실수 입력 : ");
	num1 = input();

	printf("두 번째 실수 입력 : ");
	num2 = input();

	result = dv(num1, num2);
	output(result);
}

double dv(double x, double y)
{
	double val;
	val = x / y;
	return val;
}

double input()
{
	double val;
	scanf_s("%lf", &val);
	return val;
}

void output(double x)
{
	printf("나눗셈 결과 : %lf\n", x);
	return;
}

void infm()
{
	printf("---프로그램 시작---\n");
	return;
}*/

//예제9-4
/*int sum();
int input();
void output(int x);

void main()
{
	int result;
	printf("---프로그램 시작---\n");
	printf("정수 한 개를 입력하세요 : \n");

	result = sum();
	output(result);
}
int sum()
{
	int i = 0, total = 0, num = 0;
	num = input();

	for (i = 1; i <= num; i++)
	{
		total = total + i;
	}
	return total;
}
int input()
{
	int val;
	scanf_s("%d", &val);
	return val;
}
void output(int x)
{
	printf("결과 : %d\n", x);
	return;
}*/
//예제9-5
/*void func_A();

void main()
{
	int aaa = 10;
	printf("main() 함수의 aaa값 : %d\n", aaa);

	func_A();
}
void func_A()
{
	int aaa = 20;
	int bbb = 30;
	
	printf("func_A() 함수의 aaa값 : %d\n", aaa);
	printf("func_A() 함수의 bbb값 : %d\n", bbb);
}*/

//예제9-6
/*void main()
{
	int i = 0;

	for (i = 1; i < 3; i++)
	{
		int total = 0;
		total = total + i;
	}
	if (total < 10)
	{
		printf("total 값은 %d입니다.\n", total); //total변수 선언되지 않음, ERROR
	}
}*/

//예제9-7
/*int sub(int x, int y);

void main()
{
	int a = 5, b = 3;
	int result = 0;

	result = sub(a, b);
	printf("뺄셈결과 : %d\n", result);
}
int sub(int x, int y)
{
	return x - y;
}*/

//예제9-8
/*int num;
void grow();

void main()
{
	printf("함수 호출 전 num : %d\n", num);
	grow();
	printf("함수 호출 후 num : %d\n", num);
}
void grow()
{
	num = 60;
}*/

//예제9-9
/*void count();

void main()
{
	count();
	count();
	count();
}
void count()
{
	static int x = 0;
	int y = 0;

	x = x + 1;
	y = y + 1;

	printf("x값 : %d, y값 : %d\n", x, y);
}*/

//예제9-14
/*int fac(int n);

void main()
{
	int a;
	int result;

	printf("정수 입력 : ");
	scanf_s("%d", &a);

	result = fac(a);
	printf("%d 팩토리얼은 : %d입니다.", a, result);
}
int fac(int n)
{
	if (n <= 1) return 1;
	else return n * fac(n - 1);
}*/

//연습문제1
/*int input();
int f();

void main()
{
	int n = f();
	printf("절댓값은 %d입니다.", n);
}

int input()
{
	int val;
	scanf_s("%d", &val);
	return val;
}

int f()
{
	printf("정수를 입력하세요 : ");

	int ab = 0;
	ab = input();

	if (ab < 0) return ab * -1;
	else return ab;
}*/

//연습문제3
/*int plus(int i, int j);
int minus(int i, int j);
int mul(int i, int j);
double div(double i, double j);

void main()
{
	int a, b;
	int result1;
	double result2;

	printf("input two numbers : ");
	scanf_s("%d %d", &a, &b);

	result1 = plus(a, b);
	printf("a + b = %d\n", result1);
	result1 = minus(a, b);
	printf("a - b = %d\n", result1);
	result1 = mul(a, b);
	printf("a * b = %d\n", result1);
	result2 = div(a, b);
	printf("a / b = %lf\n", result2);
}

int plus(int num1, int num2)
{
	return num1 + num2;
}

int minus(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

double div(double num1, double num2)
{
	return num1 / num2;
}*/

//연습문제8
/*int total(int t);

void main()
{
	int n, result;

	printf("input your number : ");
	scanf_s("%d", &n);

	result = total(n);
	printf("1부터 %d까지의 합 : %d", n, result);
}

int total(int t)
{
	if (t <= 1) return 1;
	else return t + total(t - 1);
}*/

//메모장 문제1
/*int max(int a, int b, int c);
int min(int a, int b, int c);

void main()
{
	int num1, num2, num3;
	int result;

	printf("정수 3개 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = max(num1, num2, num3);
	printf("가장 큰 수 : %d\n", result);
	result = min(num1, num2, num3);
	printf("가장 작은 수 : %d\n", result);
}

int max(int a, int b, int c)
{
	return a > b && a > c ? a :
		b > a && b > c ? b :
		c > a && c > b ? c : a;
}

int min(int a, int b, int c)
{
	return a < b && a < c ? a :
		b < a&& b < c ? b :
		c < a && c < b ? c : a;
}*/

//메모장 문제2
/*double CelToFah(int c);
double FahToCel(int f);

void main()
{
	int cf, fc;
	double result;

	printf("섭씨 온도를 화씨 온도로 변환 : ");
	scanf_s("%d", &cf);
	result = CelToFah(cf);
	printf("변환 온도(F) : %lf\n",result);

	printf("화씨 온도를 섭씨 온도로 변환 : ");
	scanf_s("%d", &fc);
	result = FahToCel(fc);
	printf("변환 온도(C) : %lf\n", result);
}

double CelToFah(int c)
{
	double val;
	val = 1.8 * (double)c + 32;
	return val;
}

double FahToCel(int f)
{
	double val;
	val = ((double)f - 32) / 1.8;
	return val;
}*/

//메모장 문제3
