// min_max.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max(int a, int b, int c, int d, int e, int f) {
    int max = -10000;
    /*
    if (max < a) max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (max < d) max = d;
    if (max < e) max = e;
    if (max < f) max = f;
    */

    max = (max < a) ? a : max;
    max = (max < b) ? b : max;
    max = (max < c) ? c : max;
    max = (max < d) ? d : max;
    max = (max < e) ? e : max;
    max = (max < f) ? f : max;


    return max;
}

int find_min(int a, int b, int c, int d, int e, int f) {
    int min = 10000;
    /*
    if (min > a) min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (min > d) min = d;
    if (min > e) min = e;
    if (min > f) min = f;
    */
    min = (min > a) ? a : min;
    min = (min > b) ? b : min;
    min = (min > c) ? c : min;
    min = (min > d) ? d : min;
    min = (min > e) ? e : min;
    min = (min > f) ? f : min;


    return min;
}

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    int min = 10000, max = -10000;
    int result1 = 0, result2 = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);

    printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);

    printf("max = %d \nmin = %d",find_max(a, b, c, d, e, f),find_min(a, b, c, d, e, f));

    /*if (max < a) max = a;
    if (min > a) min = a;

    if (max < b) max = b;
    if (min > b) min = b;
    
    if (max < c) max = c;
    if (min > c) min = c;
    
    if (max < d) max = d;
    if (min > d) min = d;
    
    if (max < e) max = e;
    if (min > e) min = e;
    
    if (max < f) max = f;
    if (min > f) min = f;

    printf("max = %d\nmin = %d\n", max,min);
    */

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
