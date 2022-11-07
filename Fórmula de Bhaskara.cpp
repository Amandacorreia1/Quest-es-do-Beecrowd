#include <stdio.h>
#include <math.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
   double A, B, C, delta, raiz1, raiz2;
  
   printf("Calculadora de Fórmula de Bhaskara\n\n");
  
   printf("Digite o valor A: ");
   scanf("%lf", &A);
   
   printf("Digite o valor B: ");
   scanf("%lf", &B);
   
   printf("Digite o valor C: ");
   scanf("%lf", &C);
  
   delta= (B*B - 4*A*C);
  
   if(delta<0 || A==0){
      
    printf("Impossivel calcular\n");
      
}else{
	
   raiz1=(-B + sqrt(delta)) / (2*A);
   raiz2=(-B - sqrt(delta)) / (2*A);    
      
   printf("R1 = %.5lf\n", raiz1);
   printf("R2 = %.5lf\n", raiz2);
    	
}
    return 0;
}
