Nota de interpretación: Todo ingrediente es único y no admite repetición
La masita es opcional.

ej. Fila rica puede ser:
  Confite1 Confite2 Confite3
   Confite2 Confite3 Confite1
   Masita Confite1 Confite3
   ...

                          Ing_rico!              ing_resto
filas&columnas_rico * -------------------- * --------------------- = posibilidades
                      (pos_rico-ing_rico)!   (pos_resto-ing_resto)

Completando una fila de ingredientes que hacen la torta rica, quedan 7, los cuales se reparten en todas 
las combinaciones posibles. Esto se hace para cada una de las filas y las columnas.

Perdon por usar C y no Java o C#, pero es lo unico que tenia a mano (lo que hizo que tenga que hacer el
algoritmo para el calculo de los factoriales

Por otro lado no es necesario hacer uso de variables, pero ayuda la lectura, un codigo mas eficiente seria
hacer uso y abuso de las constantes sin pasar por variables temporales.
                                    
