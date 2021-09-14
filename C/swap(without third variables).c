#include <stdio.h>
int main() {
  int a, b;
  a = 10;
  b= 15;
  
  printf("Before\n");
  printf("a = %.d\n", a) ;
  printf("b = %.d\n", b);
 

  a = a - b;   

  b = a + b;

  a = b - a;
    
  printf("After\n") ;  
  printf("a = %.d\n", a) ;
  printf("b = %.d", b);
  

  return 0;
}
