#include<stdio.h>

int main(int argc, char const *argv[])
{
  int c, prev = 0;
  while((c = getchar()) != EOF){
    if(c != prev || prev != ' ')
      putchar(c);
    prev = c;
  }
  return 0;
}
