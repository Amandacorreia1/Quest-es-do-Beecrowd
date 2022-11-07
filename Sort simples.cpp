#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
    int numero1, numero2, numero3;
    int x; //maior
    int y; //medio
    int z; //menor
    
    printf("Ordenar os valores em ordem crescente\n\n");
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &numero3);
    
    if(numero1>=numero2 && numero1>=numero3){
        
        x = numero1;
        
       if(numero2>numero3){
             y = numero2; 
             z = numero3;
       }
       
       else if(numero3>numero2){
             y = numero3; 
             z = numero2;
       }
       
    printf("Os numeros em ordem crescente é:\n%d\n%d\n%d\n", z,y,x);
   
    }
    
   if(numero2>=numero1 && numero2>=numero3){
        
        x = numero2;
        
       if(numero1>numero3){
             y = numero1; 
             z = numero3;
       }
       
      else if(numero3>numero1){
             y = numero3; 
             z = numero1;
       }
       
    printf("Os numeros em ordem crescente é:\n%d\n%d\n%d\n", z,y,x);
   }
   
     if(numero3>=numero1 && numero3>=numero2){
        
        x = numero3;
        
       if(numero1>numero2){
             y = numero1; 
             z = numero2;
       }
       
       if(numero2>numero1){
             y = numero2; 
             z = numero1;
       }
       
    printf("Os numeros em ordem crescente é:\n%d\n%d\n%d\n", z,y,x);
   }
   
   printf("\n");
   printf("Ordem que os números foram digitados:\n%d\n%d\n%d\n", numero1, numero2, numero3);
   
     return 0;
}
