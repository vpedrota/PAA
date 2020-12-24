#include "stdio.h"
#include "math.h"
 
int ehPrimo(int n){ 
  int i;
 
  if (n <= 1) return 0;
 
  if(n <= 3) return 1;
 
  for (i = 2; i < sqrt(n) + 1 ; i++)
    if (n % i == 0)
      return 0;
 
  return 1;
} 
 
int main(){
 
  int n, i, x = 0;
 
  scanf("%d", &n);

  /*

  opção testando apenas impares

  if(ehPrimo(2) && ehPrimo(n - 2)) x++;

  for(i = 3; i < n/2 + 1; i+= 2){
    if(ehPrimo(i) && ehPrimo(n - i)) x++;
  }

  */
 
  for(i = 2; i < n/2 + 1; i++){
    if(ehPrimo(i) && ehPrimo(n - i)) x++;
  }
 
  printf("%d\n", x);
 
  return 0;
}