#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

map<long, size_t> conteo( vector<long> numeros )
{
    map<long, size_t> listaDeConteo;
    pair<map<long, size_t>::iterator, bool> valorInsertado;

    for(auto it = numeros.begin(); it != numeros.end(); it++ )
    {
        valorInsertado = listaDeConteo.insert( pair<long, size_t>(*it, 1) );
        if(valorInsertado.second == false)
        {
                valorInsertado.first->second++;
        }
    }

    return listaDeConteo;
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  // TODO: fixme.
  int qty;
  long tmp;
  vector<long> numeros;

  cin >> qty;

  for(int i=0; i<qty; i++)
  {
      cin >> tmp;
      numeros.push_back(tmp);
  }

  map<long, size_t> contador = conteo( numeros );
  for(auto it = contador.begin();it != contador.end(); it++)
  {
      cout << it->first << " " << it->second << endl;
  }
  return 0;
}