#include <iostream>

using namespace std;

int main()
{
    int pelotas, maximo, numero;
    int* contador;

    cin >> pelotas >> maximo;

    contador = new int[maximo] {0};
    
    for (register int i = 0; i < pelotas; ++i) {
        cin >> numero;
        contador[numero-1] += 1;
    }
    
    for (register int i = 0; i < maximo; i++) {
        cout <<  i+1 << ": " << contador[i] << endl;
    }

    delete[] contador;
    return 0;
}
