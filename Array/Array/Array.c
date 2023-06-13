#include <stdio.h>

void main()
{
	/*int a, b, c;
	a = 10;
	b = 20;
	c = 30;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

	int aaa[3];
	aaa[0] = 10;
	aaa[1] = 20;
	aaa[2] = 30;

	printf("%d\n", aaa[0]);
	printf("%d\n", aaa[1]);
	printf("%d\n", aaa[2]);
	//대괄호 안 숫자만 바뀌고 계속 반복
	//19,20,21 반복문으로 작성
	for (int i = 0; i < 3; i++) printf("%d\n", aaa[i]);*/

	/*int aaa[3];
	double bbb[3];

	bbb[0] = 3.14;
	bbb[1] = 5.55;
	bbb[2] = 1.45;

	printf("%lf\n", bbb[0]);
	printf("%lf\n", bbb[1]);
	printf("%lf\n", bbb[2]);

	char ccc[3];

	ccc[0] = 'a';
	ccc[1] = 'b';
	ccc[2] = 'c';

	printf("%c\n", ccc[0]);
	printf("%c\n", ccc[1]);
	printf("%c\n", ccc[2]);

	for (int i = 0; i < 3; i++)
	{
		printf("%c\n", ccc[i]);
	}*/

	/*int a, b, c;

	printf("%p\n", &a); //& 주소연산자
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("\n");

	int aaa[3];
	printf("%p\n", &aaa[0]);
	printf("%p\n", &aaa[1]);
	printf("%p\n", &aaa[2]);*/

	/*int aaa[3] = {10, 20, 30}; //배열의 초기화
	double bbb[3] = { 3.14, 5.55, 2.45 };
	char ccc[5] = { 'h','e','l','l','o' };

	int ddd[5] = { 0 };//초기화할 값이 더 많으면 ERROR, 적으면 나머지를 해당 자료형 0에 해당하는 값으로 채움
	printf("%d\n", ddd[0]);
	printf("%d\n", ddd[1]);
	printf("%d\n", ddd[2]);
	printf("%d\n", ddd[3]);
	printf("%d\n", ddd[4]);

	double eee[3] = { 3.14 };
	printf("%lf\n", eee[0]);
	printf("%lf\n", eee[1]);
	printf("%lf\n", eee[2]);

	char fff[3] = { 'G' };
	printf("%c\n", fff[0]);
	printf("%c\n", fff[1]);//아스키코드 0번  = 아무것도 표시 안되는 것 (띄어쓰기, 공백도 아님)
	printf("%c\n", fff[2]);*/

	//배열간에 대입
	/*int a = 10;
	int b = a;

	int aaa[3] = { 10,20,30 };
	int bbb[3];
	bbb[0] = aaa[2]; //한 번에 대입안됨, 개별적으로 사용
	bbb[1] = aaa[1];
	bbb[2] = aaa[0];

	for (int i = 0; i < 3; i++)
	{
		bbb[i] = aaa[2 - i];
	}*/

	//배열간에 연산
	/*int a = 10;
	int b = 20;
	int c = a + b;

	int aaa[3] = { 10,20,30 };
	int bbb[3] = { 4,5,6 };
	int ccc[3];

	for (int i = 0; i < 3; i++)
	{
		ccc[i] = aaa[i] + bbb[i];
	}*/
 
	//배열요소의 값을 키보드 입력받기
	/*t a;
	//scanf_s("%d", &a);

	int aaa[3];
	
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &aaa[i]);
	}

	char ccc[3]; //[x] x는 배열 갯수, c언어는 상수만 가능(변수 불가)
	scanf_s("%c", &ccc[0], 1); //[y] y는 인덱스 번호(배열의 요소로 사용, 변수 사용 가능)
	scanf_s("%c", &ccc[1], 1); //%c는 엔터도 아스키번호"10"으로 인식
	scanf_s("%c", &ccc[2], 1);*/

	//배열요소의 모든 값들을 덧셈해보기
	/*int total = 0;
	int scores[10] = { 70,40,80,60,90,40,50,60,70,100 };
	for (int i = 0; i < 10; i++)
	{
		total += scores[i]; //total = total + scores[i];
	}

	printf("총점 : %d\n", total);
	printf("평균 : %.2lf\n", (double)total / (double)10);*/

	//배열요소중 최대값 구해보기
	/*int scores[10] = {70,40,86,62,93,40,99,50,60,70};
	int max = scores[0];

	for (int i = 1; i < 10; i++)
	{
		if (scores[i] > max) max = scores[i]; //만약 값이 max보다 크면 맥스가 그 값이 됨
	}
	printf("최대값 : %d\n", max);*/

	//문자열 저장
	//char aaa[5] = { 'H','E','L','L','O' };
	//char aaa[6] = "HELLO";//값이 넘어가도 실행은 됨
	//문자열 끝에 문자열 끝문자(NULL문자) 필요
	//쓰려는 문자 갯수보다 +1해야 온전히 출력됨

	//printf("%s\n", aaa);
	//printf("%s\n", "HELLO");//문자열 상수

	/*char aaa[6];

	aaa[0] = 'H';
	aaa[1] = 'e';
	//aaa[2] = '0'; 아스키번호 0
	//aaa[2] = '\0'; 0과 구분하기위해 사용가능하나 지저분
	aaa[2] = NULL; //문자의 끝문자, 자리가 남았지만 끝남*/

	/*char aaa[6];

	scanf_s("%c", &aaa[0], 1);
	scanf_s("%c", &aaa[1], 1);
	scanf_s("%c", &aaa[2], 1);
	scanf_s("%c", &aaa[3], 1);
	scanf_s("%c", &aaa[4], 1);
	scanf_s("%c", &aaa[5], 1);

	aaa[5] = NULL; //엔터(아스키번호 10)를 null로 바꿈
	//이렇게 쓰면 사용자는 무조건 5글자만 입력해야함*/
	
/*char aaa[20];

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%c", &aaa[i], 1);
		if (aaa[i == 10])
		{
			aaa[i] = NULL;
			break; // 입력된 값이 아스키번호 10인 엔터를 입력받으면 멈춰라
		}
	}
	aaa[19] = NULL; //쓰레기값 나오지 않게, 19글자 이후로 잘림

	printf("%s\n", aaa);*/

	//%s로 입력받기
	/*char aaa[20];

	scanf_s("%s", &aaa[0], 20);
	printf("%s\n", aaa);*/

	//이름과 나이입력받기
	/*char name[20];
	int age;

	printf("이름 : ");
	scanf_s("%s", name, 20); //&name[0] == name 배열의 시작주소는 배열의 이름과 같다

	printf("나이 : ");
	scanf_s("%d", &age);

	printf("%s - %d\n", name, age);*/

	//다차원 배열
	/*int arr[5] = { 10, 20, 30, 40, 50 };

	int aaa[3][5] = { 
		{10,20,30,40,50},//중괄호 생략 가능하지만 가시성을 위해 써주자
		{100,200,300,400,500},
		{1000,2000,3000,4000,5000}
	};

	//aaa[1][6] = 8; 
	//실제로 배열은 층이 아님, 메모리적으로는 옆에 있음
	//6번방이 없다고 값이 안들어가는 것이 아니라 aaa[2][1]로 들어감

	for (int i = 0; i < 3; i++)//구구단 반복문과 같은 원리
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%4d   ", aaa[i][j]);
		}
		printf("\n");
	}*/

	/*int aaa[3][5];
	int total = 0;
	int sum[3] = {0,0,0};

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("input : ");
			scanf_s("%d", &aaa[i][k]);
			total += aaa[i][k];
			sum[i] += aaa[i][k]; //sum[1]에 첫 번째 루프 총값, sum[2]에 두 번째, sum[3]에 세 번째
		}
		printf("\n");
	}
	printf("1반 총점 : %d\n", sum[0]);
	printf("2반 총점 : %d\n", sum[0]);
	printf("3반 총점 : %d\n", sum[0]);
	printf("\n총점 : %d\n", total);*/

	//3차원
	/*int tri[4][3][5];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				printf("%d  ", tri[i][j][k]);
			}
		}
	}*/

	int aaa[] = {10,20,30,40};
	int bbb[][3] = {
		{10,20,30},
		{40,50,60}
	};
	//만약 배열을 만들면서 초기화까지 했다면 대괄호 안 생략가능
	//초기화하는 갯수를 보면 알 수 있기때문
	//단 2차원부터는 맨 앞만 생략 가능
	//메모리적으로 값이 옆에 있기때문에 몇 개를 묶는지 모르면 계산이 안됨
}