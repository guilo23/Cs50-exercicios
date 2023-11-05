#include <stdio.h>
void cifra(char* x,int k){
    char p;
    for(int i = 0; x[i] != '\0'; i++){
        p = x[i] - k;
        if(x[i] < 65 && p <= 90 ){
           k = 64 - p;
            p = 90 - k;
        }
        else if (x[i] < 97){
            k = 96 - p;
            p = 122 - k;
        }
        printf("%c", p);
    }
}

int main(){
    int k;
    char x[10];
        printf("digite a mensagem e a chave: ");
        scanf("%s %d", x, &k);
        cifra(x,k);
}