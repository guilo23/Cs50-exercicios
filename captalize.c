#include <stdio.h>

char ft_upper(char *str){
    for(int i = 0; str[i] != '\0';i++){
        if(str[0] >= 'a' && str[0] <= 'z'){
            str[0] -= 32;
        }
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    for(int i = 0; str[i] != '\0';i++){
        if(str[i] == ' ' || str[i] == '+'  && str[i+1] >= 'a' && str[i+1] <= 'z'){
            str[i+1] -= 32;
        }
        printf("%c", str[i]);
}
    return(*str);
}
int main(){
    char lmg[] = " salut, coMment tu vas ?42Mots quarante-deux; cinquante+et+un";
    ft_upper(lmg);
}