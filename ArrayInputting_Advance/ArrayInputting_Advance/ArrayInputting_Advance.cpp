#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Array_Print(int* num, int length);
void Array_Input(int* num, int length);
void Array_Sorting(int* num, int length);

int main()
{
	srand((unsigned)time(NULL));

	int num[10] = { 0 }; //10의 크기를 가진 배열 생성
	int length = 10; //배열의 길이를 변수로 지정
	for (int i = 0; i < length; i++) num[i] = rand() % 100 + 1;
	int input = 0, position = 0; //입력받은 값을 저장하는 변수

	Array_Print(num, length);

	
	Array_Sorting(num,length);
	Array_Print(num, length);
	
}

void Array_Print(int* num,int length) { //배열 출력하는 함수
	printf("\n\n"); //줄넘김
	for (int i = 0; i < length; i++) printf("%d\t", num[i]); 
	printf("\n\n"); //줄넘김
}

void Array_Input(int* num, int length) { // 위치와 값 입력받기
	int value, position;
	printf("[배열에 넣을 숫자, 넣을 위치] : ");
	scanf_s("%d %d", &value, &position);
	// 위치와 값 입력받기

	int temp[2] = { num[position],0 }; //입력받은 위치에 이미 있는 값을 저장
	num[position] = value; //입력받은 위치에 입력받은 값을 대입

	//입력받은 위치 뒤로 값들이 하나씩 밀린다
	for (int i = ++position; i < length; i++) { 
		temp[1] = num[i]; //num[i]의 값을 변수에 빼두기 
		num[i] = temp[0]; //저장해두었던 값을 현재 위치에 넣기 
		temp[0] = temp[1]; //빼둔 값을 0번째에 넣기
	}
}

void Array_Sorting(int* num, int length) { //배열의 내림차순 정렬
	int temp[2] = { 0 }; //temp[0]은 찾는 최대값, temp[1]은 변수 중간 저장
	int where = 0;

	for (int i = 0; i < length; i++) {

		where = i; //반복할 때마다 최대값이 있던 위치 초기화
		temp[0] = 0; //반복할 때마다 최대값을 0으로 초기화

		for (int j = i; j < length; j++) {

			if (num[j] > temp[0]) { //num[j]의 값이 최대값보다 크다면
				temp[0] = num[j]; //최대값을 num[j]로 바꾼다
				where = j; //최대값이 있던 위치를 저장한다
			}

		}

		temp[1] = num[i]; //바꿀 위치에 있는 값을 temp[1]에 빼둔다
		num[i] = temp[0]; //위의 반복에서 찾은 최대값을 num[i]에 넣는다
		num[where] = temp[1]; //temp[i]에 빼두었던 값을 최대값이 있던 위치에 넣는다 
	}
}