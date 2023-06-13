#include <stdio.h>

void main()
{
	//예제1-1
	/*int student[5] = {90,80,70};

	printf("첫 번째 학생의 점수 : %d\n", student[0]);
	printf("두 번째 학생의 점수 : %d\n", student[1]);
	printf("세 번째 학생의 점수 : %d\n", student[2]);
	printf("네 번째 학생의 점수 : %d\n", student[3]);
	printf("다섯 번째 학생의 점수 : %d\n", student[4]);*/

	//예제1-2
	/*int array1[5] = { 90,80,70,60,50 };
	int array2[] = { 90,80,70,60,50 };
	int array3[5] = { 90,80,70 };

	printf("%d %d %d %d %d\n", array1[0], array1[1], array1[2], array1[3], array1[4]);
	printf("%d %d %d %d %d\n", array2[0], array2[1], array2[2], array2[3], array2[4]);
	printf("%d %d %d %d %d\n", array3[0], array3[1], array3[2], array3[3], array3[4]);*/

	//예제1-3
	/*int array[3] = { 87,99,80 };
	int total = 0;

	total = array[0] + array[1] + array[2];
	printf("총점은 %d이고 ", total);
	printf("평균은 %.2lf입니다.\n", (double)total / 3);*/

	//예제1-4
	/*int array[3] = { 87,65,78 };
	int i, total = 0;

	for (i = 0; i < 3; i++)
	{
		total = total + array[i];
		printf("배열의 요소 array[%d]의 값 : %d\n", i, array[i]);
	}
	printf("총점은 %d이고 ", total);
	printf("평균은 %.2lf입니다.\n", (double)total / 3);*/

	//예제1-5
	/*int array1[3] = { 1, 2, 3 };
	char array2[3] = { 'A','B','C' };

	printf("%p %p %p\n", &array1[0], &array1[1], &array1[2]);
	printf("%p %p %p\n", &array2[0], &array2[1], &array2[2]);*/

	//연습문제2
	/*int score[10];
	int total = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("score %d : ", i + 1);
		scanf_s("%d", &score[i]);
		total += score[i];
	}
	printf("total : %d\n", total);
	printf("average : %.1lf\n", (double)total / (double)10);*/

	//연습문제5
	/*double aaa[5] = {2.2, 3.5, 2.5, 10.1, 4.0};
	double bbb[5] = {3.3, 2.0, 4.0, 1.0, 2.5};

	for (int i = 0; i < 5; i++)
	{
		printf("%lf\n", aaa[i] * bbb[i]);
	}*/

	//예제2-1
	/*int array[4][3];

	array[0][0] = 1; array[0][1] = 2; array[0][2] = 3;
	array[1][0] = 4; array[1][1] = 5; array[1][2] = 6;
	array[2][0] = 7; array[2][1] = 8; array[2][2] = 9;
	array[3][0] = 10; array[3][1] = 11; array[3][2] = 12;

	printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);
	printf("%d %d %d \n", array[2][0], array[2][1], array[2][2]);
	printf("%d %d %d \n", array[3][0], array[3][1], array[3][2]);*/

	//예제2-3
	/*int array1[4][3] = { {1,2},{3},{4},{5} };
	int array2[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10} };

	printf("%d %d %d \n", array1[0][0], array1[0][1], array1[0][2]);
	printf("%d %d %d \n", array1[1][0], array1[1][1], array1[1][2]);
	printf("%d %d %d \n", array1[2][0], array1[2][1], array1[2][2]);
	printf("%d %d %d \n", array1[3][0], array1[3][1], array1[3][2]);
	printf("---------------------------\n");

	printf("%d %d %d \n", array2[0][0], array2[0][1], array2[0][2]);
	printf("%d %d %d \n", array2[1][0], array2[1][1], array2[1][2]);
	printf("%d %d %d \n", array2[2][0], array2[2][1], array2[2][2]);
	printf("%d %d %d \n", array2[3][0], array2[3][1], array2[3][2]);
	printf("---------------------------\n");*/

	//예제2-4
	/*int array[2][2];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("정수를 입력하세요 : ");
			scanf_s("%d", &array[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%3d ", array[i][j]);;
		}
		printf("\n");
	}*/

	//예제2-5
	/*int i, j, k;
	int array[3][3][3] = {
		{1,2,3,4,5,6,7,8,9},
		{11,12,13,14,15,16,17,18},
		{19,20,21,22,23,24,25,26,27}
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				printf("%d ", array[i][j][k]);
			}
			printf("\n");
		}
		printf("------------------\n");
	}*/
	
	//연습문제1
	/*int array1[2][4] = { {1,2,3,4},{5,6,7,8} };
	int array2[4][2];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j >= 0; j--)
		{
			array2[i][j] = array1[j][i];
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}*/

	//연습문제2
	/*int apt[3][3];
	int total = 0;

	for (int floor = 0; floor < 3; floor++)
	{
		for (int door = 0; door < 3; door++)
		{
			printf("%d층 %d호의 가족은 몇 명입니까? ", floor+1, door+1);
			scanf_s("%d", &apt[floor][door]);
			total += apt[floor][door];
		}
	}
	printf("아파트 총 주민수는 %d명입니다.", total);*/

	//연습문제4
	/*int pnm[2][4][3] = {
		{23,75,85,12,77,51,25,66,30,19,90,88},
		{11,15,47,74,85,69,57,86,28,90,22,33}
	};
	int value[2][4][3];
	

	for (int j = 0; j < 4; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			value[0][j][k] = pnm[0][j][k] + pnm[1][j][k];
			printf("%3d ", value[0][j][k]);
		}
		printf("\n");
	}
	
	printf("\n");

	for (int j = 0; j < 4; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			value[1][j][k] = pnm[0][j][k] - pnm[1][j][k];
			printf("%3d ", value[1][j][k]);
		}
		printf("\n");
	}*/
}