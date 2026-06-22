#include <stdio.h>
#include <stdlib.h>
#include "dimigo.h"

int cover_letter(){
    char point;
    printf("---------------------------------------------------------------------------\n");
    printf("                             자기소개서 완성도 선택\n");
    printf("---------------------------------------------------------------------------\n");
    printf("A\n");
    printf("B\n");
    printf("C\n");
    printf("D\n");
    printf("E\n");
    printf("입력 => ");

    getchar();
    scanf("%c",&point);
    system("clear");
    printf("자기소개서 완성도: %c\n",point);

    if ((point >= 97) && (point <= 122)) return 20 - (point-97);
    if ((point >= 65) && (point <= 90)) return 20 - (point-65);



}