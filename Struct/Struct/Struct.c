#include <stdio.h>
#include <stdlib.h>

/*//이름, 국어, 영어, 평균 데이터를 한 번에 저장할 수 있는 새로운 자료형 설계
struct Student
{
	//!!!!!변수 만든것 아님!!!!!, 새로운 자료형을 설계한 것, 메모리 no
	//기존에 6개의 자료형이 존재해도 변수를 선언하지 않으면 변수가 생기지 않은 것과 같음
	//따라서 초기화 등 값을 주는 것이 불가함
	char* name;
	int kor;
	int eng;
	double aver;
};

struct Address
{
	char* nation;
	char* city;
};

//이름, 나이, 주소[국적,도시]를 저장하는 또다른 자료형
struct Person
{
	char* name;
	int age;
	struct Address address; //표기법이 중요한 이유(대소문자 구분)
};

void output(struct Student S);

void main()
{
	//기존 변수
	//int a; //자료형 변수명
	
	//구조체 변수
	struct Student stu1; //(구조체로 만든) 자료형 변수명
	stu1.name = "Sam"; //변수명.멤버변수 (접근연산자 이용, dot연산자)
	stu1.kor = 80;
	stu1.eng = 70;
	stu1.aver = (double)(stu1.kor + stu1.eng) / 2;
	output(stu1);

	struct Student stu2;
	stu2.name = "Robin";
	stu2.kor = 90;
	stu2.eng = 95;
	stu2.aver = (double)(stu2.kor + stu2.eng) / 2;
	output(stu2);
	

	struct Student stu3 = { "Cindy", 60, 68, (double)(stu3.kor + stu3.eng) / 2 };
	output(stu3);

	//Person 자료형의 구조체 변수 만들기
	struct Person a;
	a.name = "Park";
	a.age = 20;
	a.address.nation = "Korea";
	a.address.city = "Seoul";

	printf("name : %s  age : %d  address : %s, %s\n" , a.name, a.age, a.address.nation, a.address.city);

	struct Person b;
	b.name = "Watson";
	b.age = 25;
	b.address.nation = "USA";
	b.address.city = "NewYork";

	printf("name : %s  age : %d  address : %s, %s\n", b.name, b.age, b.address.nation, b.address.city);

	//구조체로 만든 자료형도 배열로 변수들을 한 번에 만들 수 있음
	int aaa[3];
	aaa[0] = 10;
	aaa[1] = 20;
	aaa[2] = 30;

	struct Person people[3];
	people[0].name = "Sam";
	people[0].age = 20;

	people[1].name = "Robbin";
	people[1].age = 25;

	people[2].name = "Cindy";
	people[2].age = 30;

	for (int i = 0; i < 3; i++)
	{
		printf("%s - %d\n", people[i].name, people[i].age);
	}
}

//구조체 변수의 값 출력 함수
void output(struct Student S)
{
	printf("이름 : %s\n", S.name);
	printf("국어 : %d\n", S.kor);
	printf("영어 : %d\n", S.eng);
	printf("평균 : %.1lf\n", S.aver);
	printf("\n");
}*/

//이름, 나이를 한 번에 저장하는 자료형 설계
/*struct Person
{
	char* name;
	int age; //!!!변수 아님!!!
};

void main()
{
	int a = 10;
	int* p = &a;

	printf("a : %d\n", *p);

	struct Person person;
	person.name = "Sam";
	person.age = 20;

	struct Person* pp = &person;
	printf("name : %s\n", (*pp).name); //dot연산자가 *보다 우선순위, 괄호필요
	printf("age : %d\n", (*pp).age); 
	
	(*pp).age = 25;
	printf("변경된 age : %d\n", (*pp).age);

	pp->name = "Robin"; //(*pp).name = "Robin;
	pp->age = 30;
	printf("%s : %d\n", pp->name, pp->age);
}*/

struct Person
{
	char* name;
	int age;
};

void main()
{
	struct Person* p = malloc(sizeof(struct Person)); 
	//malloc() 괄호 안에 내가 만들 메모리의 바이트 수
	//구조체 변수 바이트 수 계산 특이, sizeof 이용해서 계산

	p->name = "Sam";
	p->age = 20;

	printf("name : %s\n", p->name);
	printf("age : %d\n", p->age);
	printf("\n");

	struct Person* p2;
	p2 = p;

	p2->age = 30;

	printf("name : %s\n", p->name);
	printf("age : %d\n", p->age); 
	printf("\n");
	//p2가 가르키는 곳의 값을 변경하고 p를 출력했지만
	//p가 가르키는 곳 = p2가 가르키는 곳, 따라서 같은 데이터를 공유
}