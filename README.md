# segundo_parcial_ped


Ejercicio 4.1

Analice el siguiente código:

int CountMatches(const int values[], int n) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      if (values[i] == j) {
        count++;
      }
    }
  }

  return count;
}


1. ¿Cuál es la complejidad temporal Big-O?

R// 

El bucle externo se ejecuta n veces dependiendo del tamaño del arreglo values.

El bucle interno tiene un límite constante y se ejecuta exactamente 3 veces por cada iteración del bucle,el número total de operaciones es igual a n=3 segun las constantes y según las reglas de la notación Big-O.


2. Si `n` se duplica, ¿cómo cambia aproximadamente el número de comparaciones?

R// 

En el caso que el número de comparaciones se duplicara proporcionalmente seria dado por n al cuadrado.





// Ejercicio 4.2

Analice el siguiente código:

int CountComparisons(const int values[], int n) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j += 2) {
      if (values[i] < values[j]) {
        count++;
      }
    }
  }

  return count;
}



Suponga que `n` es un entero positivo par.

Responda:

1. ¿Cuál es la complejidad temporal Big-O?

R// El bucle tiene un límite constante pero le agrega n+2 al siguiente numero por cada iteración del bucle,el número total de operaciones es igual a n+2 según las reglas de la notación Big-O.


2. Si `n` se duplica, ¿cómo cambia aproximadamente el número de comparaciones?

R//

En el caso que el número de comparaciones se duplicara proporcionalmente seria dado por n+2 ya que siempre el primer numero sera menor porque al segundo numero se le agrega n+2 creando la constante.