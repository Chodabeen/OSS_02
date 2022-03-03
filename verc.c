#include <stdio.h>

// 구조제 Student 정의
typedef struct student{
    int jumsu[3];
    int sum;
    double av;
    char grade;
} Student;

// 구조체의 멤버변수 값 입력 받는 함수 
void inputScore(Student *s, int n){
    int i = 0;
    s->sum = 0; 
    printf("%d번 학생 : ", n);
    for(i = 0; i < 3; i++){
        scanf("%d", &s->jumsu[i]);
        s->sum += s->jumsu[i];
    }
    s->av = s->sum / 3.0;
    // 등급 판정
    if(90 <= s->av)
        s->grade = 'A';
    else if(80 <= s->av && s->av < 90)
        s->grade = 'B';
    else if(70 <= s->av && s->av < 80)
        s->grade = 'C';
    else if(60 <= s->av && s->av < 70)
        s->grade = 'D';
    else 
        s->grade = 'F';
}


int main(void)
{
    int i = 0; 
    Student s[5];

    // 점수 입력하기
    for(i = 0; i < 5; i++){
        inputScore(&s[i], i+1);
    }
    printf("\n");
    // 학생의 총점, 평균, 등급 출력하기
    for(i = 0; i < 5; i++){
        printf("%d번 학생의 총점은 %d, 평균은 %.1f(등급 %c)\n", i+1, s[i].sum, s[i].av, s[i].grade);
    }
    return 0;
}