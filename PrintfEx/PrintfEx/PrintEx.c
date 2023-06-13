#include <stdio.h>

void main()
{
	//ctrl + shift + / 선택영역 주석

	//Ex2-3
	printf("\tHello C!\n");
	printf("Hello world!\n");
	printf("큰따옴표:\"\"\n");
	printf("작은따옴표:''\n");
	printf("역슬래시:\\\n");

	//Ex2-4
	printf("\n");
	printf("%d더하기 %d는 %d입니다.\n", 3, 5, 3+5);
	printf("%d-%d=%d입니다.\n", 3, 5, 3 - 5);

	//Ex2-5
	printf("\n");
	printf("10진수 : %d는 16진수 : %x, 8진수 : %o입니다.\n", 50, 50, 50);
	printf("10진수 : %d는 16진수 : %x, 8진수 : %o입니다.\n", -50, -50, -50);

	//Ex2-7
	printf("\n");
	printf("%c를 대문자로 표현하면 %c입니다.\n", 65+32, 65);
	printf("%d 곱하기 %d은 %d입니다.\n", 2, 3, 2*3 );

	//Ex2-9
	printf("\n");
	printf("%f\n", 0.000123);
	printf("%f\n", 0.0001236);
	printf("%e\n", 0.000123);
	printf("%E\n", 0.0001236);
	printf("%g\n", 0.000123);
	printf("%G\n", 0.000123456);

	//Ex2-10
	printf("\n");
	printf("%03d,%03d,%03d\n", 1, 20, 300);
	printf("%-3d,%-3d,%-3d\n", 1, 20, 300);
	printf("%+3d,%+3d,%+3d\n", 1, 20, 300);
	printf("%+3d,%+3d,%+3d\n", 1, 20, -300);
	printf("%+-6d,%+-6d,%+-6d\n", 1, 20, -300);

	//연습문제1
	printf("\n");
	printf("%3c\n", '*');
	printf("%4s\n", "***");
	printf("%5s\n", "*****");
	printf("%4s\n", "***");
	printf("%3c\n", '*');

	//연습문제2
	printf("\n");
	printf("%d * %d = %d\n", 2, 1, 2 * 1);
	printf("%d * %d = %d\n", 2, 2, 2 * 2);
	printf("%d * %d = %d\n", 2, 3, 2 * 3);
	printf("%d * %d = %d\n", 2, 4, 2 * 4);
	printf("%d * %d = %d\n", 2, 5, 2 * 5);
	printf("%d * %d = %d\n", 2, 6, 2 * 6);
	printf("%d * %d = %d\n", 2, 7, 2 * 7);
	printf("%d * %d = %d\n", 2, 8, 2 * 8);
	printf("%d * %d = %d\n", 2, 9, 2 * 9);

	//printf 문제1
	printf("\n");
	printf("%s%s%s\n%s %s %s\n%s  %s  %s\n","박", "채", "현", "박", "채", "현", "박", "채", "현");

	//printf 문제2
	printf("\n");
	printf("%s : %-s\n", "이름", "박채현");
	printf("%s : %s\n", "주소", "서울 강동구 상일동");
	printf("%s : %s\n", "전화번호", "010-3707-1312");

	//printf 문제3
	printf("\n");
	printf("%s %s\n", "제 이름은", "홍길동입니다.");
	printf("%s %d%s\n", "제 나이는", 20, "살이고요.");
	printf("%s %d - %d %s\n", "제가 사는 곳의 번지수는", 123, 456, "입니다.");

	//printf 문제4
	printf("\n");
	printf("%d * %d = %d\n", 4, 5, 4 * 5);
	printf("%d * %d = %d\n", 7, 9, 7 * 9);

	printf("\n");
	printf("문자열 출력 : [%20s]\n", "대한민국"); //ASCII코드(한 문자, 한 칸)를 제외한 문자는 두 칸
	printf("문자열 출력 : [%20s]\n", "대한민국대한민국대한민국"); //필드폭은 '최소확보값', 넘어간다고 잘리지 않음
	printf("문자열 출력 : [%-20s]\n", "대한민국");
	printf("문자 출력 : [%10c]\n", 'a');
	printf("문자 정수값 출력 : [%-10d]\n", 'a'); //문자 정수값 ASCII를 말함
	printf("오른쪽 정렬 : [%10d]\n", 1234);
	printf("0 삽입 : [%010d]\n", 1234);
	printf("음수의 0 삽입 : [%010d]\n", -1234);
	printf("부동소수점 출력 : [%8.2f]\n", 123.4567); //부동소수점 = 실수 = float , 고정소수점 = 정수 = integer
	printf("부동소수점 출력 : [%-8.2f]\n", 123.4567); //자리수를 끊으면 반올림됨
	printf("부동소수점 출력 : [%10.2f]\n", 0.0012345);
	printf("부동소수점 출력 : [%10.3e]\n", 0.0012345); //f는 반올림 5이상, e는 반올림 6이상
	printf("부동소수점 출력 : [%10.7g]\n", 0.00012345); //g는 소수점 아래 갯수를 유효숫자만 헤아림, 0은 유효숫자가 아님
}