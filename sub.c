#include <stdio.h>
void sub(char *x, char *y){
    int j;
    for(int i = 0; x[i] != '\0'; i++){
         if(x[i] <= 90 && x[i] >= 65){
            j = x[i] - 65;
            x[i] = y[j];
         }
         else if(x[i] >= 97 && x[i] <= 122){
              j = x[i] - 97;
            x[i] = y[j];
            x[i] += 32;
         }
    }
    printf("ciphertext %s", x);
        
}



int main (int argc, char **argv ){
    if(argc != 2){
        return(0);
    }
char x[15] = "hello, world";
    sub(x, argv[1]);

}