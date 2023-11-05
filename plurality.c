#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef  struct candidatoss
{
    char    **nome;
    int        *votos;
}    candidatos;

void vote( candidatos *u, char *x){
    for(int i = 0; i < 4 ; i++){
        if(strcmp(u->nome[i], x) == 0){
            u->votos[i] += 1;
            break;    
        }
    }
}

void print_winner(candidatos *u){
    int w = 0;
    for(int i = 1; i < 4; i++){
        if(u->votos[i - 1] < u->votos[i])
            w = i;
    }
    printf("%s é o vencedor(a)\n", u->nome[w]);
}

int main(){
    candidatos candidato;
    candidato.nome = malloc(sizeof(char *) * 100);
    candidato.nome[0] = strdup("CHARLIE");
    candidato.nome[1] = strdup("BOB");
    candidato.nome[2] = strdup("ALICE");
    candidato.nome[3] = strdup("EMMA"); 
    candidato.votos = malloc(sizeof(char*)*100);
    candidato.votos[0] = 0;
    candidato.votos[1] = 0;
    candidato.votos[2] = 0;
    candidato.votos[3] = 0;
    char voto[1000];
    for(int i = 0; i < 4; i++){
        printf("vote: ");
        scanf("%s", voto);
        vote(&candidato, voto);
    }
    print_winner(&candidato);
    for(int j = 0; j < 4; j++)
        free(candidato.nome[j]);
    free(candidato.nome);
    free(candidato.votos);
}