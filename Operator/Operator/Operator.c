#include <stdio.h>
//#define MAX 100 //��ó��, ��ũ�� ���

void main()
{

	/*printf("%d\n", MAX);
	const int a = 10;*/

	/*int a; //RAM�� a��� �̸��� �޸𸮰��� 4byte Ȯ��
	a = 10 //RAM�� 10�̶�� ���ͷ� ��� �޸𸮰��� 4byte Ȯ��(garbager value)
		   //������ �޸𸮸� COPY ���� �޸𸮿� PASTE, ������ �ڷ����� ���ƾ� ��!*/

		   /*int a = 10, b = 4;
		   double c;
		   c = (double)a / (double)b;

		   printf("c : %lf\n", c);*/

		   /*float d;
		   d = 3.14f; //float�� ���
		   printf("%f /n", d);*/

		   /*int n;
		   scanf_s("%d", &n);
		   int a = n / 100;
		   int b = (n / 10) % 10;
		   int c = n % 10;
		   printf("a = %d, b = %d, c = %d", a, b, c);*/

		   /*printf("%d\n", 3 < 5); //1:T, 0:F �񱳿����� ��� ������ ���ڷ� ǥ��
		   printf("%d\n", 3 > 5);
		   printf("%d\n", 5 <= 5);
		   printf("%d\n", 5 == 5); //���Կ�����(=), �񱳿�����(==)
		   printf("%d\n", 5 != 5);*/

		   /*int age;

		   printf("���̸� �Է��ϼ���. ");
		   scanf_s("%d", &age);

		   if (age > 20 && age < 40)
		   {
			   printf("�����ϼ���.\n");
		   }

		   if (age < 20 || age > 40)
		   {
			   printf("������ �� �����ϴ�.\n");
		   }

		   if (!(age > 20)) //Ư�������� ~~�� �ƴϳ� ��� ����� ���, � ������ �ݴ� ��Ȳ�� ��������� �� ���
		   {
			   printf("����Ұ�\n");
		   }*/

	/*int a;
	printf("input: ");
	scanf_s("%d", &a);

	a = a + 1;
	printf("1����: %d\n", a);

	a++;
	printf("1����: %d\n", a);*/

	//swap
	/*int red = 1, blue = 2;
	int yellow; //������ �ϸ� ������ ������ �ִ� ���� ������ ����, ������ �ִ� �����͸� ������ ���� �߰��� �ʿ�

	printf("red : %d, blue : %d\n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("red : %d, blue : %d\n", red, blue);*/

	/*int a, b;

	a = 19;
	b = a < 10 ? 1000 : (a < 20) ? 2000 : 3000;

	printf("%d", b);*/

	/*int score;
	char grade;

	printf("[��������]\n\n");

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);

	grade = score >= 100 ? '?' :
		    score >= 90 && score <= 100 ? 'A' : 
		    score >= 80 && score < 90 ? 'B' :
		    score >= 70 && score < 80 ? 'C' :
		    score >= 60 && score < 70 ? 'D' : 'F';

	printf("\n���� : %c\n", grade);*/

	//�Է¹��ڰ� �ҹ����� ���, �빮�ڷ� ��ȯ
	char ch;

	printf("input : ");
	scanf_s("%c", &ch, 1);

	//ch = ch >= 97 && ch <= 97 + 26 ? ch - 32 : ch;
	ch = ch >= 'a' && ch <= 'z' ? ch - 32 : ch;

	printf("\noutput : %c", ch);
}