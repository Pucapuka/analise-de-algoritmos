#include <stdio.h>
#define DEGRAUS 20

int escada[DEGRAUS + 1];

int subirEscada(int degraus){
    if(degraus <= 3) 
        return degraus;
    if(escada[degraus] != 0)
        return escada[degraus];
    
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
