

// 널문자로 끝나는 무자열을 뒤집는 함수
// 입력으로 주어진 해당 배열만을 사용해서 뒤집는다.

void reverse(char * str){
	
	char * end = str;
	char temp;

	if(str){
		while(*end){ // 문자열의 끝을 찾음
			++end;
		}
		--end; //마지막 문자는 NULL!!한문자 앞으로.
    
    // 맨 앞의 문자을 맨뒤 문자로 바꾸고 포인터 이동
    // 중간 지점 까지 반복
		while (str < end){
			temp = *str;
			*str++ =  *end;
			*end -- = temp;
		}
	} 
}