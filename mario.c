#include <stdio.h>
void print_hashtags(int x){
    for(int i = 0; i < x; i++)
        printf("#");
}
void print_space(int x){
     for(int i = 0; i < x; i++ )
        printf(" ");
}
void print_line(int linhas){
    for(int i = 1 ; i <= linhas; i++){
      print_space(linhas - i);
      print_hashtags(i);
      printf(" ");
      print_hashtags(i);
      printf("\n");
    }
}

int main(){
 int x;
 printf("Tamanho: ");
 scanf("%d", &x);
print_line(x);

}