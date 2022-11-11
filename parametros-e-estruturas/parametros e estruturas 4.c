#include <stdio.h>
#define MAX 100
void ler_show(int a[], int x){
    char b[MAX]; int i;
    printf("DIGITE O NOME DO ALUNO\n");
        scanf("%[^\n]%*c",b);
            printf("DIGITE AS NOTAS DO ALUNO\n");
                for(i=0;i<x;i++){
                    scanf("%d",&a[i]);
    }
                for(i=0;i<x;i++)
                    printf("AS NOTAS DO ALUNO SÃO: %d\n",a[i]);
    
}

int main(){
    
    int a[3];
    ler_show(a,3);
    return 0;
}



