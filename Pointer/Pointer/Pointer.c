#include <stdio.h>
//#include <malloc.h> //malloc(); free();��ɸ� ����
#include <stdlib.h> //stdlib(standard library) malloc��� + ����

//int increase(int* p);
//void output(int* p[]);

void main()
{
	/*int a = 10;
	int* p; //������ ���� - �ּҸ� �����ϴ� �뵵�� ����
	p = &a;

	printf("%p\n", &a); //a�� �ּ�
	printf("%p\n", p); //p�� ���� ��(a�� �ּ�)

	//p�� ���� �ּ� �ȿ� �ִ� �����͸� ���
	printf("%d\n", *p); //������������(�����Ϳ�����) ���

	double b = 3.14;
	double* p2;
	p2 = &b;

	printf("%lf\n", *p2);

	char c = 'G';
	char* p3;
	p3 = &c;

	printf("%c\n", *p3);

	int num = 100;
	int* pp;
	pp = &num;

	*pp = 200;
	printf("%d\n", num);

	printf("input : ");
	scanf_s("%d", pp); //&�ּҿ����� ������� ����
	printf("%d\n", num);*/

	/*int a = 10;
	int b = a;

	int num = 100;
	int* p1 = &num;
	int* p2;
	p2 = p1;

	printf("%d\n", *p1);
	printf("%d\n", *p2);

	*p1 = 5000;
	printf("%d\n", *p1);
	printf("%d\n", *p2);
	//���� �ּҸ� ������ �������ν� ���� ����

	int n1 = 100;
	int n2 = 200;
	int* ppp;

	ppp = &n1;
	printf("%d\n", *ppp);
	
	ppp = &n2;
	printf("%d\n", *ppp);*/

	//������ ��� 4�����뵵 ù ��°
	/*int a = 10;
	printf("a : %d\n", a);

	increase(&a); //���� �۾� ����� ȣ��, a������ �ּҸ� �������ֱ�
	printf("a : %d\n", a);*/

	//������ ��� 4�����뵵 �� ��°
	/*char aaa[10] = "Hello";
	//printf("%s\n", &aaa[0]); //&aaa[0] == aaa
	printf("%s\n", aaa); //s�� ���� �ƴ϶� �ּ� �ʿ� (string�� ����������)

	char* p; 
	p = "android"; 
	//ū����ǥ�� �ּҸ� �ǹ�
	//p�� "android" �����͸� �� ���� �ƴ϶� ���ڿ� ����� �����ּҸ� ������ ��
	printf("%s\n", p); //���ڿ��� ������ ���� �ƴ�!! ������ ��!!

	int n;
	n = 10;
	printf("%d", n); //�ּ����� ������������ �ٸ��� ���������δ� ����, �������ϴ� ����*/

	/*char aaa[10];
	char* p;

	scanf_s("%s", aaa, 10);
	printf_s("%s\n", aaa);

	scanf_s("%s", p, 10);  
	printf("%s\n", p);

	//������ ������ ĳ���� �迭�� ���ؼ� ���ڼ� �����̳� ������ ���濡 �����ο� ���̳�
	//Ű���� �Է� �Ұ�, ���ڿ��� �����Ѽ� �Է��� �����ϳ� ����...*/

	//������ ��� 4�����뵵 �� ��°(ù ��°�� ����)
	/*int aaa[3] = {10, 20, 30};
	output(aaa); //�迭�� ������ no, �迭�����ּ�(aaa[0]�� �ּ�) ������ -> �����ͺ����� �޾ƾ��� 
	//aaa == &aaa[0] �迭�� �̸��� �迭�����ּҿ� ����
	//�̸��� ���� �ƴϹǷ� �Ķ���ͷ� �迭�� ���� �Ұ�*/

	//������ ��� 4�����뵵 �� ��°
	/*//Heap�޸𸮿� ������ ���ڸ� �����ϱ����� 4byte ���� �޾ƺ���
	int* p = malloc(4); //�Ҵ�� �ּҸ� ��������
	*p = 10; //�� �ּҿ� 10�� �־���!
	printf("%d\n", *p); //�����Ͱ� ����Ű�� ���� ������ �������!

	free(p);*/

	/*double* p = malloc(8);
	*p = 3.14;
	printf("%lf\n", *p);

	char* pp = malloc(1);
	*pp = 'G';
	printf("%c\n", *pp);*/
	
	//����Ʈ ���� �迭
	int aaa[3] = { 10, 20, 30 };
	int bbb[3] = { 100, 200, 300 };
	int ccc[3] = { 1000, 2000, 3000 };

	int* ps[3] ; //�迭 ��ü�� ����Ű�� ���� �ƴ϶� �� ���� ����Ų ��(ù��° �ּ�)
	ps[0] = &aaa[0]; //==aaa
	ps[1] = bbb;
	ps[2] = ccc;

	printf("%d\n", *(ps[0]+0));
	printf("%d\n", *(ps[0]+1));
	printf("%d\n", *(ps[0]+2));

	printf("%d\n", *(ps[1] + 0));
	printf("%d\n", *(ps[1] + 1));
	printf("%d\n", *(ps[1] + 2));

	printf("%d\n", *(ps[2] + 0));
	printf("%d\n", *(ps[2] + 1));
	printf("%d\n", *(ps[2] + 2));

	char* names[3];
	names[0] = "rachel"; //���ͷ� ��� �ּҸ� ����
	names[1] = "robin";
	names[2] = "rosie";

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", names[i]);
	}

	int* p = NULL; 
	//�����Ⱚ�̳� �ּ� ��� ����, �⺻������ �ʱ�ȭ�س���
	//0�� ù��° �ּ�
	//�ʱⰪ int 0, double 0.0, char ASCII 0,  pointer null 
	//(��·�� �� 0�� �ش��ϴ� �������� ���� 0�� �����ϱ�����)  
}

//������ ��� 4�����뵵 ù ��°
/*int increase(int* p)
//�Ű�����(�Ķ����)�� ���� ������ ���� ���� ������ ���� call by Value
//�ּҸ� ������ ���� ���� ���� �� ���� call by Address, Reference
{
	//*p = *p + 1;
	//*p++; �������� �켱���������� ++�� �����ǹǷ� �ּҰ� ++�� ��
	(*p)++;
}*/

//������ ��� 4�����뵵 �� ��°(ù ��°�� ����)
/*void output(int p[]) //���� "int* p" �迭�� �ƴϰ� �����ͺ�����, �׳� ǥ����� ������ذ�
{
	//printf("%d\n", *(p+0)); //�ּҿ� +1�� ��ġ�� 1�� �ƴ϶� ���� �ǹ� eg. int���� 4ĭ ��, char���� 1ĭ ��
	//printf("%d\n", *(p+1));
	//printf("%d\n", *(p+2));

	printf("%d\n", p[0]); //��ǻ�Ͱ� ���⿣ p�� aaa�� ����
	printf("%d\n", p[1]);
	printf("%d\n", p[2]);
}*/ 