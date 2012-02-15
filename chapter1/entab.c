#include<stdio.h>
#include<string.h>
#define TABSTOP   8
#define TABCHAR   '\t'
#define SPACECHAR '#'

void entab(char input[]);
void printtab(int spaces, int pos);
void printchars(char c, int times);
void printruler();

int main(int argc, char const *argv[]){
  char input[] = "Thisx         is        awesome  stuff             buddy.\nfoo        is amazing is tfhe\n";
  printruler();
  printf("%s", input);
  entab(input);
  printruler();
  return 0;
}


void entab(char input[]){
  int c, spaces = 0, pos = 0;
  for (size_t i = 0, len = strlen(input); i < len; ++i){
    c = input[i];

    if(c!= ' '){
      if(spaces != 0){
        printtab(spaces, i);
        spaces = 0;
      }
      putchar(c);
    }
    else{
      ++spaces;
    }

    if(c == '\n'){
      pos = 0;
    }else{
      ++pos;
    }

  }
}

void printtab(int spaces, int endpos){
  /*printf("spaces: %d, pos: %d", spaces, pos);*/

  int first_tab_length, numtabs;
  //remove spaces taken by first tab
  first_tab_length = (TABSTOP - (endpos - spaces) % TABSTOP);

  if(first_tab_length > spaces){
    printchars(SPACECHAR, spaces);
  }

  numtabs = 1;
  spaces = spaces - first_tab_length;

  numtabs += spaces/TABSTOP;
  int numspaces = spaces%TABSTOP;

  printchars(TABCHAR, numtabs);
  printchars(SPACECHAR, numspaces);
}


void printchars(char c, int times){
  for (size_t i = 0; i < times; ++i){
    putchar(c);
  }
}

void printruler(){
  for (int i = 1; i < 100; ++i){
    printf("%d", i % 10);
  }
  putchar('\n');
}
