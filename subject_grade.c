#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dimigo.h"

// 교과점수를 계산하는 함수

float subject_grade(){
    int arr[5][6];
    char text[][50] = {"국어","수학","영어","사회","과학"};
    int grade[5][5];
    int sum_grade[5][2];
    int sum_point[5][2];

    printf("수를 잘못 누르셨으면 3000을 입력해주세요\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                              교과 점수 입력\n");
    printf("---------------------------------------------------------------------------\n");

    memset(sum_grade,0,sizeof(sum_grade));
    memset(sum_point,0,sizeof(sum_point));

    int cur = 2;
    int next = 1;
    int temp;
    int ch;
    for (int i=1;i<6;i++){
        for (int j=1;j<6;j++){
            printf("                %d학년 %d학기 %s 점수: ",i/2+1,cur,text[j-1]);
            ch = getchar();
            if (ch == 'b'){
                return -1;
            } else {
                scanf("%d", &arr[i-1][j-1]);
            }
            
            while (arr[i-1][j-1] > 100) {
                if (arr[i-1][j-1] == 3000){
                    return -1;
                } else {
                    printf("다시 입력하세요 (0 ~ 100 사이의 숫자만 가능)\n");
                    printf("                %d학년 %d학기 %s 점수: ",i/2+1,cur,text[j-1]);
                    scanf("%d", &arr[i-1][j-1]);
                    ch = getchar();
                    if (ch == 'b'){
                        return -1;
                    }
                }
            }
            if (arr[i-1][j-1] >= 90) grade[i-1][j-1] = 5;
            else if (arr[i-1][j-1] >= 80) grade[i-1][j-1] = 4;
            else if (arr[i-1][j-1] >= 70) grade[i-1][j-1] = 3;
            else if (arr[i-1][j-1] >= 60) grade[i-1][j-1] = 2;
            else if (arr[i-1][j-1] < 60) grade[i-1][j-1] = 1;
        }
        printf("\n");
        temp = cur;
        cur = next;
        next = temp;
        for (int j=0;j<3;j++){
            sum_grade[i-1][0] += grade[i-1][j];
            sum_point[i-1][0] += arr[i-1][j];
        }
        for (int j=3;j<5;j++){
            sum_grade[i-1][1] += grade[i-1][j];
            sum_point[i-1][1] += arr[i-1][j];
        }
    }
    printf("---------------------------------------------------------------------------\n");

    float grade1_2 = (10 + (sum_grade[0][0]+(sum_grade[0][1]/2*1.0)) / 4) + ((sum_point[0][0]+(sum_point[0][1]/2*1.0)) / 4)*0.05;
    float grade2_1 = 16 + (sum_grade[1][0]+sum_grade[1][1]/2*1.0) / 4*1.4 + (sum_point[1][0]+sum_point[1][1]/2*1.0) / 4*0.07;
    float grade2_2 = 16 + (sum_grade[2][0]+sum_grade[2][1]/2*1.0) / 4*1.4 + (sum_point[2][0]+sum_point[2][1]/2*1.0) / 4*0.07;
    float grade3_1 = 16 + (sum_grade[3][0]+sum_grade[3][1]/2*1.0) / 4*1.4 + (sum_point[3][0]+sum_point[3][1]/2*1.0) / 4*0.07;
    float grade3_2 = 6 + (sum_grade[4][0]+sum_grade[4][1]/2*1.0) / 4*0.4 + (sum_point[4][0]+sum_point[4][1]/2*1.0) / 4*0.02;
    float tot = grade1_2 + grade2_1 + grade2_2 + grade3_1 + grade3_2;


    system("clear");
    printf("교과점수: %.3f점\n",tot);

    return tot;
}