#include <stdio.h>

/*
* Esta practica correspone a la numero 6 del curso de Fundamentos de Programacion
* Por: Adolfo Roman Jimenez
*/

int main (void)
{
  //Se declaran las variables
  int celsius;
  float fahr;

//Se asigna el valor de entrada a transformar por el usuario

  printf("Insert Celsius temp as an integer: ");
  scanf("%i", &celsius);

  //Se asigna a la variable valores utilizando expresiones aritmeticas y cast
  fahr =  ((9* (float)celsius) / 5) + 32;

  //Se usan expresiones logicas para mostrar el resultado final
  if(celsius < 15)
  {
    printf("%i Celsius equals %.1f Fahrenheit. That's cold!\n", celsius, fahr);
  }
  else if (celsius >= 15 && celsius < 40)
  {
    printf("%i Celsius equals %.1f Fahrenheit. That's warm.\n", celsius, fahr);
  }
  else
  {
    printf("%i Celsius equals %.1f Fahrenheit. It's super hot!\n", celsius, fahr);
  }

  return 0;

}
