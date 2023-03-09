

// int형의 숫자를 문자열로 변환한다.
void my_itoa(int num, char *pStr){
    int radix = 10;
    int deg = 1;        
    int cnt = 0;        
    int i;

    if(pStr == NULL) 
        return;
