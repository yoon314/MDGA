#include <stdio.h>
#include <stdlib.h>
#include "dimigo.h"

// 생기부 점수를 계산하는 함수

float seng_gi_bu(){
    float arr[5];
    printf("---------------------------------------------------------------------------\n");
    printf("                1. 미인정 결석 횟수     : ");
    scanf("%f",&arr[0]);
    printf("                2. 3년간 독후감 총 횟수 (독서활동은 학년당 최대 10권까지 인정)          : ");
    scanf("%f",&arr[1]);
    printf("                3. 임원 활동 횟수       : ");
    scanf("%f",&arr[2]);
    printf("                4. 교내 수상실적 횟수 (수상실적은 한 학기에 한 개씩만 인정)    : ");
    scanf("%f",&arr[3]);
    printf("---------------------------------------------------------------------------\n");
    system("clear");
    printf("생기부 점수 입력 완료\n");
    
    if (arr[0] <= 8) arr[0] *= -1;
    else arr[0] = -8;

    if (arr[1] <= 20) arr[1] = 2.0 + 0.2*arr[1];
    else arr[1] = 6.0;

    if (arr[2] <= 3) arr[2] = 2.1 + 0.3*arr[2];
    else arr[2] = 3.0;

    if (arr[3] <= 5) arr[3] = 1.5 + 0.3*arr[3];
    else arr[3] = 3.0;

    arr[4] = 0.0;
    for (int i=0;i<4;i++){
        arr[4] += arr[i];
    }


    return 8 + arr[4];
}