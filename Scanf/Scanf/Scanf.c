#include <stdio.h>

void main()
{
	//Ű���带 ���� ������� ���� �Է¹ޱ� : scanf
	//scanf("���Ĺ���", &������); (ū����ǥ(") �ȿ� ���⳪ \n �����ʱ�)
	//char bloodType;
	//scanf_s("%c", &bloodType, 1); //char�� ���� safe������ �ԷµǴ� charater�� ���� �Է��ؾ� ��

	//����ڷκ��� 2���� ������ �Է¹ޱ�

	/*int a;
	int b;

	scanf_s("%d", &a);
	scanf_s("%d", &b);*/

	//�� ���
	/*printf("a:%d\n", a);
	printf("b:%d\n", b);*/

	//����ڷκ��� 2���� ������ �Է¹޾� �� ���� �����ϱ�
	/*int a;
	int b;
	printf("2���� ���� a,b ���� �Է��ϸ� ������ ����� ���ɴϴ�.\n");
	printf("\n");
	printf("���� a�� ���� �Է��Ͻÿ�\n");
	scanf_s("%d", &a);
	printf("���� b�� ���� �Է��Ͻÿ�\n");
	scanf_s("%d", &b);

	int c;
	c = a + b;
	printf("%d+%d=%d\n", a, b, c);*/

	//������ ��� ���α׷�
	printf("������ ��� ���α׷�\n");
	printf("\n");

	int mlt;
	
	printf("�ܼ� �Է� : ");
	scanf_s("%d", &mlt);
	printf("\n");

	printf("%d*%d=%d\n", mlt, 1, mlt * 1);
	printf("%d*%d=%d\n", mlt, 2, mlt * 2);
	printf("%d*%d=%d\n", mlt, 3, mlt * 3);
	printf("%d*%d=%d\n", mlt, 4, mlt * 4);
	printf("%d*%d=%d\n", mlt, 5, mlt * 5);
	printf("%d*%d=%d\n", mlt, 6, mlt * 6);
	printf("%d*%d=%d\n", mlt, 7, mlt * 7);
	printf("%d*%d=%d\n", mlt, 8, mlt * 8);
	printf("%d*%d=%d\n", mlt, 9, mlt * 9);

	//scanf ��� �ϳ��� ���� ���� ������ �Է¹ޱ�
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("a:%d\n", a);
	printf("b:%d\n", b);
}