#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int p,j1, j2, r, a, s;
    
    printf("Programa para calcular a vit�ria do jogo �mpar, Par ou Roubo\n\n");
    
    printf("\nInforme se o jogador 1 escolheu um n�mero par ou �mpar:\n 1 - par\n 2 - �mpar\n Resultado da escolha: ");
    scanf("%i", &p);
    
    printf("\nInforme o n�mero escolhido pelo jogador 1: ");
    scanf("%i", &j1);
    
    printf("\nInforme o n�mero escolhido pelo jogador 2: ");
    scanf("%i", &j2);
    
    printf("\nInforme se o jogador 1 robou:\n 1 - Robou\n 0 - N�o robou\n Resultado: ");
    scanf("%i", &r);
    
    printf("\nInforme se o jogador 2 acusou o jogador 1 de roubo:\n 1 - Acusou\n 0 - N�o acusou\n Resultado: ");
    scanf("%i", &a);

    s = j1 +j2;
   
    /*
     
    if((s%2==0 && p==1) || (s%2==1 && p==0) || (r==1 && a==0) || (r==0 && a==1)){
         printf("Jogador 1 ganha!\n");
    }else{
        printf("Jogador 2 ganha!\n");
    }
   
    */
    if( r == 1) {
    if( a == 1) {
    printf("\nJogador 2 ganhou!\n");
} else {
printf("\nJogador 1 ganhou!\n");
}
} else {
if( ( s % 2 == 0 && p == 1) || (s % 2 == 1 && p == 0) ){
printf("\nJogador 1 ganhou!\n");
} else {
printf("\nJogador 2 ganhou!\n");
}
}
   
   
    return 0;
}
