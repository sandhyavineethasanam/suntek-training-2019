#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,y,x,count[26]={0};
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a'&& str[i]<='z')
		{
		     x = str[i] - 'a';
			count[x]++;
		}
	}
 for (y = 0; y < 26; y++)
 {
 	if(count[y]!=0)
 
         printf("%c-%d\n", y + 'a', count[y]);
 else 
 continue;
   
}
return 0;
}
