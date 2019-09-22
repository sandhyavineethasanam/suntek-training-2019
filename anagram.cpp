#include <stdio.h>
 #include<string.h>
int anagram(char [], char []);
int main()
{
  char str1[100], str2[100];
  int i,c;
  gets(str1);
  gets(str2);
  if (anagram(str1, str2) == 1)
  printf(" anagrams.\n");
  else
  printf("not anagrams.\n");
  return 0;
}
 
int anagram(char str1[], char str2[])
{
  int s1[26] = {0}, s2[26] = {0};
  for(int i=0;i<strlen(str1);i++)
  s1[str1[i]-'a']++;
  for(int i=0;i<strlen(str2);i++)
  s2[str2[i]-'a']++;
  for (int c = 0; c < 26; c++)
  {
    if (s1[c] != s2[c])
      return 0;
  }
 
  return 1;
}

