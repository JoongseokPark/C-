// 20221123_jsp_test4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max(int a, int b, int c) {
    int max = a;
    max = (a > max) ? a : max;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;
    return max;
}

int find_min(int f, int g, int h) {
    int min = f;
    min = (f < min) ? f : min;
    min = (g < min) ? g : min;
    min = (h < min) ? h : min;
    return min;
}

int find_median(int i, int j, int k) {
    int max = 0, min = 0, medi = 0;
    max = find_max(i, j, k);
    min = find_min(i, j, k);

    medi = (i != max || i != min) ? i : medi;
    medi = (j != max || j != min) ? j : medi;
    medi = (k != max || k != min) ? k : medi;

    return medi;
}

int main()
{
    int a = 0, b = 0, c = 0;
    int max = 0, min = 0, medi = 0;

    printf("숫자 세개 입력 :");
    scanf("%d %d %d", &a, &b, &c);

    max = find_max(a, b, c);
    min = find_min(a, b, c);
    medi = find_median(a, b, c);

    /*
    max = a;
    max = (a > max) ? a : max;
    max = (b > max) ? b : max;
    max = (c > max) ? c : max;

    min = a;
    min = (a < min) ? a : min;
    min = (b < min) ? b : min;
    min = (c < min) ? c : min;
    */

    printf("입력받은 세 숫자 = %d, %d, %d\n", a, b, c);
    printf("그 중 가장 큰 숫자 = %d\n그 중 가장 작은 숫자 = %d\n그 외의 숫자 = %d\n", max, min,medi);


    return 0;
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
