#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int eleitores = 5;
int candidate_number = 3;
typedef struct placar {
    char* player;
    int  wins;

} t_placar;

typedef struct listadevotos {
char *voto1;
char *voto2;
char *voto3;
} t_votos;

bool valid_vote( char **candidatos, char *candidate1,char  *candidate2,char  *candidate3) {
    for(int i = 0; i < candidate_number; i++) {
        if (strcmp(candidatos[i], candidate1) != 0 && strcmp(candidatos[i], candidate2) != 0 && strcmp(candidatos[i], candidate3) != 0)
            return(false);
    }
    return(true);
}

void vote(t_votos *listadevotos, char *candidate1, char *candidate2, char *candidate3){
    static int    i = 0;
    listadevotos[i].voto1 = candidate1;
    listadevotos[i].voto2 = candidate2;
    listadevotos[i].voto3 = candidate3;
    i++;
}
t_placar battle(char *oponente1, char *oponente2,t_votos *listadevotos){
    t_placar vitoria;
    int placar1 = 0;
    int placar2 = 0;
    for(int i = 0; i < eleitores; i++){
        if(strcmp(listadevotos[i].voto1,oponente1) == 0)
            placar1++;
        else if(strcmp(listadevotos[i].voto1,oponente2) == 0)
            placar2++;
        else if(strcmp(listadevotos[i].voto2,oponente1) == 0)
            placar1++;
        else if(strcmp(listadevotos[i].voto2,oponente2) == 0)
            placar2++;
    }
    if(placar1 > placar2){
        vitoria.player = oponente1;
        vitoria.wins = placar1;
    }
    else{
        vitoria.player = oponente2;
        vitoria.wins = placar2;
    }
    return(vitoria);
}
void print_winner(t_votos *listadevotos, char **candidato){
    t_placar vitorias[100];
        for(int i = 0; i < candidate_number; i++){
        vitorias[i]  =  battle(candidato[i],candidato[(i+4)%3],listadevotos);
        }
    for(int i = 0; i<candidate_number;i++){
        printf("%s\n",vitorias[i].player);
    }
        

}
int main() {
    t_votos listadevoto[100];
    char  **candidato;
    candidato = malloc(sizeof(char*)*3);
    candidato[0]  = strdup("luffy");
    candidato[1]  = strdup ("law");
    candidato[2]  = strdup ("shanks");
    vote(listadevoto, "luffy","law","shanks");
    vote(listadevoto, "law","luffy","shanks");
    vote(listadevoto, "luffy","law","shanks");
    vote(listadevoto, "shanks","law","luffy");
    vote(listadevoto, "luffy","shanks","law");
    print_winner(listadevoto,candidato);
}

    /*("luffy","law","shanks")
    ("law","luffy","shanks")
    ("luffy","law","shanks")
    ("snhaks","law","luffy")*/