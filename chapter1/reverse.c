#include<stdio.h>

char* mreverse(char input[]);
int length(char input[]);

int main(int argc, char const *argv[])
{
  puts(mreverse("this is awesome!\0"));
  return 0;
}

char* mreverse(char input[]){
  int i , len, temp;

  for(i = 0, len = length(input); i < len; i++){
    temp = input[i];
    input[i] = input[len - i] ;
    input[len - i] = temp;
  }
}


int length(char input[]){
  int length;
  for(length = 0; input[length] != '\0'; length++ )
    ;
  return length;
}

