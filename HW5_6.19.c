#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_ROLLS 36000
#define MIN_SUM 2
#define MAX_SUM 12

int main() {
    int outcomes[MAX_SUM + 1] = {0}; 
    int dice1, dice2, sum;

  
    srand((unsigned int)time(NULL));


    for (int i = 0; i < TOTAL_ROLLS; i++) {
        dice1 = rand() % 6 + 1; 
        dice2 = rand() % 6 + 1; 
        sum = dice1 + dice2;    
        outcomes[sum]++;       
    }


    printf("點數\t次數\t比例 (%%)\n");
    for (int i = MIN_SUM; i <= MAX_SUM; i++) {
        printf("%2d\t%5d\t%.2f\n", i, outcomes[i], (double)outcomes[i] / TOTAL_ROLLS * 100);
    }

  
    printf("\n合理性檢查：\n");
    printf("7點次數應接近 %.2f%% (1/6)\n", 100.0 / 6);
    printf("實際 7 點次數比例： %.2f%%\n", (double)outcomes[7] / TOTAL_ROLLS * 100);

    return 0;
}
