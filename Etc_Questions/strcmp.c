

// 두 인자가 같으면 0 반환
// 첫 번째 인자가 더 크면 1 반환
// 두 번째 인자가 더 크면 -1 반환
int my_strcmp(const char * pStr1, const char * pStr2){
     if(pStr1 == NULL || pStr2 == NULL) 
     	return -1;
 
     for( ; (*pStr1) != '\0' || (*pStr2) != '\0'; pStr1++, pStr2++){
         if((*pStr1) > (*pStr2))        