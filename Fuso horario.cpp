#include <stdio.h>
#include <locale.h>
 
int main() {
     setlocale(LC_ALL, "Portuguese_Brazil");
 
    int S, T, F;
   
    printf("Programa para calcular o horário do seu destino final\n\n");
   
    printf("Informe a hora de saída da viagem: ");
    scanf("%d", &S);
   
    printf("Informe o tempo de viagem: ");
    scanf("%d", &T);
   
    printf("Informe o fuso horário do destino com relação à origem: ");
    scanf("%d", &F);
   
    if(S+T+F>=24){
       
       printf("Você chegará ao seu destino às %d horas\n", S+T+F-24);
       
   }else if(S+T+F>=0 && S+T+F<24){
       
       printf("Você chegará ao seu destino às %d horas\n", S+T+F);
   }
   
    if(S+T+F<0){
       
       printf("Você chegará ao seu destino às %d horas\n", S+T+F+24); 
   }
   
   
   
    return 0;
}
