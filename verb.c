#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;;
    int jumsu[5][3], sum[5];
    double av[5];
    char grade[5];

    // 점수 입력받기
    for(i = 0; i < 5; i++){
        printf("%d번 학생 : ", i+1);
        for(j = 0; j < 3; j++){
            scanf("%d", &jumsu[i][j]);
        }
    }

    printf("\n");

    // 학생들의 각 총점, 평균, 등급 계산 후 출력
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            sum[i] += jumsu[i][j];
        }
        av[i] = sum[i] / 3.0;
        // 등급 판정
        if(90 <= av[i])
            grade[i] = 'A';
        else if(80 <= av[i] && av[i] < 90)
            grade[i] = 'B';
        else if(70 <= av[i] && av[i] < 80)
            grade[i] = 'C';
        else if(60 <= av[i] && av[i] < 70)
            grade[i] = 'D';
        else 
            grade[i] = 'F';
        printf("%d번 학생의 총점은 %d, 평균은 %.1f(등급 %c)\n", i+1, sum[i], av[i], grade[i]);
    }

    return 0;
}