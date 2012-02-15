#include<stdio.h>

int main(int argc, char const *argv[])
{
  int c;
  int counts[10];
  int count = 0;
  int i, j;
  int max = 0;

  for(i = 0; i < 10; i++){
    counts[i] = 0;
  }

  while((c = getchar()) != EOF){
    if(c == ' ' || c == '\t' || c == '\n'){
      ++counts[count];
      if(max < count){
        max = count;
      }
      count = 0;
    }
    else{
      ++count;
    }
}

  for(i = max; i > 0; i--){
    for(j = 0; j < 10; j++){
      if(counts[j] >= i){
        printf("--\t");
      }
      else{
        printf("  \t");
      }
    }
    putchar('\n');
  }

  for(i = 0; i < 10; i++){
    printf("%2d\t", i);
  }
  putchar('\n');

  return 0;
}
