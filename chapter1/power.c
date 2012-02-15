#include<stdio.h>

int power(int m, int n);

int main(int argc, char const *argv[])
{
  printf("2 ^ 3 : %d\n", power(2, 3));
  printf("3 ^ 5 : %d\n", power(3, 5));
  printf("4 ^ 3 : %d\n", power(4, 3));

  return 0;
}

int power(int base, int power){
  int i;
  int result = 1;
  for(i = 0; i < power; i++){
    result *= base;
  }

  return result;
}
