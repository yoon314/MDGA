// 홍의준: UI
// 최정우: 서기
#include <stdio.h>
#include <stdlib.h>
#include "dimigo.h"

int main(int argc, char const *argv[])
{
    printf(
    "  =====================================================================\n"
    "     ■■■■■■■      ■■■■   ■■      ■■   ■■■■     ■■■■■■        ■■■■  \n"
    "     ■■     ■■     ■■    ■■■    ■■■    ■■    ■■      ■■    ■■    ■■ \n"
    "     ■■      ■■    ■■    ■■■■  ■■■■    ■■    ■■           ■■      ■■\n"
    "     ■■      ■■    ■■    ■■  ■■  ■■    ■■    ■■    ■■■■   ■■      ■■\n"
    "     ■■     ■■     ■■    ■■      ■■    ■■    ■■      ■■    ■■    ■■ \n"
    "     ■■■■■■■      ■■■■   ■■      ■■   ■■■■     ■■■■■■        ■■■■\n\n"
    "   -------------------------------------------------------------------\n"
    "                  [ 예비 디미고1학년 분들을 환영합니다! ]\n"
    "   -------------------------------------------------------------------\n"
    "                                시작하기 ↵\n"
    "  =====================================================================\n");

    char ch = getchar();
    if (ch == '\n') {
        system("clear");
    }

    int select;
    RESET_POINT_1:
    select = hello_select(); // 1: 일전, 2: 특전
    printf("수를 잘못 누르셨으면 b를 눌러주세요");

    ch = getchar();

    if (ch == 'b') {
        printf("입력값을 초기화합니다.\n");
        system("clear");
        goto RESET_POINT_1;
    }

    float normal_score;
    RESET_POINT_2:
    normal_score = sub_grade(); // 일전 점수
    printf("수를 잘못 누르셨으면 b를 눌러주세요");

    ch = getchar();

    if (ch == 'b') {
        printf("입력값을 초기화합니다.\n");
        system("clear");
        goto RESET_POINT_2;
    }

    float senggibu;
    RESET_POINT_3:
    senggibu = seng_gi_bu(); // 생기부 점수
    printf("수를 잘못 누르셨으면 b를 눌러주세요");

    ch = getchar();

    if (ch == 'b') {
        printf("입력값을 초기화합니다.\n");
        system("clear");
        goto RESET_POINT_3;
    }
    

    if (select == 2){
        int spec;
        RESET_POINT_4:
        spec = spec_select(); // 1. 대회입상, 2. 자기추천
        printf("수를 잘못 누르셨으면 b를 눌러주세요");

        ch = getchar();

        if (ch == 'b') {
            printf("입력값을 초기화합니다.\n");
            system("clear");
            goto RESET_POINT_4;
        }

        int coverletter;
        RESET_POINT_5:
        coverletter = cover_letter();
        printf("수를 잘못 누르셨으면 b를 눌러주세요");

        ch = getchar();

        if (ch == 'b') {
            printf("입력값을 초기화합니다.\n");
            system("clear");
            goto RESET_POINT_5;
        }

        if (spec == 1){
            int award;
            RESET_POINT_6:
            award = spec_award();
            printf("수를 잘못 누르셨으면 b를 눌러주세요");

            ch = getchar();

            if (ch == 'b') {
                printf("입력값을 초기화합니다.\n");
                system("clear");
                goto RESET_POINT_6;
            }
            printf("총 160점 중 %.3f점\n",normal_score/2 + senggibu + coverletter + award);
        } else if (spec == 2){
            int award;
            RESET_POINT_7:
            award = spec_self();
            printf("수를 잘못 누르셨으면 b를 눌러주세요");

            ch = getchar();

            if (ch == 'b') {
                printf("입력값을 초기화합니다.\n");
                system("clear");
                goto RESET_POINT_7;
            }
            printf("총 160점 중 %.3f점\n",normal_score/2 + senggibu + coverletter + award);
        }
    } else {
        printf("총 140점 중 %.3f점\n",normal_score+senggibu);
    }
}