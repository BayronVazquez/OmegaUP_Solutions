#include <iostream>
#include <string>

using namespace std;

size_t getPositionInFibonacciSecuence(unsigned long number)
{
    // Los primeros dos numeros de la sucesion de fibonacci.
    unsigned long n1 = 0, n2 = 1, tmp;

    // Si es cero retornamos la secuencia vacia
    if (number == 0)
    {
        return 0;   // Position 0 (firts number)
    }
    if (number == 1)
    {
        return 1;   // Position 1 (second number)
    }

    size_t position = 1; // Position nth number

    while (n2 <= number)
    {
        if (n2 == number)
        {
            return position;
        }
        position++; // update de position in the secuence

        // actualizamos las variables para la siguiente itineracion
        tmp = n1;
        n1 = n2;
        n2 = tmp + n2;
    }

    return string::npos;
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  // TODO: fixme.
  unsigned long n;

  cin >> n;
  size_t posicion = getPositionInFibonacciSecuence(n);

  if(posicion != string::npos)
  {
      cout << posicion;
  }
  else
  {
      cout << "-1";
  }
  return 0;
}