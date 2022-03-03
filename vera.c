#include <stdio.h>

int main(void)
{
    int i = 0;
    int a, b, c;  // 점수 3개
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;  // 각 학생들의 총점
    double av1 = 0, av2 = 0, av3 = 0, av4 = 0,av5 = 0;  // 각 학생들의 평균
    char grade1, grade2, grade3, grade4, grade5;  // 각 학생들의 등급

    // 점수 입력받기
    for(i = 1; i < 6; i++){
        printf("%d번 학생 : ", i);
        scanf("%d %d %d", &a, &b, &c);
        // i 번째 학생일 경우 각자 sum, av, grade가 변경되어 저장됨
        if(i == 1){
            sum1 = a + b + c;
            av1 = sum1 / 3.0;
            if(90 <= av1)
                grade1 = 'A';
            else if(80 <= av1 && av1 < 90)
                grade1 = 'B';
            else if(70 <= av1 && av1 < 80)
                grade1 = 'C';
            else if(60 <= av1 && av1 < 70)
                grade1 = 'D';
            else 
                grade1 = 'F';
        }
        if(i == 2){
            sum2 = a + b + c;
            av2 = sum2 / 3.0;
            if(90 <= av2)
                grade2 = 'A';
            else if(80 <= av2 && av2 < 90)
                grade2 = 'B';
            else if(70 <= av2 && av2 < 80)
                grade2 = 'C';
            else if(60 <= av2 && av2 < 70)
                grade2 = 'D';
            else 
                grade2 = 'F';
        }
        if(i == 3){
            sum3 = a + b + c;
            av3 = sum3 / 3.0;
            if(90 <= av3)
                grade3 = 'A';
            else if(80 <= av3 && av3 < 90)
                grade3 = 'B';
            else if(70 <= av3 && av3 < 80)
                grade3 = 'C';
            else if(60 <= av3 && av3 < 70)
                grade3 = 'D';
            else 
                grade3 = 'F';
        }
        if(i == 4){
            sum4 = a + b + c;
            av4 = sum4 / 3.0;
            if(90 <= av4)
                grade4 = 'A';
            else if(80 <= av4 && av4 < 90)
                grade4 = 'B';
            else if(70 <= av4 && av4 < 80)
                grade4 = 'C';
            else if(60 <= av4 && av4 < 70)
                grade4 = 'D';
            else 
                grade4 = 'F';
        }
        else{
            sum5 = a + b + c;
            av5 = sum5 / 3.0;
            if(90 <= av5)
                grade5 = 'A';
            else if(80 <= av5 && av5 < 90)
                grade5 = 'B';
            else if(70 <= av5 && av5 < 80)
                grade5 = 'C';
            else if(60 <= av5 && av5 < 70)
                grade5 = 'D';
            else 
                grade5 = 'F';
        }
    }
    printf("\n");

    // 학생의 총점, 평균, 등급 출력하기
    for(i = 1; i < 6; i++){
        if(i == 1)
            printf("%d번 학생의 총점은 %d, 평균은 %.1f(등급 %c)\n", i, sum1, av1, grade1);
        else if(i == 2)
            printf("%d번 학생의 총점은 %d, 평균은 %.1f(등급 %c)\n", i, sum2, av2, grade2);
        else if(i == 3)
            printf("%d번 학생의 총점은 %d, 평균은 %.1f(등급 %c)\n", i, sum3, av3, grade3);
        else if(i == 4)
            printf("%d번 학생의 총점은 %d, 평균은 %.1f(등급 %c)\n", i, sum4, av4, grade4);
        else   
            printf("%d번 학생의 총점은 %d, 평균은 %.1f(등급 %c)\n", i, sum5, av5, grade5);
        
    }

    return 0;
}