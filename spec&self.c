#include <stdio.h>

int spec();
int jagisoge();

int main(int argc, char const *argv[])
{
    int spec_point = spec();
    int jagisoge_point = jagisoge();

    printf("%d\n",spec_point);
    printf("%d\n",jagisoge_point);
    return 0;
}


int spec(){
    printf("---------------------------------------------------------------------------\n");
    printf("                                  특별 전형 입력\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                      1. 한국정보올림피아드 2차 대회\n");
    printf("                      2. 전국 중학생 IT 올림피아드 프로그래밍, 해킹방어\n");
    printf("                      3. 전국 중학생 창업아이디어 경진대회\n");
    printf("\n");
    printf("                      대상: 5, 금상: 4, 은상: 3, 동상: 2, 장려상: 1\n");
    printf("\n");
    printf("대회 선택 => ");
    int comp,point;
    scanf("%d",&comp);
    printf("입상 선택 => ");
    scanf("%d",&point);

    int tot = 0;
    if (comp == 3){
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

int jagisoge(){
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

    if ((point >= 97) && (point <= 122)) return 20 - (point-97);
    if ((point >= 65) && (point <= 90)) return 20 - (point-65);



}

// 7. 자기소개서

// ---------------------------------------------------------------------------
//                             자기소개서 완성도 선택
// ---------------------------------------------------------------------------
// A
// B
// C
// D
// E
// ---------------------------------------------------------------------------
// 입력 => char or N
