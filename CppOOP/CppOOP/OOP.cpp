#include <iostream>
#include <stdlib.h>

using namespace std;

//[�̸�, ����, ����, ���] �����͸� �� ���� ������ �� �ִ� ���ο� �ڷ��� ����
struct Student
{
	//!!!������ ���� ���� �ƴ�!!! �ڷ����� ����� ���赵���ϻ�!!!
	//c++�� ���ڿ� ������ �ƴ� ���ڿ� ����̹Ƿ� const �ٿ������
	//�������
	const char* name;
	int kor;
	int eng;
	double aver;

	//������� ���� ����ϴ� ���(Function)
	//�Լ����忡���� ���� ��������� ��������, ���� ��������� ����������� ����ص� �ν�
	void output()
	{
		cout << "name : " << name << endl;
		cout << "kor : " << kor << endl;
		cout << "eng : " << eng << endl;
		cout << "aver : " << aver << endl << endl;
	}
};

//void output(Student s);

//namespace
//�������������� (::)
// �ߺ��� ������ �������ֱ�����(�浹�����ʰ� �ϱ�����)
//�Լ��� ȣ���ؼ� ����ϴ°� �ٸ�!
/*namespace Lee
{
	int HP = 100;
	int a = 50;
}

namespace Park
{
	int HP = 50;
	int a = 100;

	void output()
	{
		std::cout << "Park function" << std::endl;
	}
}*/

//using Park::HP;
//using Park::a;
//using Park::output;

//�ش� namespace ��ü�� �Ҽ��� �����ʰڴ�
//using namespace Park;


void aaa()
{
	//namespace
	//std::cout << "Hello world!" << std::endl;

	/*Lee::HP--;
	cout << Lee::HP << endl;

	//���־��� ������ �Լ��� using�� �̿��Ͽ� �Ҽ��� ���� �ʰ� ���
	HP++;
	cout << HP << endl;

	output();*/

	//����
	//c������ true 1, false 0 ����1,0�� ��,���� ����
	//���� �� ��������� while�� ��� ����, ���ڳ� ���� ��� ��밡��
	/*cout << true << endl;
	cout << false << endl;
	cout << "true" << endl; //���ڿ�

	bool a = true;
	int n = 0;

	while (a)
	{
		cout << "Hello" << endl;
		n++;
		if (n > 5) a = false; //���� ���⼭ break�� ���� �Ʒ� break ����� �ȵ�

		cout << "a is false" << endl;
	}*/

	/*//�Ϲݺ���
	int a = 10;
	int b = a;

	//�����ͺ���
	int c = 20;
	int* p = &c;

	//������ Reference (����� ���� ����)
	int d = 30;
	int& r = d;
	int& k = d;*/

	//Heap Memory
	//int*p = malloc(4);
	/*int* p = new int; //Heap �޸𸮿� ����°Ŷ� ������ �̸��� ���� �� ����
	*p = 10;
	cout << *p << endl;

	double* p2 = new double;
	*p2 = 3.14;
	cout << *p2 << endl;

	char* p3 = new char;
	*p3 = 'G';
	cout << *p3 << endl;

	delete p;
	delete p2;
	delete p3;*/

	//����ü ����
	Student stu; //c++ �տ� struct�� �Ƚᵵ ��
	stu.name = "Sam";
	stu.kor = 80;
	stu.eng = 70;
	stu.aver = (double)(stu.kor + stu.eng) / 2;
	
	//����ü ������ ������� ���
	/*cout << "name : " << stu.name << endl;
	cout << "kor : " << stu.kor << endl;
	cout << "eng : " << stu.eng << endl;
	cout << "aver : " << stu.aver << endl << endl;*/
	//����ü ���� ��ü���� ����Լ��� ������ ����
	//�� �� ���������� ��� ���� "���� + �Լ�"
	//����ü"����"�� �ƴ� ��ü Object (Variable + Function)
	stu.output();

	Student stu2;
	stu2.name = "Robin";
	stu2.kor = 90;
	stu2.eng = 95;
	stu2.aver = (double)(stu2.kor + stu2.eng) / 2;

	//Student �ڷ������� ���� ����ü�������� ������� ������ִ� ��� function(�Լ�)
	//output(stu2);
	stu2.output();

	Student stu3;
	stu3.name = "Cindy";
	stu3.kor = 40;
	stu3.eng = 60;
	stu3.aver = (double)(stu3.kor + stu3.eng) / 2;
	//output(stu3);
	stu3.output();
}

//Student �ڷ����� ������� ������ִ� �Լ� ����
/*void output(Student s)
{
	cout << "name : " << s.name << endl;
	cout << "kor : " << s.kor << endl;
	cout << "eng : " << s.eng << endl;
	cout << "aver : " << s.aver << endl << endl;
}*/