#include<stdio.h>

int main(int argc, char const *argv[])
{
  int c, nt, nb, nl;
  nt = nb = nl = 0;
  while((c = getchar()) != EOF){
    if(0x09 == c)
      ++nt;
    if(0x20 == c)
      ++nb;
    if(0x0A == c)
      ++nl;
  }

  printf("nb:%d\tnt:%d\tnl:%d\n", nb, nt, nl);
  return 0;
}
