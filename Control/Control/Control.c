#include <stdio.h>

void main()
{
	/*int age;

	printf("환영합니다.\n");
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	printf("\n");

	if (age >= 20 && age <35)
	{
		//조건이 TRUE일때 실행할 영역
		printf("입장 가능합니다.\n");
		printf("\n");

		int people;
		printf("몇 명입니까? ");
		scanf_s("%d", &people);

		//중첩 if문 (else 영역에서도 가능)
		if( people >= 1 && people < 5 )
		{ 
			printf("\n%d인석으로 자리 안내합니다.\n", people);
		}

		else
		{
			printf("\n단체석은 직원이 안내해드립니다. 직원을 호출합니다.\n");
		}
			
	}

	else
	{
		//조건이 FALSE일때 실행할 영역
		printf("입장 불가합니다.\n");
	}*/

	/*int score;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);
	printf("\n");

	if (score >= 90 && score <= 100) printf("A");
	else if (score >= 80 && score < 90) printf("B");
	else if (score >= 70 && score < 80) printf("C");
	else if (score >= 70 && score < 80) printf("D");
	else if (score >= 0 && score < 70) printf("F");
	else printf("점수를 잘못 입력하셨습니다.");

	printf("\n");*/

	/*printf("고양이 키우기 게임\n\n");

	printf("메뉴\n");
	printf("1. 밥주기\n");
	printf("2. 놀아주기\n");
	printf("3. 빗질하기\n");

	printf("\n메뉴번호 입력 : ");

	int menu;

	scanf_s("%d", &menu);
	printf("\n");

	switch(menu)
	{
		case 1 :
			printf("고양이에게 밥을 주었습니다! (배고픔 -5)\n");
			break;

		case 2 :
			printf("고양이와 놀아주었습니다! (심심함 -5)\n");
			break;

		case 3 :
			printf("고양이에게 빗질을 해주었습니다! (애정도 +5)\n");
			break;

		default :
			printf("잘못된 메뉴 번호입니다.\n");
	}*/

	/*char class;

	printf("학점입력 : ");
	scanf_s("%c", &class, 1);

	switch (class)
	{
	case 'A' :
	case 'a' :
		printf("90~100");
		break;

	case 'B' :
	case 'b':
		printf("80~90");
		break;

	case 'C' :
	case 'c':
		printf("70~80");
		break;

	case 'D':
	case 'd':
		printf("60~70");
		break;

	case 'F':
	case 'f':
		printf("70점 미만");
		break;

	default :
		printf("잘못 입력했습니다. 다시 입력하세요.");
	}*/

	/*int level = 1; //제어변수의 초기값

	printf("현재 Lv%d\n\n", level); //제어조건

	while (level < 10)
	{
		printf("훈련.. 레벨 +1\n,현재 Lv%d\n\n", level+1);
		level++; //제어변수연산
	}

	//제어변수의 초기값, 제어조건, 제어변수연산에 따라 반복횟수에 영향*/


	/*int i = 0;
	while (i < 3)
	{
		printf("Hello %d\n", i+1);
		i++;
	}

	printf("\nBye\n");*/


	/*int mlt = 1;
	int num;

	printf("단 : ");
	scanf_s("%d", &num);

	while (mlt <= 9)
	{
		
		printf(" %d * %d = %d\n", num, mlt, num * mlt);
		mlt++;
	}*/

	/*int re = 0;
	int n;

	printf("반복할 횟수 : ");
	scanf_s("%d", &n);

	while (re < n)
	{
		int input;
		printf("input : ");
		scanf_s("%d", &input);
		if (input % 2 == 0) printf("짝수\n"); //짝수표현
		else printf("홀수\n");

		re++; //n--도 가능(re가 0이기 때문에 0이 될 때까지 반복)
	}*/

	/*int i = 0;
	int n;
	int total = 0;

	while (i < 3) 
	{

		printf("input : ");
		scanf_s("%d", &n);
		
		total = total + n; 
		//변수 n은 반복하면서 기존의 값을 잃어버림
		//입력받은 값을 모두 덧셈할때, 값을 따로 저장하여 덧셈하지않고 total이라는 변수로 값을 누적
		
		i++;
	}

	printf("\ntotal : %d\n", total); */

	/*//중첩반복문(구구단 1단~9단)
	int i = 2;

	while (i <= 9)
	{
	
		int k = 1;
		while (k <= 9)
		{
			printf("%d * %d = %d\n", i, k, i * k);
			k++;
		}

		printf("\n");

		i++; //i+=2 (2단만 출력)
	}*/
	
	//for문 : for ( 제어변수초기화 ; 제어조건 ; 제어변수연산 )
	/*for (int i = 0; i < 3; i++) //변수 i는 for문 안에서만 사용가능
	{
		printf("Hello\n");
	}
	int j = 0; 
	//for문 바깥에서도 사용하고 싶다면 변수를 바깥에 빼서 사용가능 
	//단, 세미콜론은 남겨두어야함 연산도 마찬가지

	for ( ; j < 3; )
	{
		printf("Hello\n");

		j++;
	}*/

	/*int dan;
	printf("단수입력 : ");
	scanf_s("%d", &dan);

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}*/

	/*for (int i = 2; i <= 9; i++)
	{	
		printf("%d단\n", i);
		for (int k = 1; k <= 9; k++)
		{
			printf("%d * %d = %d\n", i, k, i * k);
		}
		printf("\n");
	}*/

	//do-while 실행문
	/*int a = 15;
	while (a > 10) //반복문의 조건이 거짓이면 한 번도 실행되지 않음
	{
		printf("aa\n");
		a--;
	}

	int b = 5;
	do //반복문의 조건이 거짓이어도 한 번은 실행
	{
		printf("bb\n");
		b--;
	} while (b > 10);*/

	/*int dan; 
	printf("단수입력 : ");
	scanf_s("%d", &dan);

	while(dan < 2 || dan < 9)
	{
		printf("다시입력 : ");
		scanf_s("%d", &dan);
	} //중복으로 입력*/

	//do-while로 바꾸면
	/*int dan;
	
	do
	{
		printf("입력 : ");
		scanf_s("%d", &dan);
	} while (dan < 2 || dan < 9);


	for(int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * 1);
	}*/

	//break는 반복문과 switch를 멈출때 사용
	//i가 5까지 찍고 멈춤
	/*for (int i = 0; i < 10; i++)
	{
		printf("Hello\n");
		
		if (i==5) break; 
	}*/

	//i가 4까지 찍고 멈춤
	/*for (int i = 0; i < 10; i++)
	{
		
		if (i == 5) break;
		
		printf("Hello\n");
	}*/

	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5) continue; 
		//만나면 아래로 내려가지 않고 만난 기점에서 다시 올라감 (그 회차만 끝)
		//이 코드에서는 5만 출력되지 않을 것임 (i의 값이 5일때, 아래로 내려가서 printf가 실행되지 않았기 때문)

		printf("%d\n", i);
	}*/

	/*for (int i = 0; i < 5; i++)
	{
		for(int k = 0; k < 10; k++)
		{
			if (k == 5) break;
			printf("%d - %d\n", i, k);
		}
		printf("\n");
	}*/

	//0을 입력할때까지 반복 (무한반복문)
	/*int num;

	while (1) //True
	{
		printf("입력 : ");
		scanf_s("%d", &num);
	
		if (num == 0)
		{
			printf("입력종료");
			break;
		}
	}*/

	//continue를 이용하여 짝수단만 출력하기
	/*for (int dan = 2; dan < 10; dan++)
	{
		if (dan % 2 == 1) continue;

		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}*/

	/*printf("\n프로그램을 종료합니다.\n");*/
}