#include <stdio.h>

/*void login(); //�Լ��� ������Ÿ��

void main()
{
	login(); //�Լ�ȣ��
	printf("main..\n");
	login(); //��ȣ�� ����
}

void login()
{
	printf("login\n");
	printf("join\n");
}*/

/*void display(void);

void main()
{
	display();
}

//����X,�Ķ����X
//�ܼ� ��¸� �ϴ� ���(�Լ�)
void display()//main���� �ƹ��͵� ���ϵ� �Ķ���͵� ����(C������ �Ķ������ void ���� ����, �ڹٴ� ���� ����)
{
	printf("Hello world!\n");
}*/

/*void display(int n, int a, double avr, int hund, char cap);

void main()
{
	int num = 10;
	int age = 25;
	double avr = 90.3;//�� �������� ���� ���� "��������"�� �� ���������� ��� ����

	display(num, age + 1, avr, 100, 'A');//����, ������, ĳ���� ����
}

void display(int n, int a , double avr, int hund, char cap)//�Ű������� �ٿ��� �� ����, �ߺ��Ǵ� �ڷ����̴��� ���� �ۼ�, �ڷ���/����/���� �߿�
{
	printf("num : %d\n", n);
	printf("num : %d\n", a);
	printf("average : %lf\n", avr);
	printf("%d", hund);
	printf("%c", cap);
}*/

/*void main()
{
	int n;
	n = aaa();
	//� �Լ��� ���� ���� �����ٿ��� ���� �� ���� 
	//int�� ���� 'n'�� aaa�� �����ϰ� ���� ���ϰ��� ���� 
	//�Լ��� ������ ���� �ƴ϶�,�Լ�ȣ���� ����� ������ ��!!!

	printf('%d', n);
}

int aaa()
{
	printf("aaa\n");
	return 100;
}*/

/*int getM(int a, int b);
int input();

void main()
{
	int num1, num2;

	//�Է±���� ���� �Լ� ȣ��, Ű���� �Է°��� num ������ �ֱ�
	num1 = input();
	num2 = input();//�Լ� ���� ����

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);

	int max = getM(num1, num2);
	printf("ū �� : %d", max);
}

//���޹��� 2���� ���� �߿��� ū ���� �����ִ� ��� �Լ�
int getM(int a, int b)
{
	//int max;
	//if (a > b) max = a;
	//else max = b;

	//return max;

	if (a > b) return a;
	else return b;
}

int input()
{
	int n;
	printf("input : ");
	scanf_s("%d", &n);

	return n;
}*/


/*void display(); //��0�Ķ�0
int input(); //��1�Ķ�0
int sum(int x, int y); //��1�Ķ�1
void output(int x, int y, int z); //��0�Ķ�1

void main()
{
	//1.�ȳ����� ��� �Լ� ȣ��
	display();

	//2. ����ڷκ��� ���� 2�� �Է¹޴� ���(�Լ�) ���(ȣ��)
	int a, b;
	a = input();
	b = input();

	//3. 2���� �������� �����Ͽ� ����� �ִ� �Լ� ȣ��
	int c = sum(a, b);

	//4. ��� ��� �� ���
	output(a, b, c);
}

void display()
{
	printf("����ڷκ��� 2���� ������ �Է¹޾� �����ϴ� ���α׷�\n");
}

int input()
{
	int n;
	printf("input : ");
	scanf_s("%d", &n);
	return n;
}

int sum(int x, int y)
{
	return x + y;
}

void output(int x, int y, int z)
{
	printf("%d + %d = %d\n", x, y, z);
}*/

/*int ddd()
{
	return 5;//���ϰ��� ONLY ONE!
	//return�� ������ main�Լ��� ���ư� ���Ŀ� �ڵ带 �ۼ��ص� �����������
	//if (a < 0) return; 
	//print("%d", a); �ݺ����� break�� ���� ����
}

int ccc()
{
	return 100 + ddd();
}

void bbb()
{
	int n = ccc();
	printf("bbb : %d\n", n);
}

void aaa()
{
	printf("aaa\n");
	bbb();//�Լ����� �ٸ� �Լ���� ����, main������ ȣ��no
}

void main()//�����Լ��� �ü���� �θ��� �ü������ ������
{
	aaa();
	//if(����) return -1; => ����, 
	//return 0; => �����۵�
}*/

//���ȣ��
void aaa(int n)
{
	if (n <= 0) return;
	printf("aaa\n");
	aaa(n - 1); //���ȣ�� Recurcive call eg. �ִ��ο��� �������� ���� �׸����� ������
	//���� �̿��ؼ� 4���� �ݺ�
	printf("kkk\n"); //aaa�� ���ȣ���� ������ ���ƿö� ����
}

void main()
{
	aaa(4);
}