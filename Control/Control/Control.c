#include <stdio.h>

void main()
{
	/*int age;

	printf("ȯ���մϴ�.\n");
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
	printf("\n");

	if (age >= 20 && age <35)
	{
		//������ TRUE�϶� ������ ����
		printf("���� �����մϴ�.\n");
		printf("\n");

		int people;
		printf("�� ���Դϱ�? ");
		scanf_s("%d", &people);

		//��ø if�� (else ���������� ����)
		if( people >= 1 && people < 5 )
		{ 
			printf("\n%d�μ����� �ڸ� �ȳ��մϴ�.\n", people);
		}

		else
		{
			printf("\n��ü���� ������ �ȳ��ص帳�ϴ�. ������ ȣ���մϴ�.\n");
		}
			
	}

	else
	{
		//������ FALSE�϶� ������ ����
		printf("���� �Ұ��մϴ�.\n");
	}*/

	/*int score;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);
	printf("\n");

	if (score >= 90 && score <= 100) printf("A");
	else if (score >= 80 && score < 90) printf("B");
	else if (score >= 70 && score < 80) printf("C");
	else if (score >= 70 && score < 80) printf("D");
	else if (score >= 0 && score < 70) printf("F");
	else printf("������ �߸� �Է��ϼ̽��ϴ�.");

	printf("\n");*/

	/*printf("����� Ű��� ����\n\n");

	printf("�޴�\n");
	printf("1. ���ֱ�\n");
	printf("2. ����ֱ�\n");
	printf("3. �����ϱ�\n");

	printf("\n�޴���ȣ �Է� : ");

	int menu;

	scanf_s("%d", &menu);
	printf("\n");

	switch(menu)
	{
		case 1 :
			printf("����̿��� ���� �־����ϴ�! (����� -5)\n");
			break;

		case 2 :
			printf("����̿� ����־����ϴ�! (�ɽ��� -5)\n");
			break;

		case 3 :
			printf("����̿��� ������ ���־����ϴ�! (������ +5)\n");
			break;

		default :
			printf("�߸��� �޴� ��ȣ�Դϴ�.\n");
	}*/

	/*char class;

	printf("�����Է� : ");
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
		printf("70�� �̸�");
		break;

	default :
		printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.");
	}*/

	/*int level = 1; //������� �ʱⰪ

	printf("���� Lv%d\n\n", level); //��������

	while (level < 10)
	{
		printf("�Ʒ�.. ���� +1\n,���� Lv%d\n\n", level+1);
		level++; //���������
	}

	//������� �ʱⰪ, ��������, ��������꿡 ���� �ݺ�Ƚ���� ����*/


	/*int i = 0;
	while (i < 3)
	{
		printf("Hello %d\n", i+1);
		i++;
	}

	printf("\nBye\n");*/


	/*int mlt = 1;
	int num;

	printf("�� : ");
	scanf_s("%d", &num);

	while (mlt <= 9)
	{
		
		printf(" %d * %d = %d\n", num, mlt, num * mlt);
		mlt++;
	}*/

	/*int re = 0;
	int n;

	printf("�ݺ��� Ƚ�� : ");
	scanf_s("%d", &n);

	while (re < n)
	{
		int input;
		printf("input : ");
		scanf_s("%d", &input);
		if (input % 2 == 0) printf("¦��\n"); //¦��ǥ��
		else printf("Ȧ��\n");

		re++; //n--�� ����(re�� 0�̱� ������ 0�� �� ������ �ݺ�)
	}*/

	/*int i = 0;
	int n;
	int total = 0;

	while (i < 3) 
	{

		printf("input : ");
		scanf_s("%d", &n);
		
		total = total + n; 
		//���� n�� �ݺ��ϸ鼭 ������ ���� �Ҿ����
		//�Է¹��� ���� ��� �����Ҷ�, ���� ���� �����Ͽ� ���������ʰ� total�̶�� ������ ���� ����
		
		i++;
	}

	printf("\ntotal : %d\n", total); */

	/*//��ø�ݺ���(������ 1��~9��)
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

		i++; //i+=2 (2�ܸ� ���)
	}*/
	
	//for�� : for ( ������ʱ�ȭ ; �������� ; ��������� )
	/*for (int i = 0; i < 3; i++) //���� i�� for�� �ȿ����� ��밡��
	{
		printf("Hello\n");
	}
	int j = 0; 
	//for�� �ٱ������� ����ϰ� �ʹٸ� ������ �ٱ��� ���� ��밡�� 
	//��, �����ݷ��� ���ܵξ���� ���굵 ��������

	for ( ; j < 3; )
	{
		printf("Hello\n");

		j++;
	}*/

	/*int dan;
	printf("�ܼ��Է� : ");
	scanf_s("%d", &dan);

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}*/

	/*for (int i = 2; i <= 9; i++)
	{	
		printf("%d��\n", i);
		for (int k = 1; k <= 9; k++)
		{
			printf("%d * %d = %d\n", i, k, i * k);
		}
		printf("\n");
	}*/

	//do-while ���๮
	/*int a = 15;
	while (a > 10) //�ݺ����� ������ �����̸� �� ���� ������� ����
	{
		printf("aa\n");
		a--;
	}

	int b = 5;
	do //�ݺ����� ������ �����̾ �� ���� ����
	{
		printf("bb\n");
		b--;
	} while (b > 10);*/

	/*int dan; 
	printf("�ܼ��Է� : ");
	scanf_s("%d", &dan);

	while(dan < 2 || dan < 9)
	{
		printf("�ٽ��Է� : ");
		scanf_s("%d", &dan);
	} //�ߺ����� �Է�*/

	//do-while�� �ٲٸ�
	/*int dan;
	
	do
	{
		printf("�Է� : ");
		scanf_s("%d", &dan);
	} while (dan < 2 || dan < 9);


	for(int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * 1);
	}*/

	//break�� �ݺ����� switch�� ���⶧ ���
	//i�� 5���� ��� ����
	/*for (int i = 0; i < 10; i++)
	{
		printf("Hello\n");
		
		if (i==5) break; 
	}*/

	//i�� 4���� ��� ����
	/*for (int i = 0; i < 10; i++)
	{
		
		if (i == 5) break;
		
		printf("Hello\n");
	}*/

	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5) continue; 
		//������ �Ʒ��� �������� �ʰ� ���� �������� �ٽ� �ö� (�� ȸ���� ��)
		//�� �ڵ忡���� 5�� ��µ��� ���� ���� (i�� ���� 5�϶�, �Ʒ��� �������� printf�� ������� �ʾұ� ����)

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

	//0�� �Է��Ҷ����� �ݺ� (���ѹݺ���)
	/*int num;

	while (1) //True
	{
		printf("�Է� : ");
		scanf_s("%d", &num);
	
		if (num == 0)
		{
			printf("�Է�����");
			break;
		}
	}*/

	//continue�� �̿��Ͽ� ¦���ܸ� ����ϱ�
	/*for (int dan = 2; dan < 10; dan++)
	{
		if (dan % 2 == 1) continue;

		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}*/

	/*printf("\n���α׷��� �����մϴ�.\n");*/
}