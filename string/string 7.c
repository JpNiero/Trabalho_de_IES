#include <stdio.h>
#include <string.h>
#define MAX 100
int main ()
{
  char str1[MAX], str2[MAX]; int i = 0;
    scanf("%[^\n]%*c",str1);
    for(i=0;i<strlen(str1);i++)
        str2[i] = str1[i];
        if(!strcmp(str2,str1))
            printf("A matriz está copiada: %s\n",str2);
        
  return 0;
}


