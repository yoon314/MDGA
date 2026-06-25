#include <stdio.h>
#include <stdlib.h>
#include "dimigo.h"

// 특별 전형 중 대회 입상과 자기추천 하나를 선택하는 함수

char ch;
int special_select()
{
    int select_num;
    printf("수를 잘못 누르셨으면 b를 눌러주세요\n");
    printf(
    "---------------------------------------------------------------------------\n"
    "                              특별 전형 선택\n"
    "---------------------------------------------------------------------------\n"
    "              1. 대회 입상                       2. 자기 추천\n"
    "---------------------------------------------------------------------------\n"
    "입력 => ");
    scanf("%d", &select_num);
    ch = getchar();

    while ((select_num != 1) && (select_num != 2)){
        ch = getchar();
        while (getchar() != '\n');
        if (ch == 'b') {
            system("clear");
            return -1;
        } else {
            printf("다시 입력 => ");
            scanf("%d", &select_num);
        }
    }
    if (select_num == 1) {
        system("clear");
        printf("대회 입상 선택 확인\n");
        return 1;
    } else if (select_num == 2) {
        system("clear");
        printf("자기 추천 선택 확인\n");
        return 2;
    } else {
        system("clear");
        printf("Error");
        return 0;
    } 
}