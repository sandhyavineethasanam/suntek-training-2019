#include<stdio.h>
#include<string.h> 
int Consonent(char c) 
{ 
    if (c=='a' ||  c=='e' || c=='i' || c=='o' || c=='u')
			return 0;
	else return 1;		
			
} 
  
int main() 
{ 
    char str[100],b; 
    gets(str); 
     int i = 0, j = strlen(str)-1; 
    while (i < j) 
    { 
        if (!Consonent(str[i])) 
        { 
            i++; 
            continue; 
        } 
        if (!Consonent(str[j])) 
        { 
            j--; 
            continue; 
        } 
        b=str[i];
        str[i]=str[j];
        str[j]=b;
        i++; 
        j--; 
    } 
  
    printf("%s",str);
	return 0; 
} 
