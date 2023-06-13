#include <iostream>
using namespace std;

//공격, 이동기능이 있는 로봇캐릭터 설계
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

//Robot + 나는 기능
class FlyRobot :public Robot //상속
{
public:
	void fly()
	{
		cout << "www" << endl;
	}
	
	//상속받은 기능이 마음에 들지 않을 때 기능을 변경하는 법
	//함수 오버라이드 (Override)
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