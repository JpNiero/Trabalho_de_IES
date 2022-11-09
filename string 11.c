#include <stdio.h>
#include <string.h>

void insereCaractere(char c[], char x, int k){
    int i, t = strlen(c)+1; char s[40];
    strcpy(s, c);
    for(i=t; i>=k; i--){
        s[i] = s[i-1];
    }
    s[k] = x;
    strcpy(c, s);
}

int main()
{
    char c[40], x;
    int k;
    
    printf("Digite o texto: ");
    scanf("%[^\n]%*c", c);
    printf("Insira o caractere e a posição na qual quer que ele seja inserido: ");
    scanf("%c %d", &x, &k);
    insereCaractere(c, x, k);
    printf("Seu texto ficou: %s", c);


    return 0;
}

