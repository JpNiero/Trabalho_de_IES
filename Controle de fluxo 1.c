#include <stdio.h>

int main(){
    int a,b;
        printf("DIGITE DOIS VALORES\n");
        scanf("%d %d",&a, &b);
            if(a==b)
                printf("OS VALORES SÃO IGUAIS\n");
            if(a<b)
                printf("%d %d",b,a);
            if(a>b)
                printf("%d %d",a,b);
    return 0;
}


