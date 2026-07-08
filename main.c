#include <stdio.h>
#include <stdlib.h>
#include "dimigo.h"

// 전체 코드를 실행하는 함수

float tot;
int tot2;

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
    select = hello_select(); // 1: 일전, 2: 특전

    system("clear");
    float normal_score;
    RESET_POINT_2:
    normal_score = subject_grade(); // 일전 점수

    if ((int)normal_score == -1){
        system("clear");
        goto RESET_POINT_2;
    }

    float senggibu;
    RESET_POINT_3:
    senggibu = seng_gi_bu(); // 생기부 점수

    ch = getchar();

    if (ch == 'b') {
        system("clear");
        goto RESET_POINT_3;
    }
    

    if (select == 2){
        int spec;
        RESET_POINT_4:
        spec = special_select(); // 1. 대회입상, 2. 자기추천

        if (spec == -1){
            system("clear");
            goto RESET_POINT_4;
        }


        int coverletter;
        RESET_POINT_5:
        coverletter = cover_letter();

        if (coverletter == -1) {
            system("clear");
            goto RESET_POINT_5;
        }

        int award;
        if (spec == 1){
            RESET_POINT_6:
            award = special_award();

            if (award == -1) {
                system("clear");
                goto RESET_POINT_6;
            }
            system("clear");
        
        } else if (spec == 2){
            RESET_POINT_7:
            award = special_self();

            if (award == -1) {
                system("clear");
                goto RESET_POINT_7;
            }
        }
        tot = normal_score/2 + senggibu + coverletter + award;
        tot2 = 160;
    } else {
        tot = normal_score+senggibu;
        tot2 = 140;
    }
    system("clear");
    printf(
        "  =====================================================================\n"
        "     ■■■■■■■      ■■■■   ■■      ■■   ■■■■     ■■■■■■        ■■■■  \n"
        "     ■■     ■■     ■■    ■■■    ■■■    ■■    ■■      ■■    ■■    ■■ \n"
        "     ■■      ■■    ■■    ■■■■  ■■■■    ■■    ■■           ■■      ■■\n"
        "     ■■      ■■    ■■    ■■  ■■  ■■    ■■    ■■    ■■■■   ■■      ■■\n"
        "     ■■     ■■     ■■    ■■      ■■    ■■    ■■      ■■    ■■    ■■ \n"
        "     ■■■■■■■      ■■■■   ■■      ■■   ■■■■     ■■■■■■        ■■■■\n\n"
        "   -------------------------------------------------------------------\n"
        "                            총 %d점 중 %.3f점\n"
        "                           프로그램을 종료합니다\n"
        "  =====================================================================\n",tot2, tot);

    return 0;
}