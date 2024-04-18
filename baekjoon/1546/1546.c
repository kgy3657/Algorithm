#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N, Max = 0;
    scanf("%d", &N);
    double sum =0.0;
    //문제의 조건 생각 1000 이하
    double avg[1000];
    Max = avg[0];
    for(int i = 0; i<N; i++){
        scanf("%lf", &avg[i]);
    }
    //배열 중 가장 큰 값을 찾기 위해 for문 구문 이용
    for(int i = 0; i<N; i++){
        if(avg[i]>Max){
            Max = avg[i];
        }
    }
    //주어진 식  -> 점수/M*100을 그대로 이용해 평균 구하기
    for(int i = 0; i<N; i++){
        avg[i] = avg[i]/(double)Max*100;
        sum = sum + avg[i];
    }
    //자료형 강제 변환 N(정수형이므로 double로 변환)
    printf("%f\n", sum/(double)N);
}