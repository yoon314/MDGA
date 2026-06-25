#include <stdio.h>
#include <stdlib.h>
#include "dimigo.h"

// 입학 전형을 선택하는 함수

int hello_select()
{
    int select_num;
    printf(
    "---------------------------------------------------------------------------\n"
    "                              입학 전형 선택\n"
    "---------------------------------------------------------------------------\n"
    "              1. 일반 전형                       2. 특별 전형\n"
    "---------------------------------------------------------------------------\n"
    "입력 => ");
    scanf("%d", &select_num);
    char ch;
    while ((select_num != 1) && (select_num != 2)){
        printf("다시 입력 => ");
        while (getchar() != '\n');
        scanf("%d", &select_num);
    }
    if (select_num == 1) {
        system("clear");
        printf("일반 전형 선택 확인\n");
        return 1;
    } else if (select_num == 2) {
        system("clear");
        printf("특별 전형 선택 확인\n");
        return 2;
    } else {
        system("clear");
        printf("Error\n");
        return 0;
    } 
}
