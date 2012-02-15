#include<stdio.h>

void printstring(char line[]);


int main(int argc, char const *argv[])
{
  printstring("this is awesome");
  return 0;
}


void printstring(char line[]){
  puts(line);
  puts("\n");
}
