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
	//���ȣ �� ���ڸ� �ٲ�� ��� �ݺ�
	//19,20,21 �ݺ������� �ۼ�
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

	printf("%p\n", &a); //& �ּҿ�����
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("\n");

	int aaa[3];
	printf("%p\n", &aaa[0]);
	printf("%p\n", &aaa[1]);
	printf("%p\n", &aaa[2]);*/

	/*int aaa[3] = {10, 20, 30}; //�迭�� �ʱ�ȭ
	double bbb[3] = { 3.14, 5.55, 2.45 };
	char ccc[5] = { 'h','e','l','l','o' };

	int ddd[5] = { 0 };//�ʱ�ȭ�� ���� �� ������ ERROR, ������ �������� �ش� �ڷ��� 0�� �ش��ϴ� ������ ä��
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
	printf("%c\n", fff[1]);//�ƽ�Ű�ڵ� 0��  = �ƹ��͵� ǥ�� �ȵǴ� �� (����, ���鵵 �ƴ�)
	printf("%c\n", fff[2]);*/

	//�迭���� ����
	/*int a = 10;
	int b = a;

	int aaa[3] = { 10,20,30 };
	int bbb[3];
	bbb[0] = aaa[2]; //�� ���� ���Ծȵ�, ���������� ���
	bbb[1] = aaa[1];
	bbb[2] = aaa[0];

	for (int i = 0; i < 3; i++)
	{
		bbb[i] = aaa[2 - i];
	}*/

	//�迭���� ����
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
 
	//�迭����� ���� Ű���� �Է¹ޱ�
	/*t a;
	//scanf_s("%d", &a);

	int aaa[3];
	
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &aaa[i]);
	}

	char ccc[3]; //[x] x�� �迭 ����, c���� ����� ����(���� �Ұ�)
	scanf_s("%c", &ccc[0], 1); //[y] y�� �ε��� ��ȣ(�迭�� ��ҷ� ���, ���� ��� ����)
	scanf_s("%c", &ccc[1], 1); //%c�� ���͵� �ƽ�Ű��ȣ"10"���� �ν�
	scanf_s("%c", &ccc[2], 1);*/

	//�迭����� ��� ������ �����غ���
	/*int total = 0;
	int scores[10] = { 70,40,80,60,90,40,50,60,70,100 };
	for (int i = 0; i < 10; i++)
	{
		total += scores[i]; //total = total + scores[i];
	}

	printf("���� : %d\n", total);
	printf("��� : %.2lf\n", (double)total / (double)10);*/

	//�迭����� �ִ밪 ���غ���
	/*int scores[10] = {70,40,86,62,93,40,99,50,60,70};
	int max = scores[0];

	for (int i = 1; i < 10; i++)
	{
		if (scores[i] > max) max = scores[i]; //���� ���� max���� ũ�� �ƽ��� �� ���� ��
	}
	printf("�ִ밪 : %d\n", max);*/

	//���ڿ� ����
	//char aaa[5] = { 'H','E','L','L','O' };
	//char aaa[6] = "HELLO";//���� �Ѿ�� ������ ��
	//���ڿ� ���� ���ڿ� ������(NULL����) �ʿ�
	//������ ���� �������� +1�ؾ� ������ ��µ�

	//printf("%s\n", aaa);
	//printf("%s\n", "HELLO");//���ڿ� ���

	/*char aaa[6];

	aaa[0] = 'H';
	aaa[1] = 'e';
	//aaa[2] = '0'; �ƽ�Ű��ȣ 0
	//aaa[2] = '\0'; 0�� �����ϱ����� ��밡���ϳ� ������
	aaa[2] = NULL; //������ ������, �ڸ��� �������� ����*/

	/*char aaa[6];

	scanf_s("%c", &aaa[0], 1);
	scanf_s("%c", &aaa[1], 1);
	scanf_s("%c", &aaa[2], 1);
	scanf_s("%c", &aaa[3], 1);
	scanf_s("%c", &aaa[4], 1);
	scanf_s("%c", &aaa[5], 1);

	aaa[5] = NULL; //����(�ƽ�Ű��ȣ 10)�� null�� �ٲ�
	//�̷��� ���� ����ڴ� ������ 5���ڸ� �Է��ؾ���*/
	
/*char aaa[20];

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%c", &aaa[i], 1);
		if (aaa[i == 10])
		{
			aaa[i] = NULL;
			break; // �Էµ� ���� �ƽ�Ű��ȣ 10�� ���͸� �Է¹����� �����
		}
	}
	aaa[19] = NULL; //�����Ⱚ ������ �ʰ�, 19���� ���ķ� �߸�

	printf("%s\n", aaa);*/

	//%s�� �Է¹ޱ�
	/*char aaa[20];

	scanf_s("%s", &aaa[0], 20);
	printf("%s\n", aaa);*/

	//�̸��� �����Է¹ޱ�
	/*char name[20];
	int age;

	printf("�̸� : ");
	scanf_s("%s", name, 20); //&name[0] == name �迭�� �����ּҴ� �迭�� �̸��� ����

	printf("���� : ");
	scanf_s("%d", &age);

	printf("%s - %d\n", name, age);*/

	//������ �迭
	/*int arr[5] = { 10, 20, 30, 40, 50 };

	int aaa[3][5] = { 
		{10,20,30,40,50},//�߰�ȣ ���� ���������� ���ü��� ���� ������
		{100,200,300,400,500},
		{1000,2000,3000,4000,5000}
	};

	//aaa[1][6] = 8; 
	//������ �迭�� ���� �ƴ�, �޸������δ� ���� ����
	//6������ ���ٰ� ���� �ȵ��� ���� �ƴ϶� aaa[2][1]�� ��

	for (int i = 0; i < 3; i++)//������ �ݺ����� ���� ����
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
			sum[i] += aaa[i][k]; //sum[1]�� ù ��° ���� �Ѱ�, sum[2]�� �� ��°, sum[3]�� �� ��°
		}
		printf("\n");
	}
	printf("1�� ���� : %d\n", sum[0]);
	printf("2�� ���� : %d\n", sum[0]);
	printf("3�� ���� : %d\n", sum[0]);
	printf("\n���� : %d\n", total);*/

	//3����
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
	//���� �迭�� ����鼭 �ʱ�ȭ���� �ߴٸ� ���ȣ �� ��������
	//�ʱ�ȭ�ϴ� ������ ���� �� �� �ֱ⶧��
	//�� 2�������ʹ� �� �ո� ���� ����
	//�޸������� ���� ���� �ֱ⶧���� �� ���� ������ �𸣸� ����� �ȵ�
}