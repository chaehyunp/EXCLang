#include <stdio.h>

void main()
{
	/*
	""안에서 그대로 출력되지 않는 것
	1. 큰따옴표("): ERROR
	2. 역슬래시(\): ESCPE문자 eg.\n 줄바꿈, \" 큰따옴표 사용가능
	3. 퍼센트(%): 서식문자 eg.%d, %f, %c, %s 
	*/
	printf("디버그하지 않고 시작, \"컨츄롤 F5!\"\n");
	printf("줄을 바꿔라\n");
	printf("역슬래시(\\) 쓰고 싶으면 '두 번' 입력\n");

	/*
	C언어 Data 종류 4가지
	1.정수숫자(%d): 10, 273, -5 (10진수 %d, 8진수 %o, 16진수 %x)
	2.실수숫자(%f): 3.14,-8.0
	3.한 문자(%c): 'A', '+', '!' (ASCII코드,한글은 문자열)
	4.문자열(%s): "HELLO", "ㄱ" 
	*/
	printf("\n");
	printf("안녕하세요, %s입니다.\n","문자열");
	printf("이건 character, %c\n", 'C');
	printf("3+5=%d\n", 3 + 5); //1형식은 내가 쓴 그대로 나옴, 2형식은 연산가능
	printf("안녕하세요, %s님. %d일은 납부일입니다%c\n", "김이박", 21, '!'); //서식문자가 두 개 이상일 경우 출력data 차례로 사용, 형태와 순서가 맞지않으면 이상하게 출력되거나 출력되지 않음

	/*출력값을 주지 않을 경우*/
	printf("\n");
	printf("쓰레기값: %d\n"); //뒤에 출력값을 주지 않으면 쓰레기값이 나옴(garbage value)
	/*서식문자를 쓰지 않을 경우*/
	printf("서식문자를 안써봅시다\n", 8); //서식문자를 주지않으면 출력 data는 무시됨

	/*숫자정렬: field 폭*/
	printf("\n");
	printf(" %3d  %3d  %3d\n", 20, 30, 50);
	printf(" %3d  %3d  %3d\n", 2, 3, 5);
	printf(" %3d  %3d  %3d\n", 200, 300, 500); //정렬을 맞추기 위해서 3칸 주기 (기본 우측정렬)

	printf(" %-3d  %-3d  %-3d\n", 20, 30, 50);
	printf(" %-3d  %-3d  %-3d\n", 2, 3, 5);
	printf(" %-3d  %-3d  %-3d\n", 200, 300, 500); //좌측정렬

	printf(" %03d  %03d  %03d\n", 20, 30, 50);
	printf(" %03d  %03d  %03d\n", 2, 3, 5);
	printf(" %03d  %03d  %03d\n", 200, 300, 500); //3칸주기에 남는공간 0으로 채우기

	/*정렬예제: 디지털 시간 출력*/
	printf("\n");
	printf("%d:%d:%d\n", 13, 15, 24);
	printf("%d:%d:%d\n", 13, 5, 4); //시간의 값이 바뀔 때마다 공간이 변함
	printf("%02d:%02d:%02d\n", 13, 5, 4); //기본적으로 두 자리 주고, 남는 공간 0으로 채우기

	printf("\n"); //대괄호는 필드폭을 시각적으로 보기위해 사용했음
	printf("[%5c]\n", 'C'); //문자에서도 가능
	printf("[%5.2f]\n", 3.14); //전체 필드폭 5칸, 소수점 아래로 2칸
	printf("[%.2f]\n", 3.14); //필드폭은 설정하지 않고 소수점 아래만 지정
	
	/*컴퓨터는 한 문자(ASCII코드)를 숫자라고 인식(%는 일종의 필터역할)*/
	printf("\n"); 
	printf("%c\n", 'A');
	printf("%c\n", 65); //65를 캐릭터로 필터링해서 A로 출력
	printf("%d\n", 'A'); //'A'를 정수형으로 필터링해서 65로 출력
	printf("%d\n", 65); 
	printf("%c\n", 'A'+32); //대문자 +32 = 소문자
	printf("%d\n", '7'-48); //문자 '7'
	
	printf("\n");
	printf("%d\n", 237); //10진수
	printf("%d\n", 0237); //8진수 (옥타를 형상화하여 0을 앞에 붙임)
	printf("%d\n", 0x237); //16진수 (헥사를 형상화하여 0x를 앞에 붙임)
	printf("%d\n", 0xFF0000); //ff는 문자열이 아닌 16진수임
}