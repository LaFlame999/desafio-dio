#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[25];
    int idade;
    char tipo[20];
} Heroi;

void tipoAtaque(char tipo[], char ataque[]);
int funcaoConstructor(Heroi* heroi);

int funcaoConstructor(Heroi* heroi){
    if(heroi == NULL)
    return 0;

    strcpy(heroi->nome, "Daniel");
    heroi->idade = 18;
    strcpy(heroi->tipo, "ninja");
    return 1;
}

void exibirMensagem(char tipo[], char ataque[]){
    printf("o %s atacou usando %s", tipo, ataque);
}

void tipoAtaque(char tipo[], char ataque[]){
    if(strcmp(tipo, "mago")==0){
        strcpy(ataque, "magia");
    }
    else if(strcmp(tipo, "guerreiro")==0){
        strcpy(ataque, "espada");
    }
    else if(strcmp(tipo, "monge")==0){
        strcpy(ataque, "artes marciais");
    }
    else if(strcmp(tipo, "ninja")==0){
        strcpy(ataque, "shuriken");
    }
}

int main(){
    Heroi heroi;
    char ataque[20];

    funcaoConstructor(&heroi);
  
    tipoAtaque(heroi.tipo, ataque);
    exibirMensagem(heroi.tipo, ataque);
    system("pause");
    return 0;
}

