#include <stdio.h>

void main()
{	
	//Ex 5-2
	/*int i = 0, j = 0, k = 0;
	printf("i = %d, j = %d, k = %d \n", i, j, k);
	i = 1;
	j = 5;
	k = 7;
	printf("i = %d, j = %d, k = %d \n", i, j, k);*/

	//Ex 5-3
	/*int a, b;
	a = 6;
	b = 2;

	printf("덧셈 연산 결과 : %d \n", a + b);
	printf("뺄셈 연산 결과 : %d \n", a - b);
	printf("곱셈 연산 결과 : %d \n", a * b);
	printf("나누기 연산 결과 : %d \n", a / b);
	printf("나머지 연산 결과 : %d \n", a % b);*/

	//Ex 5-4
	/*int num1, num2;

	num1 = 10 / 3;
	num2 = 10 % 3;

	printf("몫 : %d \n", num1);
	printf("나머지 : %d \n", num2);*/

	//Ex 5-5
	/*int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;
	num1 = num1 + num2;
	printf("복합 덧셈 연산 결과 : num1의 최종값 : %d \n", num1);
	num2 = num2 - 2;
	printf("복합 뺄셈 연산 결과 : num2의 최종값 : %d \n", num2);
	num3 = num3 * 2;
	printf("복합 곱셈 연산 결과 : num3의 최종값 : %d \n", num3);
	num4 = num4 / 2;
	printf("복합 나누기 연산 결과 : num4의 최종값 : %d \n", num4);
	num5 = num5 % 2;
	printf("복합 나머지 연산 결과 : num5의 최종값 : %d \n", num5);
	printf("%d,%d,%d,%d,%d\n", num1, num2, num3, num4, num5);*/

	//Ex 5-6
	/*int num1 = 10;
	printf("%d\n", num1);
	num1++;
	printf("%d\n", num1);
	++num1;
	printf("%d\n", num1);
	--num1;
	printf("%d\n", num1);
	num1--;
	printf("%d\n", num1);*/

	//Ex 5-7
	/*int num1 = 10, num2 = 10;
	int a, b;

	a = ++num1;
	printf("%d, %d\n", a, num1);

	b = num2++;
	printf("%d, %d\n", a, num2);*/

	//Ex 5-8
	/*int num1 = 10, num2 = 10;
	int a, b;
	num1 = num1 + 1;
	a = num1;
	printf("%d, %d\n", a, num1);

	b = num2;
	num2 = num2 + 1;
	printf("%d, %d\n", b, num2);*/

	//Ex 5-9
	/*int num1 = 10, num2 = 10;
	printf("%d\n", ++num1);
	printf("%d\n", num1);
	printf("%d\n", num2++);
	printf("%d\n", num2);*/

	//Ex 5-10
	/*int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = num1 > num2;
	result2 = num1 <= num2;
	result3 = num1 == num2;
	result4 = num1 != num2;

	printf("result1에 저장된 값 : %d \n", result1);
	printf("result2에 저장된 값 : %d \n", result2);
	printf("result3에 저장된 값 : %d \n", result3);
	printf("result4에 저장된 값 : %d \n", result4);*/

	//Ex 5-11
	/*int num1 = 2, num2 = 3, num3 = 5;
	int result1, result2, result3;

	result1 = num1 > 0 && num2 < 10;
	result2 = num2 <= 2 || num3 > 5;
	result3 =! num3;

	printf("result1에 저장된 값 %d\n", result1);
	printf("result2에 저장된 값 %d\n", result2);
	printf("result3에 저장된 값 %d\n", result3);*/

	//Ex 5-12
	/*int num1 = 2, num2 = 3;
	int result1;

	result1 = num1 > num2 ? num1 : num2;
	printf("result1에 저장된 값 %d\n", result1);*/

	//연습문제1
	/*int x, y, z;

	printf("input x : ");
	scanf_s("%d", &x);
	printf("input y : ");
	scanf_s("%d", &y);
	printf("input z : ");
	scanf_s("%d", &z);

	printf("(x + y) * (x + z) / (y %% z) = %d", (x + y) * (x + z) / (y % z));*/

	//연습문제2
	/*int numb1, numb2, numb3;

	printf("input : ");
	scanf_s("%d", &numb1);
	printf("input : ");
	scanf_s("%d", &numb2);

	numb3 = numb1 > numb2 ? numb2 : numb1 < numb2 ? numb1 : numb2;
	printf("Smaller Number : %d", numb3);*/

	//연습문제4
	/*int a, b, c, d;

	printf("정수 a 입력 : ");
	scanf_s("%d", &a);
	printf("정수 b 입력 : ");
	scanf_s("%d", &b);
	printf("정수 c 입력 : ");
	scanf_s("%d", &c);

	d = a > b && a > c ? a : 
		b > a && b > c ? b : 
		c > a && c > b ? c : a;

	printf("가장 큰 수 : %d", d);*/

	//연습문제5
	/*int rate = 1271;
	int dollar;

	printf("달러 : ");
	scanf_s("%d", &dollar);
	printf("원화 : %d원", dollar* rate);*/

	//연습문제8
	/*int hr, min, sec;

	printf("시 : ");
	scanf_s("%d", &hr);
	printf("분 : ");
	scanf_s("%d", &min);
	printf("초 : ");
	scanf_s("%d", &sec);

	printf("현재, 오늘 00시 00분 00초를 기준으로 %d초가 흘렀습니다.", hr * 3600 + min * 60 + sec);*/

	//연습문제9
	/*double pnd = 0.45;

	printf("밀가루 150파운드는 %.1lfkg입니다.", 150.0 * pnd);*/

	//Operator 문제1
	/*int m;
	double km = 1.609;

	printf("마일을 입력하시오: ");
	scanf_s("%d", &m);
	printf("%d마일은 %.2lf킬로미터입니다.", m, m * km);*/

	//Operator 문제2
	/*int value, money, plus;
	printf("받은 돈 : ");
	scanf_s("%d", &money);
	printf("상품 가격 : ");
	scanf_s("%d", &value);

	plus = value / 10;
	printf("부가세 : %d\n", plus);
	printf("잔돈 : %d", money-(value+plus));*/

	//Operator 문제3
	/*double rad;

	printf("반지름 : ");
	scanf_s("%lf", &rad);

	printf("면적 : %lf", rad * rad * 3.14);*/

	//Operator 문제4
	/*int x1, y1, x2, y2;
	
	printf("좌 상단의 x좌표값 : ");
	scanf_s("%d", &x1);
	printf("좌 상단의 y좌표값 : ");
	scanf_s("%d", &y1);
	printf("우 하단의 x좌표값 : ");
	scanf_s("%d", &x2);
	printf("우 하단의 y좌표값 : ");
	scanf_s("%d", &y2);

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", (x2 - x1)* (y2 - y1));*/

	//Opperator 문제5
	/*int smth, nsmth;
	
	printf("정수 값을 입력하세요 : ");
	scanf_s("%d", &smth);

	nsmth = smth >= 0 ? smth : -smth;
	printf("입력한 정수의 절대값 : %d", nsmth);*/

	//Opperator 문제6
	/*char eng, engR;

	printf("문자 입력 : ");
	scanf_s("%c", &eng, 1);

	engR = eng >= 'a' && eng <= 'z' ? eng - 32 : 
		   eng >= 'A' && eng <= 'Z' ? eng + 32 : eng;
	printf("출력 결과 : %c", engR );*/

	//Opperator 문제7
	/*int ip1, ip2, ip3, ln, sn;
	double avg;
	
	printf("첫번째 정수 입력 :");
	scanf_s("%d", &ip1);
	printf("두번째 정수 입력 :");
	scanf_s("%d", &ip2);
	printf("세번째 정수 입력 :");
	scanf_s("%d", &ip3);

	avg = ((double)ip1 + (double)ip2 + (double)ip3) / 3;

	printf("정수 세 개의 합 : %d\n", ip1 + ip2 + ip3);
	printf("정수 세 개의 평균 : %.2lf\n", avg);

	ln = ip1 > ip2 && ip1 > ip3 ? ip1 :
		 ip2 > ip1 && ip2 > ip3 ? ip2 :
		 ip3 > ip1 && ip3 > ip2 ? ip3 : ip1;

	sn = ip1 < ip2 && ip1 < ip3 ? ip1 :
		 ip2 < ip1 && ip2 < ip3 ? ip2 :
		 ip3 < ip1 && ip3 < ip2 ? ip3 : ip1;

	printf("정수 세 개의 최대값 : %d\n", ln);
	printf("정수 세 개의 최소값 : %d\n", sn);*/
}