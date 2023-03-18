

// 정수의 곱셈, 뺄셈, 나눗셈을 구현하는 메소드를 작성 하라.
// 더하기 연산자만 사용 하라. 346 page

#include <stdio.h>
// 양수를 음수로 음수를 양수로 뒤집는다.
int negate(int a){
    int neg = 0;
    int d = a < 0 ? 1 : -1;
    
    while(a != 0 ){
        neg += d;
        a += d;
    }
    return neg;
}

// 절대 값을 구한다. 편의 상 구현 함.
int aabs(int a){
    if( a < 0){
        return negate(a); // 음수이면 양수로 변환
    }else{
        return a;