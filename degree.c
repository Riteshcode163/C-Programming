#include <stdio.h>

int main (){
  int sum=0;
  int n;
  printf("give the value of n \n");
  scanf("%d", &n);

  for (int i = 1; i <=10; i++)
  {
    sum += n*i;
  }
  printf("the sum is %d", sum);

  
  return 0;
}