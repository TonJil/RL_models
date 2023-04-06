

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

void reverseWords( char str[] )
{
   int start = 0, end = 0, length;
   length = strlen(str);

   reverseString( str, start, length-1 );

   while( end < length ) {
      if( str[end] != ' ' ) {
         start = end;

         while( end < length && str[end] != ' ' )
            ++end;
         --end;

         reverseString( str, start, end );
      }
      ++end;
   }
}

int main( void )
{
   char string[] = "in search of algorithmic elegance";
   reverseWords( string );
   printf( "%s\n", string );