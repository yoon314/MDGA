#include <stdio.h>
#include "dimigo.h"
#include <stdlib.h>

// 자기 추천 완성도를 입력하는 함수

int special_self(){
    printf("수를 잘못 누르셨으면 b를 눌러주세요\n");
    printf(
    "---------------------------------------------------------------------------\n"
    "                            자기 추천 완성도 선택\n"   
    "---------------------------------------------------------------------------\n"
    "                1등급\n"
    "                2등급\n"
    "                3등급\n"
    "                4등급\n"
    "                5등급\n"
    "---------------------------------------------------------------------------\n"
    );
    int n;
    printf("숫자로 입력 => ");
    char ch;
    ch = getchar();
    if (ch == '\n'){
        scanf("%d", &n);
    }

    while ((n < 1) || (n > 5)){
        ch = getchar(); 
        while (getchar() != '\n');
        if (ch == 'b') {
            system("clear");
            return -1;
        } else {
            printf("숫자로 다시 입력 => ");
            scanf("%d", &n);
        }
    }
    system("clear");
    printf("자기추천 완성도: %d등급 선택 완료\n",n);

    return 60 - (n-1);
}