#include<stdio.h>
#define MAXLINE 1000

int mgetline(char line[], int maxline);
void mcopy(char to[], char from[]);

int main(int argc, char const *argv[])
{
  int len;
  int max;

  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while((len = mgetline(line, MAXLINE)) > 0){
    if(len > max){
      max = len;
      mcopy(longest, line);
    }

  }

  if(max > 0)
    printf("%s", longest);

  return 0;
}


int mgetline(char line[], int maxline){
  int c;
  int i = 0;

  while((c = getchar()) != EOF){
    line[i++] = c;
    printf(">%d:%d<", i, i >= maxline);
    if(i >= maxline){
      break;
    }
  }

  line[i] = '\0';
  return i;
}


void mcopy(char to[], char from[]){
  int i;

  for(i = 0; from[i] != '\0'; i++){
    to[i] = from[i];
  }

  to[i] = from[i];
}
