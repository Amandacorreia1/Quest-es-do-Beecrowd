#include <stdio.h>
 
int main() {
 
   int inicio, fim;
   
   printf("Calcular o tempo de jogo\n\n");
   
   printf("Informe o horario que iniciou: ");
   scanf("%d", &inicio);
   
   printf("Informe o horario que terminou: ");
   scanf("%d", &fim);
 

  if(inicio<fim){
     
     printf("O JOGO DUROU %d HORA(S)\n", fim-inicio);
 }else{
     
      printf("O JOGO DUROU %d HORA(S)\n", 24-inicio+fim);
     
 }
    return 0;
}
