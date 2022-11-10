#include <stdio.h>
#include <string.h>
#include <ctype.h>


int imprimir_normal (char *palavra){
    if (*palavra){
        printf ("%c", *palavra);
        imprimir_normal (palavra+1);  
    }
    
    else {
        return 0; 
    }
}

int imprimir_invertida (char palavra[], int tamanho, int i){
    if (i == tamanho)
        return 0;
    else{
        printf ("%c", palavra[tamanho-1]);
        return imprimir_invertida(palavra, tamanho-1, i);
        
    }
}

int main()
{
    char palavra[100];
    int tamanho, i = 0;
    printf ("Digite a palavra: ");
    scanf ("%[^\n]%*c", palavra);
    tamanho = strlen(palavra);
    
    printf ("Palavra normal: ");
    imprimir_normal (palavra);
    printf ("\nPalavra invertida: ");
    imprimir_invertida (palavra, tamanho, i);

    return 0;
}


