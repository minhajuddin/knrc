#include<stdio.h>

int main(int argc, char const *argv[])
{
  int c;
  int counts[100];
  int count = 0;
  int i, j;

  for(i = 0; i < 100; i++){
    counts[i] = 0;
  }

  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\t' || c == '\n'){
      ++counts[count];
      count = 0;
    }
    else{
      ++count;
    }

  }

  for(i = 0; i < 100; i++){
    if(counts[i] != 0){
      printf("%d: ", i);
      for(j = 0; j < counts[i] ; j++)
        putchar('|');
      printf("\n");
    }
  }

  return 0;
}
