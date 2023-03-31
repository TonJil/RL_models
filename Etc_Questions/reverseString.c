

// 단어 뒤집기
// 모든 단어은 스페이스로 구분. 문장 부호는 글자로 취급.
void reverseString( char str[], int start, int end )
{
   char temp;
   while( end > start ) {
      temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      ++start, --end;
   }
}