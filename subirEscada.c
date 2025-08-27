//Utilizando Abordagem Top-Down (recursiva com memoization - resolve o problema de cima para baixo (de n até 0), salvando os resultados das subchamadas)

#include <stdio.h>
#define DEGRAUS 20

int escada[DEGRAUS + 1];

int subirEscada(int degraus){
    if (degraus == 0 || degraus == 1) return 1;
    if (degraus == 2) return 2;

    if (escada[degraus] != 0) return escada[degraus];

    escada[degraus] = subirEscada(degraus - 1) + subirEscada(degraus - 2);
    return escada[degraus];
}

int main()
{
    for(int degrau = 0; degrau <= DEGRAUS; degrau ++){
        printf("Para subir %d degraus há %d formas diferentes\n", degrau, subirEscada(degrau));
    }
    
    return 0;
}


//Utilizando uma abordagem bottom-up (iterativa com tabela, começa do caso base (0, 1, ...) e vai subindo até n)

/*#include <stdio.h>

#define TAM 20

int escada[TAM +1];

int subirEscada(int degraus){
    
    if(degraus < 0){
        printf("Não se pode ter números negativos de degraus!\n");
        return 0;
    }
    
    escada[0]=1;
    escada[1]=1;
    
    for (int i = 2; i <= degraus; i++){
        escada[i] = escada[i - 1] + escada[i - 2];
    }
    
    return escada[degraus];
}


int main()
{
    int degraus =  5;
    int subida = subirEscada(degraus);
    printf("A quantidade de formas de subir uma escada de %d degraus é de %d vezes", degraus, subida);

    return 0;
}*/
