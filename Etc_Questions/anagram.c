

// Anagram 이란 단어 철자의 순서가 바뀌어서 다른 단어가 될 때를 칭하는 용어이다.
// 즉, apple 과 ppale 는 서로 아나그램인 것 이다.
// 단순하게는 'triangle = integral', 'earth = heart' 등의 한 단어로 이루어진 아나그램부터 
// 'George Bush = He bugs Gore(부시와 앨 고어의 관계를 풍자한 아나그램)'  문자열 아나그램


// 아나그램 체크 프로그램
//int check_anagram(char [], char []);

int check_anagram(char a[], char b[])
{
   int first[26] = {0}, second[26] = {0}, index = 0;
 
   while (a[index] != '\0')
   {
      first[ a[index] - 'a' ]++;
      index++;
   }
 
   index = 0;
 
   while (b[index] != '\0')
   {
      second [ b[index] - 'a' ]++;