#include<stdio.h>

#define LOWER 0
#define HIGHER 300
#define STEP 20

//print fahrenheit-celcius table for fahr = 0, 20... 300
int main(int argc, char const *argv[])
{
  float fahr, celcius;

  celcius = LOWER;

  printf("  C     F\n");
  printf("----------\n");

  while(celcius < HIGHER){
    fahr = ( celcius * 9.0 / 5 ) + 32;
    /*celcius = (fahr - 32) * 5.0 / 9;*/
    printf("%3.0f %6.1f\n",  celcius, fahr );
    celcius += STEP;
  }

  /*
  for(fahr = lower; fahr <= HIGHER; fahr += step){
    celcius = (fahr - 32) * 5.0 / 9;
    printf("Fahrenheit: \t%i \t: \t%i \tCelsius\n", fahr, celcius);
  }
  */

  return 0;
}
