#include <stdio.h>

#define agua 0
#define navio 3
#define ataque 5

int main(){

    int tabuleiro [10][9] = { //fazendo o tabuleiro
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //fazendo o menu 
    printf("-- Tabuleiro Batalha Naval --\n");
    printf(" \n");
    // Mostrando os títulos das colunas do tabuleiro (de A a J)
    printf(" X A B C D E F G H I J\n");

    // Inserir navio horizontal na linha 2 e coluna 4 
    int linha_horizontal = 1;  // índice da linha 2
    int coluna_horizontal = 4; // começa na coluna 4
    for (int i = 0; i < 2; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = navio;
    }

    // Inserir navio vertical na coluna 7 e linha 5 
    int linha_vertical = 4;  // começa na linha 5
    int coluna_vertical = 7; // índice da coluna 7
    for (int i = 0; i < 2; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = navio;
    }
    
    // Inserir navio diagonal
    int linha_diagonal = 6;   // linha 7 (índice 6)
    int coluna_diagonal = 2;  // coluna C (índice 2)
    for (int i = 0; i < 2; i++) {
      tabuleiro[linha_diagonal + i][coluna_diagonal + i] = navio;
    }

    //variaveis para o cone
    int cone = 7;
    int cone1 = 8;
    int cone3 = 8;
    int cone4 = 7;
    int cone5 = 9;
    int cone6 = 6;
    
    tabuleiro[cone][cone1] = 5;  //define somente a casa que representa o topo do cone
    for (int i = 0; i < 3; i++) {
        tabuleiro[cone3][cone4 + i] = 5; //define a linha de baixo do cone que representa 3 casas
        } for(int j = 0; j < 5; j++) {
            tabuleiro[cone5][cone6 + j] = 5;  //define a linha final do cone que representa 5 casas
        }

    //variaveis para a cruz
    int cruz = 2;
    int cruz2 = 5;
    int cruz3 = 1;
    int cruz4 = 7;
    for(int i = 0; i < 5; i++){ //define a linha que representa a cruz
        tabuleiro[cruz][cruz2 + i] = ataque;
    } for(int j = 0; j < 3; j++){   //define a coluna que representa a cruz
        tabuleiro[cruz3 + j][cruz4] = ataque;  
    }

    //variaveis do octaedro
    int octa = 4;
    int octa2 = 1;
    int octa3 = 3;
    int octa4 = 2;
    for(int i = 0; i < 3; i++){ //define a linha que representa o octaedro
        tabuleiro[octa][octa2 + i] = ataque;
    } for(int j = 0; j < 3; j++){   //define a coluna que representa o octaedro
        tabuleiro[octa3 + j][octa4] = ataque;  
    }


    //imprimindo o tabuleiro
    for (int i = 0; i < 10; i++) {
    printf("%2d ", i + 1); 
        for (int j = 1; j <= 10; j++) {
         printf("%d ", tabuleiro[i][j]);
        }
    printf("\n");
    }
   
  
    
    return 0;
}