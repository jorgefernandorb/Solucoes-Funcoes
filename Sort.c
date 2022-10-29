#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(void) {
  int vet[TAM], vet2[TAM], aux, pivo, *p=NULL, b=0, q=0;
  p=vet2;
  srand(time(NULL));
  for(int i=0;i<TAM;i++){
    vet[i]=rand()%10;
    vet2[i]=vet[i];
  }
  for(int i=0; i<TAM; i++) printf("%d ", vet[i]);
  printf("\n");
  printf("\nOrdenação quick\n");
  for(int i=0;i<TAM-1;i++){
    pivo=i;
    for(int j=i+1;j<TAM;j++){
      if(vet[i]>vet[j]){
        aux=vet[j];
        vet[j]=vet[i+1];
        vet[i+1]=aux;
        i++;
        q++;
      }
    }
    if(vet[pivo]!=vet[i]){
      aux=vet[pivo];
      vet[pivo]=vet[i];
      vet[i]=aux;
      i=pivo;
    }
 }
  for(int i=0; i<TAM; i++) printf("%d ", vet[i]);
  printf("\n");
  printf("Número de passos foi: %d \n", q);
  printf("\n");
  
  printf("Ordenação bolha\n");
  for(int i=0;i<TAM;i++){
    for(int j=0;j<TAM-i;j++){
      if(*(p+j)>*(p+j+1)){
        aux = *(p+j);
        *(p+j) = *(p+j+1);
        *(p+j+1) = aux;
        b++;

      }
    }
  }
  for(int i=0; i<TAM; i++) printf("%d ", vet[i]);
  printf("\nO número de passos foi: %d\n", b);
  return 0;
}