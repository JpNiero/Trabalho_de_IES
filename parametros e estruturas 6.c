#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[80];
    float preco;
} PRODUTO;

void ler_produto (PRODUTO p[]){
    int i;
    for (i=0; i<20; i++){
        scanf ("%[^\n]%*c", p[i].nome);
        scanf ("%f%*c", &p[i].preco);
    }
}

void troca (PRODUTO *a, PRODUTO *b){
    PRODUTO aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar_nome (PRODUTO p[]){
    int i, j;
    for (i=20-1; i>0; i--){
        for (j=0; j<i; j++){
            if (strcmp(p[j].nome, p[j+1].nome) > 0)
                troca (&p[j], &p[j+1]);
        }
    }
}

void atualiza_preco (PRODUTO p[]){
    int i;
    for (i=0; i<20; i++){
        if (p[i].preco < 100)
            p[i].preco = p[i].preco + (p[i].preco * 0.05);
    }
}

void imprimir (PRODUTO p[]){
    int i;
    for (i=0; i<20; i++){
        printf ("Produto: %s, Preco: %.2f\n", p[i].nome, p[i].preco);
    }
}

int main()
{
    PRODUTO p[20];
    ler_produto(p);
    atualiza_preco(p);
    ordenar_nome(p);
    imprimir(p);

    return 0;
}

