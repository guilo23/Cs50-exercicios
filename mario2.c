#include <stdio.h>
void mario (int linhas){
    for (int i = 1; i <= linhas; i++){
        for(int j = 0; j != linhas - i; j++){
            printf(" ");
        
        }
        for(int g = 1; g != i; g++){
            printf("#");
            printf("*");
        }

        }
        printf("\n");
    }
int main(){
int x;
printf("tamanho: ");
scanf("%d", &x);
printf("\n");
mario(x);
}