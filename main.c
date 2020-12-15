#include <stdio.h>
void printDown(int n);
void printNDownR(int n);
int main(void) {
  printDown(15);
  printf("\n");
  printNDownR(4);
  return 0;
}
void printDown(int n){  
while(n)   
printf("%d ",n--); 
}
void printNDownR(int n){
if (n){   
printf("%d ",n);   
printNDownR(n-1);
} 
} 