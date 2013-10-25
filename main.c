/*
Nota de interpretación: Todo ingrediente es único y no admite repetición
						La masita es opcional.
						ej. Fila rica puede ser:
                                                 Confite1 Confite2 Confite3
                                                 Confite2 Confite3 Confite1
                                                 Masita   Confite1 Confite3
                                                 ...

							Ing_rico! 			   ing_resto
filas&columnas_rico * -------------------- * --------------------- = posibilidades
					  (pos_rico-ing_rico)!   (pos_resto-ing_resto)
					
*/



#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

# define FILAS_COLUMNAS 3 // Permite cualquier tablero cuadrado, siempre y cuando el resultado quepa en un long ^^
# define INGREDIENTES_RICOS 4 //Incluye masita
# define RESTO_INGREDIENTES 7 //Incluye sobrante de los ricos

long factorial (int num)
{
  int i = 1;
  long fact = 1;
  while (num > 1) //La ultima multiplicación por 1 no tiene mucho sentido ^^
  {
    fact = fact * num;
    num = num - 1;
  }
  return fact;
}

long combinatoria (int num, int pos)
{ 
  long comb = factorial(num) / factorial(num-pos);
  return comb;
}

int main(int argc, char *argv[])
{
  //int posicionesRico = FILAS_COLUMNAS;
  //int restoPosiciones = FILAS_COLUMNAS * (FILAS_COLUMNAS - 3);
  int filasColumnasRicas = FILAS_COLUMNAS * 2;
  long ingredientesRicos = combinatoria(INGREDIENTES_RICOS, FILAS_COLUMNAS);
  long restoIngredientes = combinatoria(RESTO_INGREDIENTES, FILAS_COLUMNAS * (FILAS_COLUMNAS - 1));
  long combinaciones = filasColumnasRicas * ingredientesRicos * restoIngredientes;
  printf("Salida: %d\n",combinaciones);
  system("PAUSE");	
  return EXIT_SUCCESS;
}
