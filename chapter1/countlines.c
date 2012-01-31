#include<stdio.h>

int main(int argc, char const *argv[])
{
  int c, nl=0;
  while( (c = getchar()) != EOF )
    //if('\n' == c)
    //if(10 == c)
    if(0x0A == c)
      ++nl;

  printf("%d\n", nl);
  return 0;
}
