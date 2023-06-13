#include <stdio.h>
//#define MAX 100 //전처리, 매크로 상수

void main()
{

	/*printf("%d\n", MAX);
	const int a = 10;*/

	/*int a; //RAM에 a라는 이름의 메모리공간 4byte 확보
	a = 10 //RAM에 10이라는 리터럴 상수 메모리공간 4byte 확보(garbager value)
		   //오른쪽 메모리를 COPY 왼쪽 메모리에 PASTE, 양쪽의 자료형이 같아야 함!*/

		   /*int a = 10, b = 4;
		   double c;
		   c = (double)a / (double)b;

		   printf("c : %lf\n", c);*/

		   /*float d;
		   d = 3.14f; //float형 상수
		   printf("%f /n", d);*/

		   /*int n;
		   scanf_s("%d", &n);
		   int a = n / 100;
		   int b = (n / 10) % 10;
		   int c = n % 10;
		   printf("a = %d, b = %d, c = %d", a, b, c);*/

		   /*printf("%d\n", 3 < 5); //1:T, 0:F 비교연산의 결과 정수형 숫자로 표현
		   printf("%d\n", 3 > 5);
		   printf("%d\n", 5 <= 5);
		   printf("%d\n", 5 == 5); //대입연산자(=), 비교연산자(==)
		   printf("%d\n", 5 != 5);*/

		   /*int age;

		   printf("나이를 입력하세요. ");
		   scanf_s("%d", &age);

		   if (age > 20 && age < 40)
		   {
			   printf("입장하세요.\n");
		   }

		   if (age < 20 || age > 40)
		   {
			   printf("입장할 수 없습니다.\n");
		   }

		   if (!(age > 20)) //특정조건이 ~~이 아니냐 라고 물어볼때 사용, 어떤 조건의 반대 상황을 물어봐야할 때 사용
		   {
			   printf("입장불가\n");
		   }*/

	/*int a;
	printf("input: ");
	scanf_s("%d", &a);

	a = a + 1;
	printf("1증가: %d\n", a);

	a++;
	printf("1증가: %d\n", a);*/

	//swap
	/*int red = 1, blue = 2;
	int yellow; //대입을 하면 기존에 가지고 있던 값이 없어짐 따라서, 가지고 있던 데이터를 가지고 있을 중간자 필요

	printf("red : %d, blue : %d\n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("red : %d, blue : %d\n", red, blue);*/

	/*int a, b;

	a = 19;
	b = a < 10 ? 1000 : (a < 20) ? 2000 : 3000;

	printf("%d", b);*/

	/*int score;
	char grade;

	printf("[학점계산기]\n\n");

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);

	grade = score >= 100 ? '?' :
		    score >= 90 && score <= 100 ? 'A' : 
		    score >= 80 && score < 90 ? 'B' :
		    score >= 70 && score < 80 ? 'C' :
		    score >= 60 && score < 70 ? 'D' : 'F';

	printf("\n학점 : %c\n", grade);*/

	//입력문자가 소문자일 경우, 대문자로 변환
	char ch;

	printf("input : ");
	scanf_s("%c", &ch, 1);

	//ch = ch >= 97 && ch <= 97 + 26 ? ch - 32 : ch;
	ch = ch >= 'a' && ch <= 'z' ? ch - 32 : ch;

	printf("\noutput : %c", ch);
}