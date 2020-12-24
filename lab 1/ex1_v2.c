#include <stdio.h>
#include <math.h> 

#define NMAX 1000000 

int main() {

  int i, j, vetor[NMAX], x = 0;
  int n, raiz;

  scanf("%d", &n);

  for (i=2; i<=n; i++) {
      vetor[i]=i;
  }

  for (i=2; i<=n; i++)
    if (vetor[i]==i)
      for (j=i+i; j<=n; j+=i) 
        vetor[j]=0;

  for(i = 2; i < n/2 + 1; i++)
    if(vetor[i] != 0 && vetor[n-i] != 0) x++;
  
  printf("%d", x);
  return 0;
  
}