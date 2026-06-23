#include <stdio.h>
#include <stdlib.h>
#include "dimigo.h"

int cover_letter(){
    int point;
    printf("---------------------------------------------------------------------------\n");
    printf("                             자기소개서 완성도 선택\n");
    printf("---------------------------------------------------------------------------\n");
    printf("1등급\n");
    printf("2등급\n");
    printf("3등급\n");
    printf("4등급\n");
    printf("5등급\n");
    printf("숫자만 입력\n");
    printf("입력 => ");

    getchar();
    scanf("%d",&point);
    system("clear");
    printf("자기소개서 완성도: %c\n",point);

    return 20 - (point-1);



}