#include<stdio.h>

int main(int argc, char const *argv[])
{
  int c,
      i,
      nwhite = 0,
      nother = 0,
      ndigit[10];

  for(i = 0; i < 10; i++)
    ndigit[i] = 0;

  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\t' || c == '\n'){
      ++nwhite;
    }
    else if(c > 47 && c < 58){
      ++ndigit[c - 48];
    }
    else{
      ++nother;
    }
  }


  printf("white:%d\tnon-white:%d", nwhite, nother);

  for(i = 0; i < 10; i++)
    printf("\t%d:%d", i, ndigit[i]);

  printf("\n");

  return 0;
}
