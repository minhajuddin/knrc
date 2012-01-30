#include<stdio.h>

//print fahrenheit-celcius table for fahr = 0, 20... 300
int main(int argc, char const *argv[])
{
  int lower, higher, step;
  float fahr, celcius;

  lower = 0;
  higher = 300;
  step = 20;

  fahr = lower;

  printf("  F     C\n");
  printf("----------\n");

  while(fahr < higher){
    celcius = (fahr - 32) * 5.0 / 9;
    printf("%3.0f %6.1f\n", fahr, celcius);
    fahr += step;
  }

  /*
  for(fahr = lower; fahr <= higher; fahr += step){
    celcius = (fahr - 32) * 5.0 / 9;
    printf("Fahrenheit: \t%i \t: \t%i \tCelsius\n", fahr, celcius);
  }
  */

  return 0;
}
