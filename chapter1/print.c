#include<stdio.h>

int main(int argc, char const *argv[])
{
  int i = 0;
  while(i < 20){
    printf("%4d  %4o %4x\n", i, i, i);
    i++;
  }
  return 0;
}
