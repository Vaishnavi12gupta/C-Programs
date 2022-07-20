#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    int i,len=0;
    int counter = 0;
    char k ;
    printf("Enter sentence: ");
    gets(sentence);
    len=strlen(sentence);
    if( sentence[0]=='s' || sentence[0]=='S')
      counter++;
    for (i = 0;i<len; i++)
    {
        if (sentence[i]==' ')
        {
            k=sentence[i+1];
            if(k == 'S' || k == 's')
                counter = counter +1;
        }
    }
    printf("No. of S in string %s %d\n", sentence, counter);
    return 0;
}