#include<stdio.h>
#define TABSTOP   8
#define TABCHAR   '\t'
#define SPACECHAR '#'

void entab(char input[]);
void printchars(char c, int times);
void printruler();

int main(int argc, char const *argv[])
{
  /*char input[] = "this         is an   aw some piec  of code.\n";*/
  char input[] = "this         is an   aw some piec  of code.\nright o            bro!\n";
  printruler();
  printf("%s", input);
  entab(input);
  printruler();
  return 0;
}


void entab(char input[])
{
  int c;

  for (size_t i = 0, pos = 1, spaces = 0; (c = input[i]) != '\0'; ++i){

    if (c == ' '){
      //else increment the number of spaces
      ++spaces;

      //if we have spaces equal to 1 tab width print the tab
      if(pos % TABSTOP == 0){
        putchar('\t');
        spaces = 0;
      }

    } else{
      //if the current character is not a space print the spaces and the character
      printchars(SPACECHAR, spaces);
      putchar(c);
      spaces = 0;
    }

    if( c == '\n' )
      pos = 1;
    else
      pos += 1;

  }
}


void printchars(char c, int times){
  for (size_t i = 0; i < times; ++i){
    putchar(c);
  }
}


void printruler(){
  for (int i = 1; i < 100; ++i){
    if(i%TABSTOP == 0)
      putchar('|');
    else
      putchar('_');
  }
  putchar('\n');
}
