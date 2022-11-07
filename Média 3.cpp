#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
    float N1, N2, N3, N4, media, exame, recuperacao, mediafinal;
    
    printf("Calcular a média dos alunos e determinar se estão aprovados ou não.\n\n");
    
    printf("Digite o valor da N1: ");
    scanf("%f", &N1);
    
    printf("Digite o valor da N2: ");
    scanf("%f", &N2);
    
    printf("Digite o valor da N3: ");
    scanf("%f", &N3);
    
    printf("Digite o valor da N4: ");
    scanf("%f", &N4);
    
    media = (N1*2+N2*3+N3*4+N4*1)/10;
    
    printf("Média do aluno: %.1f\n", media);
      
    if(media>=7.0){
        
        printf("Aluno aprovado.\n");
    }
    
    if(media<5.0){
        
        printf("Aluno reprovado.\n");
    }
    
    if(media>=5.0 && media<7.0){
        
        printf("Aluno em exame.\n");
        
    scanf("%f", &exame);
    printf("Nota do exame: %.1f\n", exame);

    recuperacao = (media+exame)/2;
    
    if(recuperacao>=5.0){
        
        printf("Aluno aprovado.\n");
    }else{
        
        printf("Aluno reprovado.\n");
    }

    mediafinal = recuperacao;
    
    printf("Media final: %.1f\n", mediafinal);
    } 
 
    return 0;
}
