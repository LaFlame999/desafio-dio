#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(){
    char nomeHeroi[25];
    char nivelHeroi[15];
    float xpHeroi;

    strcpy(nivelHeroi, "N/D");

    printf("Digite o nome do heroi: ");
    fgets(nomeHeroi, sizeof(nomeHeroi), stdin);
    nomeHeroi[strcspn(nomeHeroi, "\n")] = '\0';

    printf("Quantos pontos de experiencia ele tem?: ");
    scanf("%f", &xpHeroi);

    if(xpHeroi < 1000){
        strcpy(nivelHeroi, "Ferro");
    }
    else if(xpHeroi <= 2000){
        strcpy(nivelHeroi, "Prata");
    }
    else if(xpHeroi <= 5000){
        strcpy(nivelHeroi, "Ouro");
    }
    else if(xpHeroi <= 7000){
        strcpy(nivelHeroi, "Platina");
    }
    else if(xpHeroi <= 8000){
        strcpy(nivelHeroi, "Diamante");
    }
    else if(xpHeroi <= 9000){
        strcpy(nivelHeroi, "Ascendente");
    }
    else if(xpHeroi <= 10000){
        strcpy(nivelHeroi, "Imortal");
    }
    else {
        strcpy(nivelHeroi, "Radiante");
    }

    printf("O Heroi %s esta no nivel %s\n", nomeHeroi, nivelHeroi);
    system("pause");
    return 0;
}
