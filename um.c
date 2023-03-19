#include <stdio.h>

int main()
{
    int num[5], par = 0, impar = 0, i, soma;
    float media;
    
    for(i = 0; i < 5; i++){
        printf("\n digite alguns numeros no vetor num: " );
    scanf("%d", &num[i]);
    }

    for(i = 0; i < 5; i++){
        if(num [i] %2 == 0){
            par = par +1;
            printf("\n e par");
        }else{
            impar = impar + 1;
            printf("\n e impar");
        }
    }
    
    for(i = 0; i < 5; i++){
        soma = soma + num [i] + 1;
    }

    for(i = 0; i < 5; i++){
        media = soma/5;
    }

    printf("\n apresente os numeros pares: %d", par);
    printf("\n apresente os numeros impares: %d", impar);
    printf("\n apresente a soma: %d", soma);
    printf("\n apresente a media: %.2f", media);

    return 0;
}
