

// 정수의 곱셈, 뺄셈, 나눗셈을 구현하는 메소드를 작성 하라.
// 더하기 연산자만 사용 하라. 346 page

#include <stdio.h>
// 양수를 음수로 음수를 양수로 뒤집는다.
int negate(int a){
    int neg = 0;
    int d = a < 0 ? 1 : -1;
    
    while(a != 0 ){