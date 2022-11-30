// final_jsp_test5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int find_max(int a, int b, int c) {
    int max = 0;

    max = a;
    max = (max < a) ? a : max;
    max = (max < b) ? b : max;
    max = (max < c) ? c : max;

    return max;
}

double find_max_double(double a, double b, double c) {
    double max = 0;

    max = a;
    max = (max < a) ? a : max;
    max = (max < b) ? b : max;
    max = (max < c) ? c : max;

    return max;
}

int find_min(int a, int b, int c) {
    int min = 0;

    min = a;
    min = (min > a) ? a : min;
    min = (min > b) ? b : min;
    min = (min > c) ? c : min;

    return min;
}

double find_min_double(double a, double b, double c) {
    double min = 0;

    min = a;
    min = (min > a) ? a : min;
    min = (min > b) ? b : min;
    min = (min > c) ? c : min;

    return min;
}

int find_median(int a, int b, int c) {
    int medi = 0;
    int max = find_max(a, b, c);
    int min = find_min(a, b, c);

    medi = a;
    medi = (a != max && a != min) ? a : medi;
    medi = (b != max && b != min) ? b : medi;
    medi = (c != max && c != min) ? c : medi;

    return min;
}

int sum(int a[]) {
    int sum = 0;
    int length = sizeof(a) / 4;


    for (int i = 0; i < length; i++) {
        sum += a[i];
        printf("%d \n", sum);
    }
    return sum;
}

int main()
{
    srand(time(NULL));
    int a = 0, b = 0, c = 0;
    int max = 0, min = 0, medi = 0;
    double mean = 0;
    int random[10] = { 0 };
    int random2;
    int i = 0, j = 0, k = 0;
    int total = 0;
    int distance_min = 9999, distance_tmp = 0;
    int distance_max = 0;
    int closest = 0, farest = 0;
    int answer = 0;
    int correct = 0;
    int count = 10;

    printf("숫자 세개 입력 :");
    scanf("%d %d %d", &a, &b, &c);

    max = find_max(a, b, c);
    printf("%d\n", max);
    min = find_min(a, b, c);
    printf("%d\n", min);
    medi = find_median(a, b, c);

    while (k < 10) {    //5.1번
        random[k] = rand() % max + min;
        printf("%d\n", random[k]);
        k++;
    };

    for (int i = 0; i < 10; i++) {
        printf("%d ", random[i]);
        total += random[i];
    }

    // 5.2번
    printf("\n총합은 %d\n", total);
    
    mean = double(total) / 10;
    printf("평균은 %lf\n", mean);


    /*
    for (int i = 0; i < 10; i++) {  //5.3번
        if (mean - random[i] < 0) distance_tmp = random[i] - mean;
        else if (mean - random[i] > 0) distance_tmp = mean - random[i];

        if (distance_min > distance_tmp) {
            distance_min = distance_tmp;
            closest = random[i];
        }
        else if (distance_max < distance_tmp) {
            distance_max = distance_tmp;
            farest = random[i];
        }
    }
     printf("평균에서 가장 가까운 숫자 = %d\n평균에서 가장 먼 숫자 = %d\n", closest, farest);
    */
   
    //5.3번
    distance_tmp = find_max_double(fabs(mean - a), fabs(mean - b), fabs(mean - c));
    printf("%lf\n", distance_tmp);
    if (distance_tmp == fabs(mean - a)) farest = a;
    if (distance_tmp == fabs(mean - b)) farest = b;
    if (distance_tmp == fabs(mean - c)) farest = c;
    distance_tmp = find_min_double(fabs(mean - a), fabs(mean - b), fabs(mean - c));
    printf("%lf\n", distance_tmp);
    if (distance_tmp == fabs(mean - a)) closest = a;
    if (distance_tmp == fabs(mean - b)) closest = b;
    if (distance_tmp == fabs(mean - c)) closest = c;

    printf("입력받은 수 중\n평균에서 가장 가까운 숫자 = %d\n평균에서 가장 먼 숫자 = %d\n", closest, farest);

    
    random2 = rand() % 10;

    //5.4번
    printf("%d 부터 %d까지의 랜덤한 숫자가 생성되었습니다\n그 숫자를 10번 안에 맞춰주세요\n\n",a,c);
    do {
        printf("정답 입력 :");
        scanf("%d",&answer);

        if (answer < random[random2]) printf("좀 더 큰 숫자!\n");
        else if (answer > random[random2]) printf("좀 더 작은 숫자!\n");

        if (answer == random[random2]) {
            printf("축하합니다 정답을 맞추셨습니다\n");
            break;
        }

        count--;
        printf("남은 기회는 %d번!!\n\n", count+1);
        if (count < 0) {
            printf("\n\n\n\n10번동안 못 맞췄다\n\n\n\n");
            break;
        }
    } while (true);

    printf("랜덤한 숫자는 %d입니다\n", random[random2]);

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
