#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int victory;
int defeat;
int balance;
int result;
char heroLevel[15];


int victoryDefeatBalance(int victoryNum, int defeatNum, int result){
    result = victoryNum - defeatNum;
    return result;
}

char levelCalculator(int victoryNum, int defeatNum, int result, char heroLevel[15]){

    strcpy(heroLevel, "Ferro");
    strcpy(heroLevel, "Bronze");
    strcpy(heroLevel, "Prata");
    strcpy(heroLevel, "Ouro");
    strcpy(heroLevel, "Diamante");
    strcpy(heroLevel, "Lendario");
    strcpy(heroLevel, "Imortal");

    
    int balance = victoryDefeatBalance(victoryNum, defeatNum, result);
    
    if (balance < 10){
        strcpy(heroLevel, "Ferro");
        printf("O heroi tem saldo de %d vitorias e esta no nivel %s\n", balance, heroLevel);
    }
    
    else if(balance<=20){
        strcpy(heroLevel, "Bronze");
        printf("O heroi tem saldo de %d vitorias e esta no nivel %s\n", balance, heroLevel);
    }
    
    else if(balance<=50){
        strcpy(heroLevel, "Prata");
        printf("O heroi tem saldo de %d vitorias e esta no nivel %s\n", balance, heroLevel);
    }

    else if(balance<=80){
        strcpy(heroLevel, "Ouro");
        printf("O heroi tem saldo de %d vitorias e esta no nivel %s\n", balance, heroLevel);
    }
    
    else if(balance<=90){
        strcpy(heroLevel, "Diamante");
        printf("O heroi tem saldo de %d vitorias e esta no nivel %s\n", balance, heroLevel);
    }

    else if(balance<=100){
        strcpy(heroLevel, "Lendario");
        printf("O heroi tem saldo de %d vitorias e esta no nivel %s\n", balance, heroLevel);
    }

    else if(balance>=101){
        strcpy(heroLevel, "Imortal");
        printf("O heroi tem saldo de %d vitorias e esta no nivel %s\n", balance, heroLevel);
    }

}

int main(){
    printf("insira a quantidade de vitorias: \n");
    scanf("%d", &victory);
    printf("insira a quantidade de derrotas: \n");
    scanf("%d", &defeat);
    victoryDefeatBalance(victory, defeat, result);
    levelCalculator(victory, defeat, result, heroLevel);
    system("pause");
    return 0;
}