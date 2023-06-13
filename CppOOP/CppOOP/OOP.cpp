#include <iostream>
#include <stdlib.h>

using namespace std;

//[이름, 국어, 영어, 평균] 데이터를 한 번에 저장할 수 있는 새로운 자료형 설계
struct Student
{
	//!!!변수가 절대 절대 아님!!! 자료형을 만드는 설계도면일뿐!!!
	//c++은 문자열 변수가 아닌 문자열 상수이므로 const 붙여줘야함
	//멤버변수
	const char* name;
	int kor;
	int eng;
	double aver;

	//멤버변수 값을 출력하는 기능(Function)
	//함수입장에서는 위에 멤버변수가 전역변수, 따라서 멤버변수를 변수선언없이 사용해도 인식
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
//범위지정연산자 (::)
// 중복된 변수를 구분해주기위해(충돌하지않게 하기위해)
//함수는 호출해서 사용하는것 다름!
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

//해당 namespace 전체를 소속을 쓰지않겠다
//using namespace Park;


void aaa()
{
	//namespace
	//std::cout << "Hello world!" << std::endl;

	/*Lee::HP--;
	cout << Lee::HP << endl;

	//자주쓰는 변수나 함수는 using을 이용하여 소속을 쓰지 않고 사용
	HP++;
	cout << HP << endl;

	output();*/

	//논리값
	//c언어에서는 true 1, false 0 숫자1,0과 참,거짓 구분
	//조금 더 명시적으로 while문 사용 가능, 숫자나 논리값 모두 사용가능
	/*cout << true << endl;
	cout << false << endl;
	cout << "true" << endl; //문자열

	bool a = true;
	int n = 0;

	while (a)
	{
		cout << "Hello" << endl;
		n++;
		if (n > 5) a = false; //만약 여기서 break를 쓰면 아래 break 출력이 안됨

		cout << "a is false" << endl;
	}*/

	/*//일반변수
	int a = 10;
	int b = a;

	//포인터변수
	int c = 20;
	int* p = &c;

	//참조자 Reference (별명과 같은 개념)
	int d = 30;
	int& r = d;
	int& k = d;*/

	//Heap Memory
	//int*p = malloc(4);
	/*int* p = new int; //Heap 메모리에 만드는거라 여전히 이름은 붙일 수 없음
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

	//구조체 변수
	Student stu; //c++ 앞에 struct로 안써도 됨
	stu.name = "Sam";
	stu.kor = 80;
	stu.eng = 70;
	stu.aver = (double)(stu.kor + stu.eng) / 2;
	
	//구조체 변수의 멤버값을 출력
	/*cout << "name : " << stu.name << endl;
	cout << "kor : " << stu.kor << endl;
	cout << "eng : " << stu.eng << endl;
	cout << "aver : " << stu.aver << endl << endl;*/
	//구조체 변수 자체에서 출력함수를 가지고 있음
	//좀 더 직관적으로 사용 가능 "변수 + 함수"
	//구조체"변수"가 아닌 객체 Object (Variable + Function)
	stu.output();

	Student stu2;
	stu2.name = "Robin";
	stu2.kor = 90;
	stu2.eng = 95;
	stu2.aver = (double)(stu2.kor + stu2.eng) / 2;

	//Student 자료형으로 만든 구조체변수들의 멤버값을 출력해주는 기능 function(함수)
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

//Student 자료형의 멤버값을 출력해주는 함수 정의
/*void output(Student s)
{
	cout << "name : " << s.name << endl;
	cout << "kor : " << s.kor << endl;
	cout << "eng : " << s.eng << endl;
	cout << "aver : " << s.aver << endl << endl;
}*/