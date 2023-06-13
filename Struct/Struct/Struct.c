#include <stdio.h>
#include <stdlib.h>

/*//�̸�, ����, ����, ��� �����͸� �� ���� ������ �� �ִ� ���ο� �ڷ��� ����
struct Student
{
	//!!!!!���� ����� �ƴ�!!!!!, ���ο� �ڷ����� ������ ��, �޸� no
	//������ 6���� �ڷ����� �����ص� ������ �������� ������ ������ ������ ���� �Ͱ� ����
	//���� �ʱ�ȭ �� ���� �ִ� ���� �Ұ���
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

//�̸�, ����, �ּ�[����,����]�� �����ϴ� �Ǵٸ� �ڷ���
struct Person
{
	char* name;
	int age;
	struct Address address; //ǥ����� �߿��� ����(��ҹ��� ����)
};

void output(struct Student S);

void main()
{
	//���� ����
	//int a; //�ڷ��� ������
	
	//����ü ����
	struct Student stu1; //(����ü�� ����) �ڷ��� ������
	stu1.name = "Sam"; //������.������� (���ٿ����� �̿�, dot������)
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

	//Person �ڷ����� ����ü ���� �����
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

	//����ü�� ���� �ڷ����� �迭�� �������� �� ���� ���� �� ����
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

//����ü ������ �� ��� �Լ�
void output(struct Student S)
{
	printf("�̸� : %s\n", S.name);
	printf("���� : %d\n", S.kor);
	printf("���� : %d\n", S.eng);
	printf("��� : %.1lf\n", S.aver);
	printf("\n");
}*/

//�̸�, ���̸� �� ���� �����ϴ� �ڷ��� ����
/*struct Person
{
	char* name;
	int age; //!!!���� �ƴ�!!!
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
	printf("name : %s\n", (*pp).name); //dot�����ڰ� *���� �켱����, ��ȣ�ʿ�
	printf("age : %d\n", (*pp).age); 
	
	(*pp).age = 25;
	printf("����� age : %d\n", (*pp).age);

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
	//malloc() ��ȣ �ȿ� ���� ���� �޸��� ����Ʈ ��
	//����ü ���� ����Ʈ �� ��� Ư��, sizeof �̿��ؼ� ���

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
	//p2�� ����Ű�� ���� ���� �����ϰ� p�� ���������
	//p�� ����Ű�� �� = p2�� ����Ű�� ��, ���� ���� �����͸� ����
}