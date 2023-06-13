#include <iostream>
#include <stdlib.h>

using namespace std;

//[�̸�, ����]�� �� ���� �����ϴ� ���ο� �ڷ��� ����
class Person
{
public:

	//�������
	const char* name;
	int age;

	//������ onstructor : ��ü�� ����[new]�Ǹ� �ڵ��� ����Ǵ� �Լ�
	//�Լ� ����� ��Ģ : 1.�Լ��̸��� class �̸��� ���ƾ� �� 2.����Ÿ���� ����ϸ� �ȵ�(���ϰ��� ����, void �ƴ�) 
	Person(const char* name, int age)
	{
		cout << "Person ��ü ����!" << endl;
		this->name = name;
		this->age = age;
	}

	//����Լ� : ��������� ���� �Է����ִ� ���
	void setMembers(const char* name, int age) //���⿡ �ִ� �Ű������� ��������� �ƴ�
	{
		//��������� ���޹��� �Ű����� ���� ����
		//class �ȿ��� ��ü ������ ��Ī�ϴ� �����ͺ��� this
		this->name = name;
		this->age = age;
	}

	//����Լ� : ������� ����ϴ� ���
	void show()
	{
		cout << "name : " << name << endl;
		cout << "age : " << age << endl << endl;
	}
};

void bbb()
{
	//int a; //���� '����'
	//Person person //��ü '����'(Construct)

	//����ü ��ü(����+�Լ�)
	//Person person; 
	
	//class�� ��� ����� �ȵ�
	//��ü�� �ٱ����� ���� �Ժη� �ٲ��� ���ϰ� �ϱ� ���� "����������"
	//informatin hidding
	//1. private(default) 2. protected 3. public
	//person.name = "Sam";
	//person.age = 20;
	//person.show();

	//����ü ��ü(����+�Լ�)�� Heap �޸𸮿� ����
	Person* p = new Person("Sam", 20); //�������Լ� ȣ���� �˷��ֱ� ���ؼ� ��ȣ�� �ǵ������� ���
	(*p).name = "Sam"; //�������� �켱����
	p->age = 20;
	p->show();

	Person* p2 = new Person("Robin", 25);
	p2->setMembers("Robin",25);
	p2->show();

	Person* p3 = new Person("Cindy", 30);
	p3->show();

	//��ü�� �������ָ鼭 ����� ����
	//��, ������� ������ [�Լ�]�� ����Ͽ� �����ϴ� ���� ����
	//��ü�� ����[new]�� �� "�ڵ�"���� ����Ǵ� �Լ� - ������ �Լ�
}