#include <stdio.h>

void main()
{
	//Ch3.Ex3-5
	/*int a = 0, b = 1;
	printf_s("a�� ���� %d�Դϴ�.\nb�� ���� %d�Դϴ�.", a, b);
	printf("\n");*/

	//Ch3.Ex3-8
	/*int box = 50;
	printf("�� %d�ڽ��� �ֽ��ϴ�.", box);
	printf("\n");*/

	//Ch3.��������3
	/*int red = 1, blue = 2;
	int yellow;

	printf("before\nred = %d, blue = %d\n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("after\nred = %d, blue = %d\n", red, blue);
	printf("\n");*/



	//Ch.6 Ex6-4
	/*char num1 = -129;
	char num2 = 128;

	printf("%d\n", num1);
	printf("%d\n", num2);

	num1 = -130;
	num2 = 129;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("\n");*/

	//Ch.6 Ex6-7
	/*float numb1 = 0.123456789012345;
	double numb2 = 0.123456789012345;

	printf("float�� : %f\n", numb1);
	printf("double�� : %lf\n", numb2);

	printf("float�� : %.15f\n", numb1);
	printf("double�� : %.15lf\n", numb2);*/

	//Ch.6 Ex6-10
	/*char val1;
	int val2;

	printf("�����Է� : ");
	scanf_s("%c", &val1, 1);
	printf("ASCII �ڵ尪�� %d�Դϴ�.\n", val1);
	printf("ASCII �ڵ尪 �Է� : ");
	scanf_s("%d", &val2);
	printf("���ڷ� %c�Դϴ�.\n", val2);*/

	//Ch.6 ��������7
	/*int r;
	printf("���� ������:");
	scanf_s("%d", &r);

	printf("���� ����:%f, ���� �ѷ�:%f\n", r * r * 3.14, r * 2 * 3.14);*/



	//Ch.2 Ex2-11
	/*int age;
	printf("What is your age? : ");
	scanf_s("%d", &age);
	printf("Wow! Really? Are you %dyears old?", age);*/

	//Ch.2 Ex2-12
	/*int d, x, o;
	printf("10���� ���� 1�� �Է� : ");
	scanf_s("%d", &d);
	printf("10���� : %d, 16���� : %x , 8���� : %o\n", d, d, d);
	printf("16���� ���� 1�� �Է� : ");
	scanf_s("%x", &x);
	printf("10���� : %d, 16���� : %x, 8���� : %o\n", x, x, x);
	printf("8���� ���� 1�� �Է� : ");
	scanf_s("%o", &o);
	printf("10���� : %d, 16���� : %x, 8���� : %o\n", o, o, o);*/

	//Ch.2 Ex2-13
	/*float f1, f2;
	double d1, d2;
	printf("float�� �Ǽ� �� �� �Է� : ");
	scanf_s("%f%e", &f1, &f2);
	printf("float�� �Ǽ� ��� : f1=%f, f2=%e\n", f1, f2);
	printf("double�� �Ǽ� �� �� �Է� : ");
	scanf_s("%lf%le", &d1, &d2);
	printf("double�� �Ǽ� ��� : d1=%lf, d2=%le\n", d1, d2);*/

	//Ch2.��������3
	/*int ver, hor;
	printf("���� ���̸� �Է��ϼ���: ");
	scanf_s("%d", &ver);
	printf("���� ���̸� �Է��ϼ���: ");
	scanf_s("%d", &hor);
	printf("���簢���� ���̴� %d�Դϴ�.\n", ver * hor);*/

	//Ch2.��������4
	/*int r;
	double pi = 3.14;
	printf("�������� �Է��ϼ���: ");
	scanf_s("%d", &r);
	printf("���� ���̴� %f�Դϴ�.", r * r * pi);*/
    
    //Ch.2 ��������5
    /*int d1, d2;
	printf("�� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &d1, &d2);
	printf("�� : %d + %d = %d\n", d1, d2, d1 + d2);
	printf("�� : %d - %d = %d\n", d1, d2, d1 - d2);*/

    //Scanf ����1
    /*int i1, i2;
	printf("���� �� ���� �Է� : ");
	scanf_s("%d%d", &i1, &i2);
	printf("������� : %d - %d = %d\n������� : %d * %d = %d\n", i1, i2, i1 - i2, i1, i2, i1 * i2);*/

    //Scanf ����2
    /*int num1, num2, num3;
	printf("�� ���� ������ ���ʷ� �Է� : ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	printf("%d*%d+%d=%d\n", num1, num2, num3, num1*num2+num3);*/

	//Scanf ����3
	/*int x;
	printf("�����Է� : ");
	scanf_s("%d", &x);
	x = x * x;
	printf("�Է��� ������ ������ : %d\n", x);*/

	//Scanf ����4
	int a1, a2;
	printf("�� ���� ������ �Է� : ");
	scanf_s("%d%d", &a1, &a2);
	printf("�� : %d, ������: %d", a1/a2, a1%a2 );

	//Scanf ����5
	/*int numb1, numb2, numb3;
	printf("�� ���� ������ �Է� : ");
	scanf_s("%d%d%d", &numb1, &numb2, &numb3);
	printf("(%d-%d)*(%d*%d)*(%d/%d) = %d", numb1, numb2, numb2, numb3, numb3, numb1, (numb1 - numb2) * (numb2 * numb3) * (numb3 / numb1));*/
}