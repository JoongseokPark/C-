#include <stdio.h>

#define BRIGHT 1 //색깔 출력 부분
#define RED 34 //색깔 출력 부분
#define BG_BLACK 40 //색깔 출력 부분

//배열을 만든 뒤에 숫자를 입력받아
//배열에 넣는 프로그램

int main()
{
	int num[10] = {0}; //10의 크기를 가진 배열 생성
	int length = 10; //배열의 길이를 변수로 지정
	int input = 0, position = 0; //입력받은 값을 저장하는 변수

	printf("\n\n"); //줄넘김
	printf("배열의 길이 : %d\n", length); //배열의 정보 보여주기
	printf("%c[%d;%d;%dm", 0x1B, BRIGHT, RED, BG_BLACK); //출력 색 바꾸기
	for (int i = 0; i < length; i++) printf("%d\t", num[i]); //위와 같음
	printf("%c[%dm", 0x1B, 0);
	printf("\n\n"); //줄넘김

	while (true) { //무한 반복
		printf("[배열에 넣을 숫자, 넣을 위치] : ");
		scanf_s("%d %d", &input, &position); //넣을값과 위치 입력받기

		num[position] = input; //배열의 위치에 값 대입

		printf("\n"); //줄넘김
		printf("%c[%d;%d;%dm", 0x1B, BRIGHT, RED, BG_BLACK);
		for (int i = 0; i < length; i++) printf("%d\t",num[i]); //배열 출력하기
		printf("%c[%dm", 0x1B, 0);
		printf("\n\n"); //줄넘김
	}

}
