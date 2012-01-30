#include<stdio.h>

int main(int argc, char const *argv[])
{
  int i = 0;
  while(i < 256){
    printf("%4x  %c\n", i, i);
    i++;
  }
  return 0;
}
