#include <stdio.h>

#define M 3
#define N 5

int grade[M][N];

int caminharGrade(int m, int n){
    
    if(m==0 || n==0) return 0;
    if(m==1 || n ==1) return 1;
    
    return caminharGrade(m-1, n) + caminharGrade(m, n-1);
}
    



int main(){

    int caminhos = caminharGrade(M,N);
    printf("Número de caminhos diferentes em uma grade %dx%d: %d\n", M, N, caminhos);
    return 0;
}


