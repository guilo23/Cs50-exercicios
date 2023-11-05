 
#include <stdio.h>
void credito(char c[] ){
    int conversion = 0;
    int cover = 0;
    for(int i = 0; c[i] != '\0'; i = i+2 ){
        if((c[i] - 48)*2 > 9){
            conversion += ((c[i] - 48)*2)/10 + ((c[i] - 48)*2)%10;
        }
        else{
            conversion += (c[i] - 48)*2;
        }
    }
    for(int i = 1; i < 16; i = i+2){
        cover += c[i] - 48;
    }
    if( (cover + conversion)%10 == 0)
        printf("é valido\n");
    printf("%d", cover + conversion);
}

int main(){
    char x[16];
    scanf("%s", &x);
    credito(x);
}