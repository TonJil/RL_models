

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
    