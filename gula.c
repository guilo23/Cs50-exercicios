#include <stdio.h>
void troco(int t){
    int M = 0;
    int N = 0;
    int O = 0;
    int P = 0;
    while(t > 0){
        if(t >= 25 ){
            t = t - 25;
            M = M + 1;
        }
        if(t < 25 && t >= 10){
            t = t - 10;
            N = N + 1;
        }
        if(t < 10 && t >= 5 ){
                t = t - 5;
                O = O + 1;
        }
        if(t  < 5 && t >= 1){
                t = t - 1;
                P = P + 1;
        }
    }
     printf("25 centavos %d  10 centavos %d 5 centavos %d 1 centavos %d",M,N,O,P);
}
int main(){
    int X;
    printf("insira o troco: ");
    scanf("%d", &X);
    troco(X);

}