#include<stdio.h>

int main(int argc, char const *argv[])
{
  if(argc != 2){
    puts("Invalid number of args.");
    return -1;
  }

  puts(argv[1]);

  return 0;
}
