#include<stdio.h>

int main(int argc, char const *argv[])
{
  int c;
  while((c = getchar()) != EOF){
    putchar(c);
    if(c == ' ' || c == '\t'){
      putchar('\n');
    }
  }
  return 0;
}
