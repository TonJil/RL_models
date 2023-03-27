

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
    }
}

//곱셈
//a를 b번 더하여 a*b를 구현 한다.
int mutiply(int a, int b){
    
    if( a < b ){
        return (b, a);//a<b이면 이렇게 해야 빠르다.
    }
    
    int sum = 0;
    int i =0;
    for(i = aabs(b); i > 0; i--){
        sum += a;
    }
    // 마이너스이면 양수로 변환
    if( b < 0 ){ 
        sum = negate(sum);
    }
    return sum;
}

// 나눗셈

int divide(int a, int b){
    
    if(b == 0){
        printf("Error");
        return 0;
    }
    
    int aaaa = aabs(a);
    int bbbb = aabs(b);
    
    int product = 0;
    int xx = 0;
    
    // a  넘지 않도록 함.
    while(product + bbbb <= aaaa){ 
        product += bbbb;
        xx++;
    }
    
    if( (a < 0 && b < 0) || (a > 0 && b > 0) ){
        return xx ;
    }else{
        return negate(xx);
    }
}



int main()
{
    int a = 100;
    int b = 100;
    int total = 0;
    
    //b 를 negate 한다음 더하여 수의 차를 계산 한다.
    total  = a + negate(b);
    printf("마이너스 ==> %d\n", total );
    
    total = 0;
    total = mutiply(a, b);
    printf("곱셈 ==> %d\n", total );
    
    total = 0;
    a = 10000000;
    b = 200;
    total  = divide(a,b);
    printf("나눗셈 ==> %d\n", total );
    return 0;
}