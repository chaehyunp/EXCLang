#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


void main()
{
	//����1
	/*int input[5];
	int max, min;
	int total = 0;

	printf("�����Է� : ");
	scanf_s("%d", &input[0]);
	max = min = input[0];

	for (int i = 1; i < 5; i++)
	{
		printf("�����Է� : ");
		scanf_s("%d", &input[i]);
		if (input[i] > max) max = input[i];
		if (input[i] < min) min = input[i];
		total = total + input[i];
	}
	printf("\n");
	printf("�Էµ� ���� �߿��� �ִ밪 : %d\n", max);
	printf("�Էµ� ���� �߿��� �ּҰ� : %d\n", min);
	printf("�Էµ� ������ ���� : %d", total);*/

	//����2
	/*char word[30];
	int i;

	printf("���ܾ� �Է� : ");
	for (i = 0; i < 30; i++)
	{
		scanf_s("%c", &word[i], 1);
		if (word[i] == 10) break;
	}
	printf("���ܾ� ���� : %d", i);*/

	//����3
	/*char word[30];
	int max;

	printf("���ܾ� �Է� : ");
	scanf_s("%c", &word[0], 1);
	max = (int)word[0];

	for (int i = 1; i < 30; i++)
	{
		scanf_s("%c", &word[i], 1);
		if ((int)word[i] > max) max = (int)word[i];
		if (word[i] == 10) break;
	}
	printf("�ƽ�Ű �ڵ� ���� ���� ū ���� : %c", (char)max);*/

	//����4
	/*char word[30];
	int i;

	printf("���ܾ� �Է�: ");

	for (i = 0; i < 30; i++)
	{
		scanf_s("%c", &word[i], 1);
		if (word[i] == 10) break;
	}

	printf("�Է��� ���ܾ� ���� : ");

	for (; i > 0; i--)
	{
		printf("%c", word[i - 1]);
	}*/

	//����5
	/*int stdt, sum = 0;
	int score[10];

	printf("�л��� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &stdt);
	printf("\n\n");

	for (int i = 0; i < stdt; i++)
	{
		printf("�л� %d�� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &score[i]);

		if (score[i] > 100 || score[i] < 0)
		{
			do
			{	printf("�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.\n");
				printf("�л� %d�� ������ �Է��ϼ��� : ", i + 1);
				scanf_s("%d", &score[i]);
			} while (score[i] > 100 || score[i] < 0);
		}
		sum = sum + score[i];
	}
	printf("\n\n���� ����� %.1lf �Դϴ�.", (double)sum / (double)stdt);*/

	//����6 
	/*int input[10];
	
	printf("1���� 100������ ���� 10���� �Է��ϼ���.\n");
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d��° ���� : ", i + 1);
		scanf_s("%d", &input[i]);
		if (input[i] < 0 || input[i]>100)
		{
			do 
			{
				printf("�ٽ� �Է��ϼ���.\n");
				printf("%d��° ���� : ", i + 1);
				scanf_s("%d", &input[i]);
			}
			while (input[i] < 0 || input[i]>100);
		}
	}*/


	

	//����7
	/*int seats[10] = {0,0,0,0,0,1,1,1,0,1};
	int answer, seatNum;

	printf("�¼��� �����Ͻðڽ��ϱ�?(1(YES) �Ǵ� 0(NO) �Է�) ");
	scanf_s("%d", &answer);
	printf("\n");

	if (answer == 1)
	{
		printf("���� ���� ���´� ������ �����ϴ�.\n");
		printf("------------------------------------------\n");
		printf("�¼� ��ȣ : ");
		for (int i = 1; i <= 10; i++) printf("%2d ", i);
		printf("\n");
		printf("------------------------------------------\n");
		printf("���� ���� : ");

		for (int j = 0; j < 10; j++)
		{
			printf("%2d ", seats[j]);
		}
		printf("\n\n");

		printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? ");
		scanf_s("%d", &seatNum);

		if (seats[seatNum - 1] == 1)
		{
			do
			{
				printf("�˼��մϴ�. �̹� ����� �¼��Դϴ�. �ٸ� �¼��� ������ �ּ���.\n\n");
				printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? ");
				scanf_s("%d", &seatNum);
			} while (seats[seatNum - 1] == 1);
		}
		printf("%d�� �¼��� ����Ǿ����ϴ�.", seatNum);
	}
	else
	{
		printf("�¼� ���� �ý����� �����մϴ�.\n");
		return;
	}

	printf("�¼� ���� �ý����� �����մϴ�.\n");*/

	//����8
	/*int arr1[5] = { 10,20,30,40,50 };
	int arr2[5] = { 1,2,3,4,5 };
	int arr3[5];

	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[4 - i];
		printf("arr1[%d] + arr2[%d] = arr3[%d], ", i, 4 - i, i);
		printf("%d + %d = %d\n", arr1[i], arr2[4 - i], arr3[i]);
	}*/

	//����9
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

	//����10
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

	//����11
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

