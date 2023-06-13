#include <iostream>
#include <stdlib.h>

using namespace std;

//[이름, 나이]를 한 번에 저장하는 새로운 자료형 설계
class Person
{
public:

	//멤버변수
	const char* name;
	int age;

	//생성자 onstructor : 객체가 생성[new]되면 자동을 실행되는 함수
	//함수 만드는 규칙 : 1.함수이름은 class 이름과 같아야 함 2.리턴타입을 명시하면 안됨(리턴값이 없음, void 아님) 
	Person(const char* name, int age)
	{
		cout << "Person 객체 생성!" << endl;
		this->name = name;
		this->age = age;
	}

	//멤버함수 : 멤버변수에 값을 입력해주는 기능
	void setMembers(const char* name, int age) //여기에 있는 매개변수는 멤버변수가 아님
	{
		//멤버변수에 전달받은 매개변수 값을 대입
		//class 안에서 객체 본인을 지칭하는 포인터변수 this
		this->name = name;
		this->age = age;
	}

	//멤버함수 : 멤버값을 출력하는 기능
	void show()
	{
		cout << "name : " << name << endl;
		cout << "age : " << age << endl << endl;
	}
};

void bbb()
{
	//int a; //변수 '선언'
	//Person person //객체 '생성'(Construct)

	//구조체 객체(변수+함수)
	//Person person; 
	
	//class는 멤버 사용이 안됨
	//객체의 바깥에서 값을 함부로 바꾸지 못하게 하기 위해 "접근제한자"
	//informatin hidding
	//1. private(default) 2. protected 3. public
	//person.name = "Sam";
	//person.age = 20;
	//person.show();

	//구조체 객체(변수+함수)를 Heap 메모리에 생성
	Person* p = new Person("Sam", 20); //생성자함수 호출을 알려주기 위해서 괄호를 의도적으로 명시
	(*p).name = "Sam"; //연산자의 우선순위
	p->age = 20;
	p->show();

	Person* p2 = new Person("Robin", 25);
	p2->setMembers("Robin",25);
	p2->show();

	Person* p3 = new Person("Cindy", 30);
	p3->show();

	//객체도 생성해주면서 멤버값 대입
	//단, 멤버값의 대입은 [함수]를 사용하여 전달하는 것을 권장
	//객체를 생성[new]할 때 "자동"으로 실행되는 함수 - 생성자 함수
}