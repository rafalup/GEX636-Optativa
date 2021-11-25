#include <stdio.h>
#include <stdlib.h>



void imprimi(int vetor[1000]){
    int i,j;
    for(i = 0; i < 1000; i++) 
        printf("%d",vetor[i]);
    printf("\n");

}

int main(){
    int i;
    int vetor[1000];
    for(i = 0; i < 1000; i+=2) {
        vetor[i] = 2;
        vetor[i+1] = 1;
    }

    imprimi(vetor); 
}