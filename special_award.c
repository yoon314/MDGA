#include <stdio.h>
#include <stdlib.h>
#include "dimigo.h"

// 대회 입상 전형 점수를 입력하는 함수

int special_award(){
    int contest,point;
    printf("수를 잘못 누르셨으면 b를 눌러주세요\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                                  특별 전형 입력\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                1. 한국정보올림피아드 2차 대회\n");
    printf("                2. 전국 중학생 IT 올림피아드 프로그래밍, 해킹방어\n");
    printf("                3. 전국 중학생 창업아이디어 경진대회\n");
    printf("\n");
    printf("                대상: 5, 금상: 4, 은상: 3, 동상: 2, 장려상: 1\n");
    printf("\n");
    printf("대회 선택 => ");
    scanf("%d",&contest);
    char ch;
    while ((contest < 1) || (contest > 3)){
        ch = getchar(); 
        while (getchar() != '\n');
        if (ch == 'b') {
            system("clear");
            return -1;
        } else {
            printf("대회 다시 입력 => ");
            scanf("%d", &contest);
        }
    }
    printf("입상 선택 => ");
    scanf("%d",&point);
    while ((point < 1) || (point > 5)){
        ch = getchar(); 
        if (ch == 'b') {
            system("clear");
            return -1;
        } else {
            printf("수상 다시 입력 => ");
            scanf("%d", &point);
        }
    }
    system("clear");

    char arr[5][50] = {"장려상","동상","은상","금상","대상"};

    if (contest == 1){
        printf("한국정보올림피아드 2차 대회 %s 입력 완료\n",arr[point-1]);
    }

    int tot = 0;
    if (contest == 3){
        if (point >= 3){
            tot += 60;
        } else if (point == 2){
            tot += 55;
        } else {
            tot += 51;
        }
    } else {
        if (point >= 4){
            tot += 60;
        } else if (point == 3){
            tot += 55;
        } else if (point == 2){
            tot += 51;
        } else {
            tot += 48;
        }
    }
    return tot;
}