#include <stdio.h>

void main()
{
	//예제8-1
	/*int num;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num >= 0)
		printf("양수입니다.\n");

	if (num < 0)
		printf("음수입니다\n");*/

	//예제8-2
	/*int num;
	printf("5의 배수 : ");
	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0)
			printf("%3d", num);
	}*/

	//예제8-3
	/*int age;

	printf("나이입력 : ");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100) printf("회원가입이 가능합니다.\n");

	else printf("회원가입이 불가능합니다.\n");*/

	//예제8-4
	/*int num;
	printf("숫자입력 ; ");
	scanf_s("%d", &num);

	if (num > 0) printf("0보다 큰 수가  num에 저장\n");
	else printf("0 또는 0보다 작은 수가 num에 저장\n");*/

	//예제8-5
	/*int num;
	
	printf("숫자입력 : ");
	scanf_s("%d", &num);

	if (num > 0) printf("0보다 큰 수가 num에 저장\n");
	else {
		if (num == 0)
			printf("0이 num에 저장\n");
		else printf("0보다 작은 수가 num에 저장\n");
	}*/

	//예제8-6
	/*int num;

	printf("숫자입력 : ");
	scanf_s("%d", &num);

	if (num > 0) printf("0보다 큰 수가 num에 저장");
	else if (num == 0) printf("0이 num에 저장");
	else printf("0보다 작은 수가 num에 저장");*/

	//예제8-7
	/*int num;

	printf("C 언어 성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 95) printf("A+\n");
	else 
	{
		if (num >= 90)printf("A\n");
		else 
		{
			if (num >= 85)printf("B+\n");
			else
			{
				if (num >= 80)printf("B\n");
				else printf("F\n");
			}
		}
	}*/

	//예제8-8
	/*int num;

	printf("C 언어 성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 95) printf("A+");
	else if (num >= 90) printf("A");
	else if (num >= 85) printf("B");
	else if (num >= 80) printf("B+");
	else printf("F");*/

	//예제8-9
	/*int num;
	printf("C 언어 성적 입력 ; ");
	scanf_s("%d", &num);

	if (num >= 95) printf("A+\n");
	if (num >= 90) printf("A");
	if (num >= 85) printf("B");
	if (num >= 80) printf("B+");
	else printf("F");*/

	//예제8-10
	/*int num;
	printf("몇 번 스위치를 누르시겠습니까? ");
	scanf_s("% d", &num);

	switch (num)
	{
		case 1 :
			printf("전등이 켜짐\n");
			break;

		case 2:
			printf("전등이 꺼짐\n");
			break;

		case 3:
			printf("전등이 고장\n");
			break;

		default :
			printf("스위치 오류 : 스위치는 1번부터 3번까지만 있습니다.\n");
	}*/

	//예제8-11
	/*char ch;

	printf("(T)husday, (F)riday, (S)aturday\n");
	printf("문자입력(T, F, S) : ");
	scanf_s("%c", &ch);

	switch (ch)
	{
		case 'T' :
		case 't' :
			printf("Thursday\n");
			break;

		case 'F':
		case 'f':
			printf("Friday\n");
			break;

		case 'S':
		case 's':
			printf("Saturday\n");
			break;

		default :
			printf("잘못 입력하셨습니다.\n");
	}*/

	//예제8-13
	/*int num;

	for (num = 0; num < 101; num++)
	{
		if (num % 2 == 1)
			continue;

		printf("%d\n", num);
	}*/

	//연습문제1
	/*int a, b;
	printf("두 정수를 입력하세요 : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a > b) printf("큰 수는 %d입니다.", a);
	else if (a < b) printf("큰 수는 %d입니다.", b);
	else printf("두 수는 같습니다.");*/

	//연습문제2
	/*int num, a, b, c;

	printf("3자리 십진수를 입력하세요 : ");
	scanf_s("%d", &num);
	
	a = num / 100;
	b = num % 100 / 10;
	c = num % 10;

	if (a % 2 == 0) printf("%d : 짝수 ", a);
	else printf("%d : 홀수 ", a);

	if (b % 2 == 0) printf("%d : 짝수 ", b);
	else printf("%d : 홀수 ", b);

	if (c % 2 == 0) printf("%d : 짝수 ", c);
	else printf("%d : 홀수 ", c);*/

	//연습문제3
	/*int score;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);
	
	if (score >= 90 && score < 100) printf("A");
	else if (score >= 80 && score < 90) printf("B");
	else printf("F");*/

	//연습문제4
	/*for (int odd = 1; odd <= 100; odd++)
	{
		if (odd % 2 == 0) continue;
		printf("%d ", odd);
	}*/

	//연습문제5
	/*int a, b, c;
	printf("input : ");
	scanf_s("%d", &a);
	printf("input : ");
	scanf_s("%d", &b);
	printf("input : ");
	scanf_s("%d", &c);

	if (a > b && a > c) printf("result : %d", a);
	else if (b>a && b>c) printf("result : %d", b);
	else printf("result : %d", c);*/


	//예제7-1
	/*int num = 0;
	while (num < 5)
	{
		printf("반복내용 : %d\n", num);
		num++;
	}
	printf("반복문을 종료한 후 : %d\n", num);*/

	//예제7-2
	/*int i = 1, sum = 0;
	while (i <= 10)
	{
		sum = sum + i;
		printf("i = %d, sum = %d\n", i, sum);
		i++;
	}
	printf("-------반복문 종료-------\n");*/

	//예제7-3
	/*int i = 0;
	while (1)
	{
		printf("반복횟수 : %d\n", i);
		i++;

		if (i > 10) break;
	}*/
	
	//예제7-4
	/*int i = 2;
	int j = 1;
	int result = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			result = i * j;
			printf("%d * %d = %d\n", i, j, result);
			j++;
		}		
		i++;
		j = 1;
		printf("----------\n");
	}*/

	//예제7-5
	/*int num = 0, j = 9, result = 0;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		while (j > 0)
		{
			result = num * j;
			printf("%d * %d = %d\n", num, j, result);
			j--;
		}
		num--;
		j = 9;
		printf("----------\n");
	}*/
	
	//예제7-6
	/*int num;
	for (num = 0; num < 5; num++)
	{
		printf("반복 내용 : %d\n", num);
	}
	printf("반복문을 종료한 후 : %d\n", num);*/

	//예제7-7
	/*int i, sum = 0;
	for (i = 0; i <= 10; i++)
	{
		sum = sum + i;
		printf("i = %d, sum = %d\n", i, sum);
	}
	printf("-------반복문 종료-------\n");*/

	//예제7-8
	/*int num = 0, i, result = 0;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i < 10; i = i + 2)
	{
		result = num * i;
		printf("%d * %d = %d입니다.\n", num, i, result);
	}*/

	//예제7-9
	/*int i;
	for (i = 0; 1; i++)
	{
		printf("반복횟수 : %d\n", i);
	}*/

	//예제7-10
	/*int i, j;
	int result = 0;

	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			result = i * j;
			printf("%d * %d = %d\n", i, j, result);
		}
		printf("----------\n");
	}*/

	//예제7-11
	/*int num, j = 9, result = 0;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	for (; num > 0; num--)
	{
		for (j = 9; j > 0; j--)
		{
			result = num * j;
			printf("%d * %d = %d\n", num, j, result);
		}
		printf("----------\n");
	}*/

	//예제7-12
	/*int i;
	int factorial = 1;

	for (i = 1; i <= 10; i++)
	{
		factorial = factorial * i;
	}
	printf("1부터 10까지의 곱 : %d\n", factorial);*/

	//예제7-13
	/*int i = 1, factorial = 1;
	for (; i <= 10; i++)
	{
		factorial = factorial * i;
	}
	printf("1부터 10까지의 곱 : %d\n", factorial);*/

	//예제7-16
	/*int num = 10;

	do
	{
		printf("%d", num);
		num++;
	} while (num < 10);
	printf("\n **while문을 종료합니다** \n");*/

	//연습문제1
	/*int n, m, result;

	printf("입력(양의 정수) : ");
	scanf_s("%d", &n);

	printf("7의 배수 : ");

	for (m = 1; n*m <= 100; m++)
	{
		
		printf("%d ", n*m);
	}

	printf("\n%d의 배수의 개수 : %d", n, m-1);*/

	//연습문제2
	/*int line, star;

	for (line = 1; line <= 5; line++)
	{
		for (star = 1; star <= line; star++)
		{
			printf("*");
		}
		printf("\n");
	}*/
		
	//연습문제3
	/*int line, space, star, num = 7;

	for (line = 1; line <= 4; line++)
	{
		for (space = 1; space < line; space++) printf(" ");

		for (star = 1; star <= num; star++)
		{
			printf("*");
		}

		num = num - 2;
		printf("\n");
	}*/
	
	//연습문제4
	/*int num1, num2 = 1;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num1);
	
	for (; num2 <= 9; num2++)
	{
		printf("%d * %d = %d입니다.\n", num1, num2, num1 * num2);
	}*/

	//연습문제5
	/*int factorial = 1, i, j;

	printf("팩토리얼 연산을 원하는 숫자를 입력하세요 : ");
	scanf_s("%d", &j);
	
	for (i = 1; i <= j; i++)
	{
		factorial = factorial * i;
	}

	printf("%d의 팩토리얼 연산결과는 %d입니다.", j, factorial);*/

	//연습문제6
	/*int fst, scd, re = 1;

	do
	{
	printf("첫 번째 수를 입력해 주세요 : ");
	scanf_s("%d", &fst);
	printf("두 번째 수를 입력해 주세요 : ");
	scanf_s("%d", &scd);
	printf("%d + %d = %d입니다.\n", fst, scd, fst + scd);
	} while (re = 1);*/
	
	//연습문제7
	/*int sbj, score, total = 0;

	printf("열 과목 점수의 평균을 계산합니다.\n");

	for (sbj = 1; sbj <= 10; sbj++)
	{
		printf("점수를 입력하세요 : ");
		scanf_s("%d", &score);
		total = total + score;
	}

	printf("열 과목 점수의 평균은 %.1lf입니다.", (double)total / 10);*/

	//연습문제8
	/*int input, total = 0, count = 0;
	do
	{
		printf("정수 입력 : ");
		scanf_s("%d", &input);
		total = total + input;
		count++;
	} while (input != 0);

	printf("덧셈결과 : %d\n", total);
	printf("입력횟수 : %d", count - 1);*/

	//문제1
	/*int input, re;
	printf("반복 횟수 입력 : ");
	scanf_s("%d", &input);

	for (re = 1; re <= input; re++)
	{
		printf("Hello World!\n");
	}*/

	//문제2
	/*int input, re = 1, val = 3;
	printf("입력 : ");
	scanf_s("%d", &input);

	while (re <= input)
	{
		printf("%d ", val);
		val = val + 3;
		re++;
	}*/

	//문제3
	/*int input, total = 0;

	do
	{
		printf("입력 : ");
		scanf_s("%d", &input);

		total = total + input;
	} while (input != 0);

	printf("%d", total);*/

	//문제4
	/*int mlt, n;
	printf("단수 입력 : ");
	scanf_s("%d", &mlt);

	for(n = 9 ; n >= 1; n--) printf("%d * %d = %d\n", mlt, n, mlt * n);*/
	
	//문제5
	/*int sn;

	for (sn = 1; sn <= 100; sn++)
	{
		if(sn % 7 !=0 && sn % 9 != 0)
		continue;

		printf("%d ", sn);
	}*/

	//문제6
	/*int num1, num2;
	printf("정수1 입력 : ");
	scanf_s("%d", &num1);
	printf("정수2 입력 : ");
	scanf_s("%d", &num2);

	if (num1 > num2) 
	{
		printf("두 수의 차 : %d", num1 - num2);
	}
	
	else
	{
		printf("두 수의 차 : %d", num2 - num1);
	}*/

	//문제7
	/*int num1, num2, answer;
	printf("정수1 입력 : ");
	scanf_s("%d", &num1);
	printf("정수2 입력 : ");
	scanf_s("%d", &num2);

	answer = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("%d", answer);*/

	//문제8
	/*int dan, mlt;
	for (dan = 1; dan <= 9; dan++)
	{
		if (dan % 2 != 0)
		continue;
			
		for (mlt = 1; mlt <= dan; mlt++) 
			{
				printf("%d * %d = %d\n", dan, mlt, dan * mlt);
			}
		printf("\n");
		
	}*/

	//문제9
	/*int input, many, ave = 0, num = 1;
	
	printf("몇 개의 정수를 입력하시겠습니까? ");
	scanf_s("%d", &many);
	
	while (num <= many)
	{
	printf("정수 입력 : ");
	scanf_s("%d", &input);
	ave = ave + input;
	num++;
	}

	printf("입력한 정수의 평균값 : %lf", (double)ave/(double)many);*/

	//문제10
	/*int a;
	printf("정수 a 입력 : ");
	scanf_s("%d", &a);
	if(a <= 0) printf("1이상의 수를 입력해주세요.");
	else
	{
		int b;
		printf("정수 b 입력 : ");
		scanf_s("%d", &b);
		if (b <= 0) printf("1이상의 수를 입력해주세요.");
		else
		{
			int c;
			printf("정수 c 입력 : ");
			scanf_s("%d", &c);
			if (c <= 0) printf("1이상의 수를 입력해주세요.");
			else
			{
				int d;
				printf("정수 d 입력 : ");
				scanf_s("%d", &d);
				if (d <= 0) printf("1이상의 수를 입력해주세요.");
				else
				{
					int e;
					printf("정수 e 입력 : ");
					scanf_s("%d", &e);

					printf("a + b + c + d + e = %d", a + b + c + d + e);
				}
			}
		}
	}*/

	//문제11
	/*int line, circle;

	for (line = 1; line <= 5; line++)
	{
		for (circle = 1; circle < line; circle++ )
		{
			printf("o");
		}
		printf("*\n");
	}*/
}