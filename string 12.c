#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int main(){
    char s[MAX]; int i;
    scanf("%[^\n]%*c",s);
    for(i=0;i<strlen(s);i++)
        if(isspace(s[i])){
            printf("%d",i);
            break;
        }
    return 0;
}