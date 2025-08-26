#include <stdio.h>

#define TAMANHO 10

int array[TAMANHO] = {1,1,21};

int existeSubconjunto(int index, int alvo){
    if(alvo == 0) return 1;
    
    if(index == TAMANHO || alvo < 0) return 0;
    
    return existeSubconjunto(index + 1, alvo - array[index]) || existeSubconjunto(index + 1, alvo);
        
}
    
  

int main(){
    
    int alvo = 20;    
    int indexInicial = 0;
    
    int resultado = existeSubconjunto(indexInicial, alvo);
    if(resultado == 1){
        printf("Existe um subconjunto cuja soma resulta em %d.", alvo);
    }else if(resultado == 0){
        printf("Não existe um subconjunto cuja soma resulta em %d.", alvo);
    }
    return 0;
}


