#include <stdio.h>

int main(){
    //먼저 약수의 갯수를 N으로 받음
    unsigned int N, max ,min;
    scanf("%d", &N);
    int M[N];
   //for 문을 이용하여 정수들을 모두 받아 배열에 저장
    for(int s=0; s<N; s++){
        scanf("%d", &M[s]);
        //문제의 조건에서 100,000보다 작거나 같은 자연수라 했으므로
        if(M[s]>1000001 || M[s]<1){
            return 0;
        }
    }
    //최댓값 찾기
    max = M[0];
    for(int s=0; s<N; s++){
        if(max<M[s]){
            max = M[s];
        }
    }
    //최솟값 찾기
    min = M[0];
    for(int s=0; s<N; s++){
        if(min>M[s]){
            min = M[s];
        }
    }
    //입력받은 약수들 중 최솟값과 최댓값의 곱이 비로소 어떤수 가 되므로
    printf("%d\n", max*min);
}