#include <stdio.h>

void main()
{
	//Ch3.Ex3-5
	/*int a = 0, b = 1;
	printf_s("a의 값은 %d입니다.\nb의 값은 %d입니다.", a, b);
	printf("\n");*/

	//Ch3.Ex3-8
	/*int box = 50;
	printf("총 %d박스가 있습니다.", box);
	printf("\n");*/

	//Ch3.연습문제3
	/*int red = 1, blue = 2;
	int yellow;

	printf("before\nred = %d, blue = %d\n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("after\nred = %d, blue = %d\n", red, blue);
	printf("\n");*/



	//Ch.6 Ex6-4
	/*char num1 = -129;
	char num2 = 128;

	printf("%d\n", num1);
	printf("%d\n", num2);

	num1 = -130;
	num2 = 129;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("\n");*/

	//Ch.6 Ex6-7
	/*float numb1 = 0.123456789012345;
	double numb2 = 0.123456789012345;

	printf("float형 : %f\n", numb1);
	printf("double형 : %lf\n", numb2);

	printf("float형 : %.15f\n", numb1);
	printf("double형 : %.15lf\n", numb2);*/

	//Ch.6 Ex6-10
	/*char val1;
	int val2;

	printf("문자입력 : ");
	scanf_s("%c", &val1, 1);
	printf("ASCII 코드값은 %d입니다.\n", val1);
	printf("ASCII 코드값 입력 : ");
	scanf_s("%d", &val2);
	printf("문자로 %c입니다.\n", val2);*/

	//Ch.6 연습문제7
	/*int r;
	printf("원의 반지름:");
	scanf_s("%d", &r);

	printf("원의 면적:%f, 원의 둘레:%f\n", r * r * 3.14, r * 2 * 3.14);*/



	//Ch.2 Ex2-11
	/*int age;
	printf("What is your age? : ");
	scanf_s("%d", &age);
	printf("Wow! Really? Are you %dyears old?", age);*/

	//Ch.2 Ex2-12
	/*int d, x, o;
	printf("10진수 정수 1개 입력 : ");
	scanf_s("%d", &d);
	printf("10진수 : %d, 16진수 : %x , 8진수 : %o\n", d, d, d);
	printf("16진수 정수 1개 입력 : ");
	scanf_s("%x", &x);
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", x, x, x);
	printf("8진수 정수 1개 입력 : ");
	scanf_s("%o", &o);
	printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", o, o, o);*/

	//Ch.2 Ex2-13
	/*float f1, f2;
	double d1, d2;
	printf("float형 실수 두 개 입력 : ");
	scanf_s("%f%e", &f1, &f2);
	printf("float형 실수 출력 : f1=%f, f2=%e\n", f1, f2);
	printf("double형 실수 두 개 입력 : ");
	scanf_s("%lf%le", &d1, &d2);
	printf("double형 실수 출력 : d1=%lf, d2=%le\n", d1, d2);*/

	//Ch2.연습문제3
	/*int ver, hor;
	printf("가로 길이를 입력하세요: ");
	scanf_s("%d", &ver);
	printf("세로 길이를 입력하세요: ");
	scanf_s("%d", &hor);
	printf("직사각형의 넓이는 %d입니다.\n", ver * hor);*/

	//Ch2.연습문제4
	/*int r;
	double pi = 3.14;
	printf("반지름을 입력하세요: ");
	scanf_s("%d", &r);
	printf("원의 넓이는 %f입니다.", r * r * pi);*/
    
    //Ch.2 연습문제5
    /*int d1, d2;
	printf("두 정수를 입력하세요 : ");
	scanf_s("%d%d", &d1, &d2);
	printf("합 : %d + %d = %d\n", d1, d2, d1 + d2);
	printf("차 : %d - %d = %d\n", d1, d2, d1 - d2);*/

    //Scanf 문제1
    /*int i1, i2;
	printf("정수 두 개를 입력 : ");
	scanf_s("%d%d", &i1, &i2);
	printf("뺄셈결과 : %d - %d = %d\n곱셈결과 : %d * %d = %d\n", i1, i2, i1 - i2, i1, i2, i1 * i2);*/

    //Scanf 문제2
    /*int num1, num2, num3;
	printf("세 개의 정수를 차례로 입력 : ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	printf("%d*%d+%d=%d\n", num1, num2, num3, num1*num2+num3);*/

	//Scanf 문제3
	/*int x;
	printf("정수입력 : ");
	scanf_s("%d", &x);
	x = x * x;
	printf("입력한 정수의 제곱값 : %d\n", x);*/

	//Scanf 문제4
	int a1, a2;
	printf("두 개의 정수값 입력 : ");
	scanf_s("%d%d", &a1, &a2);
	printf("몫 : %d, 나머지: %d", a1/a2, a1%a2 );

	//Scanf 문제5
	/*int numb1, numb2, numb3;
	printf("세 개의 정수값 입력 : ");
	scanf_s("%d%d%d", &numb1, &numb2, &numb3);
	printf("(%d-%d)*(%d*%d)*(%d/%d) = %d", numb1, numb2, numb2, numb3, numb3, numb1, (numb1 - numb2) * (numb2 * numb3) * (numb3 / numb1));*/
}