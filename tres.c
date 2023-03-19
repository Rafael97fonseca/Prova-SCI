#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, nota4, fim = 1,  i;
    float media;
    char nome[30];
    
    do{
        printf("\n informe o seu nome: ");
        scanf("%s", nome);
        printf("\n digite a primeira nota: ");
        scanf("%d", &nota1);
        printf("\n digite a segunda nota: ");
        scanf("%d", &nota1);
        printf("\n digite a terceira nota: ");
        scanf("%d", &nota1);
        printf("\n digite a quarta nota: ");
        scanf("%d", &nota4);
        
        printf("\n deseja continua?(1 - sim 0 - nao)");
        scanf("%d", &fim);
    }while(fim != 0);
    
    
    media = (nota1 + nota2 + nota3 + nota4)/4;
    
    if(media < 6){
        printf("\n o aluno esta reprovado");
    }
    
    if(media >= 6){
        printf("\n o aluno aprovado");
    }
    
    printf("\n apresente o nome do aluno na tela: %s", nome);
    printf("\n apresente a media das notas: %.2f", media);

    return 0;
}
