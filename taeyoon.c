#include <stdio.h>

int seng_gi_bu();
int main(int argc, char const *argv[])
{
    seng_gi_bu();
    return 0;
}


int seng_gi_bu(){
    int arr[4];
    printf("---------------------------------------------------------------------------\n");
    printf("                1. 미인정 결석 횟수     : ");
    scanf("%d",&arr[0]);
    printf("                2. 독후감 수           : ");
    scanf("%d",&arr[1]);
    printf("                3. 임원 활동 횟수       : ");
    scanf("%d",&arr[2]);
    printf("                4. 수상실적 개수(교내)    : ");
    scanf("%d",&arr[3]);
    
}