#include <iostream>
using namespace std;

//����, �̵������ �ִ� �κ�ĳ���� ����
class Robot
{
public:
	const char* name;
	int HP;

	void attack()
	{
		cout << "Punch!" << endl;
	}

	void move()
	{
		cout << "ddd" << endl;
	}
};

//Robot + ���� ���
class FlyRobot :public Robot //���
{
public:
	void fly()
	{
		cout << "www" << endl;
	}
	
	//��ӹ��� ����� ������ ���� ���� �� ����� �����ϴ� ��
	//�Լ� �������̵� (Override)
	void attack()
	{
		cout << "misile!" << endl;
	}
};

void main()
{
	Robot* r = new Robot();
	r->move();
	r->attack();
	
	Robot* r2 = new Robot();
	r2->move();
	r2->attack();

	FlyRobot* fr = new FlyRobot();
	fr->move();
	fr->attack();
	fr->fly();
}