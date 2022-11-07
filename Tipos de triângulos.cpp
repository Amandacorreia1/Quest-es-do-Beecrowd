#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
    double A, B, C;
    double x; // MAIOR LADO DOS 3
    double y;
    double z;
    
    printf("Mostrar os Tipos de Triâgulos\n\n");
    
    printf("Digite o valor do primeiro lado: ");
    scanf("%lf", &x);
    
    printf("Digite o valor do segundo lado: ");
    scanf("%lf", &y);
    
    printf("Digite o valor do terceiro lado: ");
    scanf("%lf", &z);

   
    if(x>=y && x>=z){
       
        A = x;
        B = y;
        C = z;
   
    }
   
    if(y>=x && y>=z){
       
        A = y;
        B = x;
        C = z;
       

    }
   
    if(z>=y && z>=x){
       
        A = z;
        B = y;
        C = x;
       
    }
   
    if(A>=(B+C)){

       
        printf("NAO FORMA TRIANGULO\n");
    }
   
    if((A*A)==(B*B + C*C) && (A<B+C)){

       
        printf("TRIANGULO RETANGULO\n");
       
    }
   
    if((A*A) > (B*B) + (C*C) && (A-B<C)){
       
        printf("TRIANGULO OBTUSANGULO\n");
       
    }
   
    else if((A*A) < ((B*B) + (C*C))){

       
        printf("TRIANGULO ACUTANGULO\n");
       
    }
   
    if(A==B && B==C && C==A){

       
        printf("TRIANGULO EQUILATERO\n");
       
    }
   
    if((A==B && A!=C) || (B==C && B!=A) || (C==A && C!=B)){
       
        printf("TRIANGULO ISOSCELES\n");
       
    }
   
    return 0;
}
