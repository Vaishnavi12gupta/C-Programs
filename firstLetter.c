#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    int i,len=0;
    printf("Enter sentence: ");
    gets(sentence);
    len=strlen(sentence);
    printf("%c.",sentence[0]);
    for(i=0;i<len;i++)
    {
        if (sentence[i]==' ')
        {
           printf("%c.",sentence[i+1]); 
        }
    }
}