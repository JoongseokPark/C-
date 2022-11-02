// 2022_11_02_jsp_test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int multi(int num1, int num2);
double div(int num1, int num2);
void showaddresult(int num);
int readnum(void);
void how(void);
void noreturn(int num);

int main()
{
    int data = 0;
    int num1 = 34, num2 = 15;

    //num1 = printf("12345\n");
    //num2 = printf("What I love is my home\n");

    printf("%d %d \n", num1, num2);
    printf("%d\n", add(num1, num2));
    printf("%d\n", sub(num1, num2));
    printf("%d\n", multi(num1, num2));
    printf("%lf\n", div(num1, num2));
    
    showaddresult(num1);
    printf("입력된 숫자 = %d\n\n", readnum());
    how();

    noreturn(7);

    //data = printf("test\n");
    //printf("%d\n", data);

    return 0;
}

int add(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int sub(int num1, int num2) {
    int result = num1 - num2;
    return result;
}

int multi(int num1, int num2) {
    int result = num1 * num2;
    return result;
}

double div(int num1, int num2) {
    double result = double(num1) / double(num2);
    return result;
}

void showaddresult(int num) {
    printf("덧셈 결과 :: %d \n\n", num);
}

int readnum(void) {
    int num;
    scanf("%d", &num);
    return num;
}

void how(void) {
    printf("일단 출력\n");
    printf("또 출력\n\n");
}

void noreturn(int num) {
    if (num < 0) {
        return;
    }
    else if (num > 0) {
        printf("양수! \n");
    }
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
