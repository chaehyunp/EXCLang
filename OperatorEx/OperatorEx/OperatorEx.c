#include <stdio.h>

void main()
{	
	//Ex 5-2
	/*int i = 0, j = 0, k = 0;
	printf("i = %d, j = %d, k = %d \n", i, j, k);
	i = 1;
	j = 5;
	k = 7;
	printf("i = %d, j = %d, k = %d \n", i, j, k);*/

	//Ex 5-3
	/*int a, b;
	a = 6;
	b = 2;

	printf("���� ���� ��� : %d \n", a + b);
	printf("���� ���� ��� : %d \n", a - b);
	printf("���� ���� ��� : %d \n", a * b);
	printf("������ ���� ��� : %d \n", a / b);
	printf("������ ���� ��� : %d \n", a % b);*/

	//Ex 5-4
	/*int num1, num2;

	num1 = 10 / 3;
	num2 = 10 % 3;

	printf("�� : %d \n", num1);
	printf("������ : %d \n", num2);*/

	//Ex 5-5
	/*int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;
	num1 = num1 + num2;
	printf("���� ���� ���� ��� : num1�� ������ : %d \n", num1);
	num2 = num2 - 2;
	printf("���� ���� ���� ��� : num2�� ������ : %d \n", num2);
	num3 = num3 * 2;
	printf("���� ���� ���� ��� : num3�� ������ : %d \n", num3);
	num4 = num4 / 2;
	printf("���� ������ ���� ��� : num4�� ������ : %d \n", num4);
	num5 = num5 % 2;
	printf("���� ������ ���� ��� : num5�� ������ : %d \n", num5);
	printf("%d,%d,%d,%d,%d\n", num1, num2, num3, num4, num5);*/

	//Ex 5-6
	/*int num1 = 10;
	printf("%d\n", num1);
	num1++;
	printf("%d\n", num1);
	++num1;
	printf("%d\n", num1);
	--num1;
	printf("%d\n", num1);
	num1--;
	printf("%d\n", num1);*/

	//Ex 5-7
	/*int num1 = 10, num2 = 10;
	int a, b;

	a = ++num1;
	printf("%d, %d\n", a, num1);

	b = num2++;
	printf("%d, %d\n", a, num2);*/

	//Ex 5-8
	/*int num1 = 10, num2 = 10;
	int a, b;
	num1 = num1 + 1;
	a = num1;
	printf("%d, %d\n", a, num1);

	b = num2;
	num2 = num2 + 1;
	printf("%d, %d\n", b, num2);*/

	//Ex 5-9
	/*int num1 = 10, num2 = 10;
	printf("%d\n", ++num1);
	printf("%d\n", num1);
	printf("%d\n", num2++);
	printf("%d\n", num2);*/

	//Ex 5-10
	/*int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = num1 > num2;
	result2 = num1 <= num2;
	result3 = num1 == num2;
	result4 = num1 != num2;

	printf("result1�� ����� �� : %d \n", result1);
	printf("result2�� ����� �� : %d \n", result2);
	printf("result3�� ����� �� : %d \n", result3);
	printf("result4�� ����� �� : %d \n", result4);*/

	//Ex 5-11
	/*int num1 = 2, num2 = 3, num3 = 5;
	int result1, result2, result3;

	result1 = num1 > 0 && num2 < 10;
	result2 = num2 <= 2 || num3 > 5;
	result3 =! num3;

	printf("result1�� ����� �� %d\n", result1);
	printf("result2�� ����� �� %d\n", result2);
	printf("result3�� ����� �� %d\n", result3);*/

	//Ex 5-12
	/*int num1 = 2, num2 = 3;
	int result1;

	result1 = num1 > num2 ? num1 : num2;
	printf("result1�� ����� �� %d\n", result1);*/

	//��������1
	/*int x, y, z;

	printf("input x : ");
	scanf_s("%d", &x);
	printf("input y : ");
	scanf_s("%d", &y);
	printf("input z : ");
	scanf_s("%d", &z);

	printf("(x + y) * (x + z) / (y %% z) = %d", (x + y) * (x + z) / (y % z));*/

	//��������2
	/*int numb1, numb2, numb3;

	printf("input : ");
	scanf_s("%d", &numb1);
	printf("input : ");
	scanf_s("%d", &numb2);

	numb3 = numb1 > numb2 ? numb2 : numb1 < numb2 ? numb1 : numb2;
	printf("Smaller Number : %d", numb3);*/

	//��������4
	/*int a, b, c, d;

	printf("���� a �Է� : ");
	scanf_s("%d", &a);
	printf("���� b �Է� : ");
	scanf_s("%d", &b);
	printf("���� c �Է� : ");
	scanf_s("%d", &c);

	d = a > b && a > c ? a : 
		b > a && b > c ? b : 
		c > a && c > b ? c : a;

	printf("���� ū �� : %d", d);*/

	//��������5
	/*int rate = 1271;
	int dollar;

	printf("�޷� : ");
	scanf_s("%d", &dollar);
	printf("��ȭ : %d��", dollar* rate);*/

	//��������8
	/*int hr, min, sec;

	printf("�� : ");
	scanf_s("%d", &hr);
	printf("�� : ");
	scanf_s("%d", &min);
	printf("�� : ");
	scanf_s("%d", &sec);

	printf("����, ���� 00�� 00�� 00�ʸ� �������� %d�ʰ� �귶���ϴ�.", hr * 3600 + min * 60 + sec);*/

	//��������9
	/*double pnd = 0.45;

	printf("�а��� 150�Ŀ��� %.1lfkg�Դϴ�.", 150.0 * pnd);*/

	//Operator ����1
	/*int m;
	double km = 1.609;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &m);
	printf("%d������ %.2lfų�ι����Դϴ�.", m, m * km);*/

	//Operator ����2
	/*int value, money, plus;
	printf("���� �� : ");
	scanf_s("%d", &money);
	printf("��ǰ ���� : ");
	scanf_s("%d", &value);

	plus = value / 10;
	printf("�ΰ��� : %d\n", plus);
	printf("�ܵ� : %d", money-(value+plus));*/

	//Operator ����3
	/*double rad;

	printf("������ : ");
	scanf_s("%lf", &rad);

	printf("���� : %lf", rad * rad * 3.14);*/

	//Operator ����4
	/*int x1, y1, x2, y2;
	
	printf("�� ����� x��ǥ�� : ");
	scanf_s("%d", &x1);
	printf("�� ����� y��ǥ�� : ");
	scanf_s("%d", &y1);
	printf("�� �ϴ��� x��ǥ�� : ");
	scanf_s("%d", &x2);
	printf("�� �ϴ��� y��ǥ�� : ");
	scanf_s("%d", &y2);

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.", (x2 - x1)* (y2 - y1));*/

	//Opperator ����5
	/*int smth, nsmth;
	
	printf("���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &smth);

	nsmth = smth >= 0 ? smth : -smth;
	printf("�Է��� ������ ���밪 : %d", nsmth);*/

	//Opperator ����6
	/*char eng, engR;

	printf("���� �Է� : ");
	scanf_s("%c", &eng, 1);

	engR = eng >= 'a' && eng <= 'z' ? eng - 32 : 
		   eng >= 'A' && eng <= 'Z' ? eng + 32 : eng;
	printf("��� ��� : %c", engR );*/

	//Opperator ����7
	/*int ip1, ip2, ip3, ln, sn;
	double avg;
	
	printf("ù��° ���� �Է� :");
	scanf_s("%d", &ip1);
	printf("�ι�° ���� �Է� :");
	scanf_s("%d", &ip2);
	printf("����° ���� �Է� :");
	scanf_s("%d", &ip3);

	avg = ((double)ip1 + (double)ip2 + (double)ip3) / 3;

	printf("���� �� ���� �� : %d\n", ip1 + ip2 + ip3);
	printf("���� �� ���� ��� : %.2lf\n", avg);

	ln = ip1 > ip2 && ip1 > ip3 ? ip1 :
		 ip2 > ip1 && ip2 > ip3 ? ip2 :
		 ip3 > ip1 && ip3 > ip2 ? ip3 : ip1;

	sn = ip1 < ip2 && ip1 < ip3 ? ip1 :
		 ip2 < ip1 && ip2 < ip3 ? ip2 :
		 ip3 < ip1 && ip3 < ip2 ? ip3 : ip1;

	printf("���� �� ���� �ִ밪 : %d\n", ln);
	printf("���� �� ���� �ּҰ� : %d\n", sn);*/
}