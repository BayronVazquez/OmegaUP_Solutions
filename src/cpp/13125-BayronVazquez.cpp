#include <iostream>

using namespace std;

void FibonacciSequencePrint( size_t hops , char delimiter )
{
    unsigned long tmp;                  // Temporal number, for arithmetic purpose

    // Los primeros dos numeros de la sucesion de fibonacci.
    unsigned long n1 = 1, n2 = 1;

    // Si es cero retornamos la secuencia vacia
    if( hops == 0)
    {
        return;
    }

    if( hops == 1 )
    {
        cout << n1;
        return;
    }

    if( hops == 2 )
    {
        cout << n1 << delimiter << n2;
        return;
    }

    cout << n1 << delimiter << n2;
    // si es mayor que dos entra en el value y calcula los demas numeros con los primeros dos, si no
    // pasa el bucle ignorandolo y retrona los dos primeros elementos
    for( size_t i = 2; i < hops; i++)
    {
        // Agregamos el nuevo numero de la secuencia fibonacci
        cout << delimiter << n1 + n2;

        // actualizamos las variables para la siguiente itineracion
        tmp = n1;
        n1 = n2;
        n2 = tmp + n2;
    }
    return;
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  // TODO: fixme.
  int i;
  cin >> i;
  FibonacciSequencePrint(i, ' ');
  return 0;
}