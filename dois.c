#include <stdio.h>

int main()
{
    int a, b, c, d, e, maior, menor;
    
    printf("\n digite um numero pra letra a: ");
    scanf("%d", &a);
    printf("\n digite um numero pra letra b: ");
    scanf("%d", &b);
    printf("\n digite um numero pra letra c: ");
    scanf("%d", &c);
    printf("\n digite um numero pra letra d: ");
    scanf("%d", &d);
    printf("\n digite um numero pra letra e: ");
    scanf("%d", &e);
    
    maior = a;
    menor = a;
    
    if(a > b){
        maior =a;
    }else if(b > c){
        maior = b;
    }else if( c > d){
        maior = c;
    }else if(d >e){
        maior = d;
    }else{
        maior = e;
    }
    
    if(a < b){
        menor = a;
    }else if( b < c){
        menor = b;
    }else if( c < d){
        menor = c;
    }else if(d < e){
        menor = d;
    }else{
        menor = e;
    }
    
   printf("\n apresente o maior: %d", maior);
   printf("\n apresente o menor: %d", menor);

    return 0;
}
