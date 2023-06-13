#include <iostream>

//함수 오버로딩
/*void aaa()
{
	std::cout << "aaa" << std::endl;
}

void aaa(int n)
{
	std::cout << "bbb" << n << std::endl;
}

void aaa(double n)
{
	std::cout << "ccc" << n << std::endl;
}

void aaa(int n, int x)
{
	std::cout << n << "," << x << std::endl;
}*/

/*int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}*/

//함수 파라미터의 Default 값
/*void aaa(int n = 0) //파라미터로 값을 받지 못했을때 출력할 값(초기화 값), 오버로딩과 함께 사용 잘안함
{
	std::cout << "n : " << n << std::endl;
}*/

void main()
{
	//출력
	/*std::cout << "Hello\n";
	std::cout << 20 << "\n" << 10.5 << "\n";

	int a = 10;
	std::cout << a << "\n";
	std::cout << a + 3 << std::endl;
	std::cout << 10 + 3.14 << std::endl;*/

	//입력
	/*int a;
	std::cin >> a;
	std::cout << "input : " << a << std::endl;*/
	
	//함수 오버로딩
	/*aaa();
	aaa(10);
	aaa(3.14);
	aaa(10,20);*/

	//함수 오버로딩-> 자료형이 다른 덧셈의 기능을 모두 add라는 함수명을 이용가능
	/*int s = add(3, 5);
	std::cout << s << std::endl;

	double s = add(3.14, 5.55);
	std::cout << s << std::endl;*/

	/*aaa(10);
	aaa(20);
	aaa(); */
}