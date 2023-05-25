//로또 만들기 
//랜덤, 배열 활용

#include <stdio.h>
#include <stdlib.h> //랜덤 함수
#include <time.h> //시간 값 
#include <math.h> //거듭제곱 계산

void Lottery_Gene(int* num); //로또 생성
void posiblility_check(int* Lottery, int* Guess); //확률 계산

int main()
{
    srand(unsigned(time(NULL))); 
    //랜덤함수에 들어가는 입력을 시간으로 설정
    int Lottery[6] = { 0 }; //로또 결과가 나올 배열 생성
    int Guess[6] = { 0 }; //정답을 예측할 배열 생성

    printf("로또 번호를 맞춰주세요\n");

    for (int i = 0; i < 6; i++) scanf_s("%d", &Guess[i]);
    //사람이 로또 번호를 맞춤
    Lottery_Gene(Lottery);
    //자동으로 1부터 46까지의 로또 번호 생성

    for (int i = 0; i < 6; i++)printf("%d ", Lottery[i]);
    //로또 번호 출력
    printf("\n");
    for (int i = 0; i < 6; i++)printf("%d ", Guess[i]);
    //사람이 맞춘 로또 번호 출력
    posiblility_check(Lottery, Guess);
}

void Lottery_Gene(int* num) {
    //중복되지 않는 번호를 얻는 기능 추가
    int temp = 0;
    bool is_there_same = 0;
    for (int i = 0; i < 6; i++) { //6개의 변수를 만든다
        temp = rand() % 46 + 1; //temp는 1~46의 랜덤값이다
        for (int j = 0; j < i; j++) { 
            if (temp == num[j]) { 
            //temp가 이미 num에 존재하는 값이라면
                i--; //반복횟수를 하나 늘리고
                is_there_same = true; //중복이라는 표시를 한다 
                break;
            }
        }
        if (is_there_same == false) num[i] = temp;
        //중복 표시가 없다면 temp를 num에 추가한다
        is_there_same = false;
        //중복 표시를 false로 되돌린다 
    }
}

void posiblility_check(int* Lottery, int* Guess) {
    //당첨되었을 때 그 확률을 보여줌
    double chance = 0.0;
    int correct = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (Guess[i] == Lottery[j]) {
                correct++;
                break;
            }
        }
    }
    if (correct > 0) {
        chance = 100 * (pow(0.021739, correct)); //(1/4)^correct 
        printf("\n%d개의 숫자가 맞았습니다.\n해당 확률은 %f%%입니다.\n", correct, chance);
    }
    else printf("\n한개도 맞지 않았습니다.\n");
}

