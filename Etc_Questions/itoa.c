

// int형의 숫자를 문자열로 변환한다.
void my_itoa(int num, char *pStr){
    int radix = 10;
    int deg = 1;        
    int cnt = 0;        
    int i;

    if(pStr == NULL) 
        return;

    if(num < 0){
        *pStr = '-';
        num *= -1;
        pStr++;
    }

    while(1){
        if( (num / deg) > 0)
            cnt++;
        else
            break;

        deg *= radix;
    }

    deg /= radix;

    for(i = 0; i < cnt; i++, pStr++){

        *pStr    = (num / deg) + '0';
        num        -= (num / deg) * deg;