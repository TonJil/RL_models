

// 원본(pSrc)을 대상 버퍼(pDest)에 복사한다.
// 복사된 문자열 포인터를 리턴

char* my_strcpy(char * pDest,const char * pSrc){
     char *pTemp = pDest;
 
     if(pDest == NULL || pSrc == NULL) return NULL;
 
     while(*pSrc != '\0'){
         *pTemp++ = *pSrc++; 
     }