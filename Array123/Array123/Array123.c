#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void main()
{
	//문제1
	/*int input[5];
	int max, min;
	int total = 0;

	printf("정수입력 : ");
	scanf_s("%d", &input[0]);
	max = min = input[0];

	for (int i = 1; i < 5; i++)
	{
		printf("정수입력 : ");
		scanf_s("%d", &input[i]);
		if (input[i] > max) max = input[i];
		if (input[i] < min) min = input[i];
		total = total + input[i];
	}
	printf("\n");
	printf("입력된 정수 중에서 최대값 : %d\n", max);
	printf("입력된 정수 중에서 최소값 : %d\n", min);
	printf("입력된 정수의 총합 : %d", total);*/

	//문제2
	/*char word[30];
	int i;

	printf("영단어 입력 : ");
	for (i = 0; i < 30; i++)
	{
		scanf_s("%c", &word[i], 1);
		if (word[i] == 10) break;
	}
	printf("영단어 길이 : %d", i);*/

	//문제3
	/*char word[30];
	int max;

	printf("영단어 입력 : ");
	scanf_s("%c", &word[0], 1);
	max = (int)word[0];

	for (int i = 1; i < 30; i++)
	{
		scanf_s("%c", &word[i], 1);
		if ((int)word[i] > max) max = (int)word[i];
		if (word[i] == 10) break;
	}
	printf("아스키 코드 값이 가장 큰 문자 : %c", (char)max);*/

	//문제4
	/*char word[30];
	int i;

	printf("영단어 입력: ");

	for (i = 0; i < 30; i++)
	{
		scanf_s("%c", &word[i], 1);
		if (word[i] == 10) break;
	}

	printf("입력한 영단어 역순 : ");

	for (; i > 0; i--)
	{
		printf("%c", word[i - 1]);
	}*/

	//문제5
	/*int stdt, sum = 0;
	int score[10];

	printf("학생의 수를 입력하시오 : ");
	scanf_s("%d", &stdt);
	printf("\n\n");

	for (int i = 0; i < stdt; i++)
	{
		printf("학생 %d의 성적을 입력하세요 : ", i + 1);
		scanf_s("%d", &score[i]);

		if (score[i] > 100 || score[i] < 0)
		{
			do
			{	printf("잘못된 성적입니다. 다시 입력하세요.\n");
				printf("학생 %d의 성적을 입력하세요 : ", i + 1);
				scanf_s("%d", &score[i]);
			} while (score[i] > 100 || score[i] < 0);
		}
		sum = sum + score[i];
	}
	printf("\n\n성적 평균은 %.1lf 입니다.", (double)sum / (double)stdt);*/

	//문제6 
	/*int input[10];
	
	printf("1부터 100이하의 정수 10개를 입력하세요.\n");
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 정수 : ", i + 1);
		scanf_s("%d", &input[i]);
		if (input[i] < 0 || input[i]>100)
		{
			do 
			{
				printf("다시 입력하세요.\n");
				printf("%d번째 정수 : ", i + 1);
				scanf_s("%d", &input[i]);
			}
			while (input[i] < 0 || input[i]>100);
		}
	}*/


	

	//문제7
	/*int seats[10] = {0,0,0,0,0,1,1,1,0,1};
	int answer, seatNum;

	printf("좌석을 예약하시겠습니까?(1(YES) 또는 0(NO) 입력) ");
	scanf_s("%d", &answer);
	printf("\n");

	if (answer == 1)
	{
		printf("현재 예약 상태는 다음과 같습니다.\n");
		printf("------------------------------------------\n");
		printf("좌석 번호 : ");
		for (int i = 1; i <= 10; i++) printf("%2d ", i);
		printf("\n");
		printf("------------------------------------------\n");
		printf("예약 상태 : ");

		for (int j = 0; j < 10; j++)
		{
			printf("%2d ", seats[j]);
		}
		printf("\n\n");

		printf("몇 번째 좌석을 예약하시겠습니까? ");
		scanf_s("%d", &seatNum);

		if (seats[seatNum - 1] == 1)
		{
			do
			{
				printf("죄송합니다. 이미 예약된 좌석입니다. 다른 좌석을 선택해 주세요.\n\n");
				printf("몇 번째 좌석을 예약하시겠습니까? ");
				scanf_s("%d", &seatNum);
			} while (seats[seatNum - 1] == 1);
		}
		printf("%d번 좌석이 예약되었습니다.", seatNum);
	}
	else
	{
		printf("좌석 예약 시스템을 종료합니다.\n");
		return;
	}

	printf("좌석 예약 시스템을 종료합니다.\n");*/

	//문제8
	/*int arr1[5] = { 10,20,30,40,50 };
	int arr2[5] = { 1,2,3,4,5 };
	int arr3[5];

	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[4 - i];
		printf("arr1[%d] + arr2[%d] = arr3[%d], ", i, 4 - i, i);
		printf("%d + %d = %d\n", arr1[i], arr2[4 - i], arr3[i]);
	}*/

	//문제9
	/*srand((unsigned)time(NULL));
	int random[25];

	for (int i = 0; i < 25; i++)
	{
		random[i] = rand() % 25 + 1;

		for (int j = 0; j < i; j++)
		{
			if (random[i] == random[j])i--;
		}
	}
	printf("Random array (1~25)\n");

	for (int i = 0; i < 5; i++) printf("%5d ", random[i]);
	printf("\n");

	for (int i = 5; i < 10; i++) printf("%5d ", random[i]);
	printf("\n");

	for (int i = 10; i < 15; i++) printf("%5d ", random[i]);
	printf("\n");

	for (int i = 15; i < 20; i++) printf("%5d ", random[i]);
	printf("\n");

	for (int i = 20; i < 25; i++) printf("%5d ", random[i]);
	printf("\n");*/

	//문제10
	/*srand((unsigned)time(NULL));

	int ary[5][5];
	int x, y, i;

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			ary[x][y] = rand() % 25 + 1;

			for (i = 0; i < y; y++)
			{
				if (ary[x][y] == ary[x][i])i--;
			}
		}
	}
	printf("Random array (1~25)\n");
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++) printf("%2d ", ary[x][y]);
	}*/

	//문제11
	int i = 0, j = 0;
	int buf[5][5] = { 0 };
	int value = 1;

	while (value <= 25)
	{

		while (i = 5 && buf[i + 1][j] == 0)
		{
			buf[i][j] = value;
			value++;
			i++;
		}

		while (j = 5 && buf[i][j + 1] == 0)
		{
			buf[i][j] = value;
			value++;
			j++;
		}

		while (i = 0 && buf[i - 1][j] == 0)
		{
			buf[i][j] = value;
			value++;
			i--;
		}

		while (j = 0 && buf[i][j - 1] == 0)
		{
			buf[i][j] = value;
			j--;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", buf[i][j]);
		}
		printf("\n");
	}
	

}

