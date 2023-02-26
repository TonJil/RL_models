

//-문자열을 int형 숫자로 변환
int my_atoi(const char *pStr){
    int sign = 1;
    int nResult = 0;
  
    if(pStr == NULL) return 0;
    
    if(*pStr == '-'){
        sign = -1;
        pStr++;
    }

    for( ; *pStr != '\0'; pStr++){
        if(*pStr  < '0' || *pStr > '9'){            
            puts("숫자가 아닙니다.");
            return 0;
        }