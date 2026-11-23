
#include <stdio.h>

int main() {
 
    int escolha,palpite;
 
    printf("Número para advinhar entre 1-1000:\n");
    scanf("%d",&escolha); //min max?
 
    printf("Advinha o número entre 1-1000:\n");

  
    while(palpite!=escolha)
    {
        scanf("%d",&palpite);
        if (palpite == escolha) 
            {
                printf("acertaste");
            } else if (palpite > escolha) 
                { 
                    printf("Menor");
                } 
                   else
                {
                    printf("Maior");
                }
    }
}
