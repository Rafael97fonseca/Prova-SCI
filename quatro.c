#include <stdio.h>

int main()
{
    int num[5], i;
    
    for(i = 0; i < 5; i++){
        printf("\n digite os numero no vetor : ");
        scanf("%d", &num[i]);
    }
    
    printf("\n apresente na tela a posicao 3: %d", num[3]);
    

    return 0;
}
