#include <stdio.h>
#include <string.h>

int seng_gi_bu();
float sub_grade();
int main(int argc, char const *argv[])
{
    float grade = sub_grade();
    int seng = seng_gi_bu();
    printf("%.3f %d\n",grade,seng);
    return 0;
}

float sub_grade(){
    int arr[5][6];
    char text[][50] = {"국어","수학","영어","사회","과학"};
    int grade[5][5];
    int sum_grade[5][2];
    int sum_point[5][2];

    printf("---------------------------------------------------------------------------\n");
    printf("                                  교과 점수 입력\n");
    printf("---------------------------------------------------------------------------\n");

    memset(sum_grade,0,sizeof(sum_grade));
    memset(sum_point,0,sizeof(sum_point));

    int cur = 2;
    int next = 1;
    int temp;
    for (int i=1;i<6;i++){
        for (int j=1;j<6;j++){
            printf("          %d학년 %d학기 %s 점수: ",i/2+1,cur,text[j-1]);
            scanf("%d", &arr[i-1][j-1]);
            if (arr[i-1][j-1] >= 90) grade[i-1][j-1] = 5;
            else if (arr[i-1][j-1] >= 80) grade[i-1][j-1] = 4;
            else if (arr[i-1][j-1] >= 70) grade[i-1][j-1] = 3;
            else if (arr[i-1][j-1] >= 60) grade[i-1][j-1] = 2;
            else grade[i-1][j-1] = 1;
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

    int grade1_2 = (10 + (sum_grade[0][0]+(sum_grade[0][1]/2*1.0)) / 4) + ((sum_point[0][0]+(sum_point[0][1]/2*1.0)) / 4)*0.05;
    int grade2_1 = 16 + (sum_grade[1][0]+sum_grade[1][1]/2*1.0) / 4*1.4 + (sum_point[1][0]+sum_point[1][1]/2*1.0) / 4*0.07;
    int grade2_2 = 16 + (sum_grade[2][0]+sum_grade[2][1]/2*1.0) / 4*1.4 + (sum_point[2][0]+sum_point[2][1]/2*1.0) / 4*0.07;
    int grade3_1 = 16 + (sum_grade[3][0]+sum_grade[3][1]/2*1.0) / 4*1.4 + (sum_point[3][0]+sum_point[3][1]/2*1.0) / 4*0.07;
    int grade3_2 = 6 + (sum_grade[4][0]+sum_grade[4][1]/2*1.0) / 4*0.4 + (sum_point[4][0]+sum_point[4][1]/2*1.0) / 4*0.02;

    return grade1_2 + grade2_1 + grade2_2 + grade3_1 + grade3_2;
}

int seng_gi_bu(){
    int arr[5];
    printf("---------------------------------------------------------------------------\n");
    printf("                1. 미인정 결석 횟수     : ");
    scanf("%d",&arr[0]);
    printf("                2. 3년간 독후감 총 횟수 (독서활동은 학년당 최대 10권까지 인정)          : ");
    scanf("%d",&arr[1]);
    printf("                3. 임원 활동 횟수       : ");
    scanf("%d",&arr[2]);
    printf("                4. 교내 수상실적 횟수 (수상실적은 한 학기에 한 개씩만 인정)    : ");
    scanf("%d",&arr[3]);
    printf("---------------------------------------------------------------------------\n");
    
    if (arr[0] <= 8) arr[0] *= -1;
    else arr[0] = -8;

    if (arr[1] <= 20) arr[1] = 2.0 + 0.2*arr[1];
    else arr[1] = 6.0;

    if (arr[2] <= 3) arr[2] = 2.1 + 0.3*arr[2];
    else arr[2] = 3.0;

    if (arr[3] <= 5) arr[3] = 1.5 + 0.3*arr[3];
    else arr[3] = 3.0;

    arr[4] = 0;
    for (int i=0;i<4;i++){
        arr[4] += arr[i];
    }


    return arr[4];
}