#include <stdio.h>

void main()
{
	//����8-1
	/*int num;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num >= 0)
		printf("����Դϴ�.\n");

	if (num < 0)
		printf("�����Դϴ�\n");*/

	//����8-2
	/*int num;
	printf("5�� ��� : ");
	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0)
			printf("%3d", num);
	}*/

	//����8-3
	/*int age;

	printf("�����Է� : ");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100) printf("ȸ�������� �����մϴ�.\n");

	else printf("ȸ�������� �Ұ����մϴ�.\n");*/

	//����8-4
	/*int num;
	printf("�����Է� ; ");
	scanf_s("%d", &num);

	if (num > 0) printf("0���� ū ����  num�� ����\n");
	else printf("0 �Ǵ� 0���� ���� ���� num�� ����\n");*/

	//����8-5
	/*int num;
	
	printf("�����Է� : ");
	scanf_s("%d", &num);

	if (num > 0) printf("0���� ū ���� num�� ����\n");
	else {
		if (num == 0)
			printf("0�� num�� ����\n");
		else printf("0���� ���� ���� num�� ����\n");
	}*/

	//����8-6
	/*int num;

	printf("�����Է� : ");
	scanf_s("%d", &num);

	if (num > 0) printf("0���� ū ���� num�� ����");
	else if (num == 0) printf("0�� num�� ����");
	else printf("0���� ���� ���� num�� ����");*/

	//����8-7
	/*int num;

	printf("C ��� ���� �Է� : ");
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

	//����8-8
	/*int num;

	printf("C ��� ���� �Է� : ");
	scanf_s("%d", &num);

	if (num >= 95) printf("A+");
	else if (num >= 90) printf("A");
	else if (num >= 85) printf("B");
	else if (num >= 80) printf("B+");
	else printf("F");*/

	//����8-9
	/*int num;
	printf("C ��� ���� �Է� ; ");
	scanf_s("%d", &num);

	if (num >= 95) printf("A+\n");
	if (num >= 90) printf("A");
	if (num >= 85) printf("B");
	if (num >= 80) printf("B+");
	else printf("F");*/

	//����8-10
	/*int num;
	printf("�� �� ����ġ�� �����ðڽ��ϱ�? ");
	scanf_s("% d", &num);

	switch (num)
	{
		case 1 :
			printf("������ ����\n");
			break;

		case 2:
			printf("������ ����\n");
			break;

		case 3:
			printf("������ ����\n");
			break;

		default :
			printf("����ġ ���� : ����ġ�� 1������ 3�������� �ֽ��ϴ�.\n");
	}*/

	//����8-11
	/*char ch;

	printf("(T)husday, (F)riday, (S)aturday\n");
	printf("�����Է�(T, F, S) : ");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}*/

	//����8-13
	/*int num;

	for (num = 0; num < 101; num++)
	{
		if (num % 2 == 1)
			continue;

		printf("%d\n", num);
	}*/

	//��������1
	/*int a, b;
	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a > b) printf("ū ���� %d�Դϴ�.", a);
	else if (a < b) printf("ū ���� %d�Դϴ�.", b);
	else printf("�� ���� �����ϴ�.");*/

	//��������2
	/*int num, a, b, c;

	printf("3�ڸ� �������� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	
	a = num / 100;
	b = num % 100 / 10;
	c = num % 10;

	if (a % 2 == 0) printf("%d : ¦�� ", a);
	else printf("%d : Ȧ�� ", a);

	if (b % 2 == 0) printf("%d : ¦�� ", b);
	else printf("%d : Ȧ�� ", b);

	if (c % 2 == 0) printf("%d : ¦�� ", c);
	else printf("%d : Ȧ�� ", c);*/

	//��������3
	/*int score;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);
	
	if (score >= 90 && score < 100) printf("A");
	else if (score >= 80 && score < 90) printf("B");
	else printf("F");*/

	//��������4
	/*for (int odd = 1; odd <= 100; odd++)
	{
		if (odd % 2 == 0) continue;
		printf("%d ", odd);
	}*/

	//��������5
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


	//����7-1
	/*int num = 0;
	while (num < 5)
	{
		printf("�ݺ����� : %d\n", num);
		num++;
	}
	printf("�ݺ����� ������ �� : %d\n", num);*/

	//����7-2
	/*int i = 1, sum = 0;
	while (i <= 10)
	{
		sum = sum + i;
		printf("i = %d, sum = %d\n", i, sum);
		i++;
	}
	printf("-------�ݺ��� ����-------\n");*/

	//����7-3
	/*int i = 0;
	while (1)
	{
		printf("�ݺ�Ƚ�� : %d\n", i);
		i++;

		if (i > 10) break;
	}*/
	
	//����7-4
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

	//����7-5
	/*int num = 0, j = 9, result = 0;
	printf("���ڸ� �Է��ϼ��� : ");
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
	
	//����7-6
	/*int num;
	for (num = 0; num < 5; num++)
	{
		printf("�ݺ� ���� : %d\n", num);
	}
	printf("�ݺ����� ������ �� : %d\n", num);*/

	//����7-7
	/*int i, sum = 0;
	for (i = 0; i <= 10; i++)
	{
		sum = sum + i;
		printf("i = %d, sum = %d\n", i, sum);
	}
	printf("-------�ݺ��� ����-------\n");*/

	//����7-8
	/*int num = 0, i, result = 0;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (i = 1; i < 10; i = i + 2)
	{
		result = num * i;
		printf("%d * %d = %d�Դϴ�.\n", num, i, result);
	}*/

	//����7-9
	/*int i;
	for (i = 0; 1; i++)
	{
		printf("�ݺ�Ƚ�� : %d\n", i);
	}*/

	//����7-10
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

	//����7-11
	/*int num, j = 9, result = 0;
	printf("���ڸ� �Է��ϼ��� : ");
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

	//����7-12
	/*int i;
	int factorial = 1;

	for (i = 1; i <= 10; i++)
	{
		factorial = factorial * i;
	}
	printf("1���� 10������ �� : %d\n", factorial);*/

	//����7-13
	/*int i = 1, factorial = 1;
	for (; i <= 10; i++)
	{
		factorial = factorial * i;
	}
	printf("1���� 10������ �� : %d\n", factorial);*/

	//����7-16
	/*int num = 10;

	do
	{
		printf("%d", num);
		num++;
	} while (num < 10);
	printf("\n **while���� �����մϴ�** \n");*/

	//��������1
	/*int n, m, result;

	printf("�Է�(���� ����) : ");
	scanf_s("%d", &n);

	printf("7�� ��� : ");

	for (m = 1; n*m <= 100; m++)
	{
		
		printf("%d ", n*m);
	}

	printf("\n%d�� ����� ���� : %d", n, m-1);*/

	//��������2
	/*int line, star;

	for (line = 1; line <= 5; line++)
	{
		for (star = 1; star <= line; star++)
		{
			printf("*");
		}
		printf("\n");
	}*/
		
	//��������3
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
	
	//��������4
	/*int num1, num2 = 1;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	
	for (; num2 <= 9; num2++)
	{
		printf("%d * %d = %d�Դϴ�.\n", num1, num2, num1 * num2);
	}*/

	//��������5
	/*int factorial = 1, i, j;

	printf("���丮�� ������ ���ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &j);
	
	for (i = 1; i <= j; i++)
	{
		factorial = factorial * i;
	}

	printf("%d�� ���丮�� �������� %d�Դϴ�.", j, factorial);*/

	//��������6
	/*int fst, scd, re = 1;

	do
	{
	printf("ù ��° ���� �Է��� �ּ��� : ");
	scanf_s("%d", &fst);
	printf("�� ��° ���� �Է��� �ּ��� : ");
	scanf_s("%d", &scd);
	printf("%d + %d = %d�Դϴ�.\n", fst, scd, fst + scd);
	} while (re = 1);*/
	
	//��������7
	/*int sbj, score, total = 0;

	printf("�� ���� ������ ����� ����մϴ�.\n");

	for (sbj = 1; sbj <= 10; sbj++)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &score);
		total = total + score;
	}

	printf("�� ���� ������ ����� %.1lf�Դϴ�.", (double)total / 10);*/

	//��������8
	/*int input, total = 0, count = 0;
	do
	{
		printf("���� �Է� : ");
		scanf_s("%d", &input);
		total = total + input;
		count++;
	} while (input != 0);

	printf("������� : %d\n", total);
	printf("�Է�Ƚ�� : %d", count - 1);*/

	//����1
	/*int input, re;
	printf("�ݺ� Ƚ�� �Է� : ");
	scanf_s("%d", &input);

	for (re = 1; re <= input; re++)
	{
		printf("Hello World!\n");
	}*/

	//����2
	/*int input, re = 1, val = 3;
	printf("�Է� : ");
	scanf_s("%d", &input);

	while (re <= input)
	{
		printf("%d ", val);
		val = val + 3;
		re++;
	}*/

	//����3
	/*int input, total = 0;

	do
	{
		printf("�Է� : ");
		scanf_s("%d", &input);

		total = total + input;
	} while (input != 0);

	printf("%d", total);*/

	//����4
	/*int mlt, n;
	printf("�ܼ� �Է� : ");
	scanf_s("%d", &mlt);

	for(n = 9 ; n >= 1; n--) printf("%d * %d = %d\n", mlt, n, mlt * n);*/
	
	//����5
	/*int sn;

	for (sn = 1; sn <= 100; sn++)
	{
		if(sn % 7 !=0 && sn % 9 != 0)
		continue;

		printf("%d ", sn);
	}*/

	//����6
	/*int num1, num2;
	printf("����1 �Է� : ");
	scanf_s("%d", &num1);
	printf("����2 �Է� : ");
	scanf_s("%d", &num2);

	if (num1 > num2) 
	{
		printf("�� ���� �� : %d", num1 - num2);
	}
	
	else
	{
		printf("�� ���� �� : %d", num2 - num1);
	}*/

	//����7
	/*int num1, num2, answer;
	printf("����1 �Է� : ");
	scanf_s("%d", &num1);
	printf("����2 �Է� : ");
	scanf_s("%d", &num2);

	answer = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("%d", answer);*/

	//����8
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

	//����9
	/*int input, many, ave = 0, num = 1;
	
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? ");
	scanf_s("%d", &many);
	
	while (num <= many)
	{
	printf("���� �Է� : ");
	scanf_s("%d", &input);
	ave = ave + input;
	num++;
	}

	printf("�Է��� ������ ��հ� : %lf", (double)ave/(double)many);*/

	//����10
	/*int a;
	printf("���� a �Է� : ");
	scanf_s("%d", &a);
	if(a <= 0) printf("1�̻��� ���� �Է����ּ���.");
	else
	{
		int b;
		printf("���� b �Է� : ");
		scanf_s("%d", &b);
		if (b <= 0) printf("1�̻��� ���� �Է����ּ���.");
		else
		{
			int c;
			printf("���� c �Է� : ");
			scanf_s("%d", &c);
			if (c <= 0) printf("1�̻��� ���� �Է����ּ���.");
			else
			{
				int d;
				printf("���� d �Է� : ");
				scanf_s("%d", &d);
				if (d <= 0) printf("1�̻��� ���� �Է����ּ���.");
				else
				{
					int e;
					printf("���� e �Է� : ");
					scanf_s("%d", &e);

					printf("a + b + c + d + e = %d", a + b + c + d + e);
				}
			}
		}
	}*/

	//����11
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