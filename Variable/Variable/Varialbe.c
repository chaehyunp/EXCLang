#include <stdio.h>

void main()
{
	//�����͸� �����ϴ� ���� �����[��������]
	//����: �ڷ��� ������;
	//���Կ�����(=): ������ �߽����� �������� ������ ����
	int a;
	a = 10;

	//a��� �̸��� ���� �ȿ� �ִ� �� 10�� ȭ�鿡 �����ֱ�(���)
	printf("a:%d\n", a);

	//a��� �̸��� ������ ���� 20���� �����ϱ�(�����ϱ�)
	a = 20;
	printf("����� a��:%d\n", a);

	printf("\n");

	//�ٸ� �ڷ����� �����͵� ���� ����غ���
	float b;
	b = 3.14;
	printf("������:%.2f\n", b);

	printf("\n");

	char vitaminType;
	vitaminType = 'C';
	printf("��Ÿ��%c\n", vitaminType);
	vitaminType = 'B';
	printf("��Ÿ��%c\n", vitaminType);


	int num1;//��������
	num1 = 10; //���� �� ����
	printf("%d\n", num1);

	int num2 = 20; //������ ����鼭 *�ʱ�ȭ�ߴ�*
	printf("%d\n", num2);

	int A, B, C, D; //���� �ڷ����ϰ��,���Ῥ���ڸ� �̿��ؼ� ���� ���� ���� �� ���� ����

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double)); //float�� double�� ����: �Ҽ��� �Ʒ��� �󸶳� ǥ���� �� �ִ°�

	printf("\n");

	float AA = 0.123456789123456789;
	double BB = 0.123456789123456789;

	printf("%.20f\n", AA);
	printf("%.20lf\n", BB);

}