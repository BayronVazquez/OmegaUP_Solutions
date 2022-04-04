#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<long, size_t> Conteo( vector<long> numeros )
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
  int x,y, tmp;
  vector<long> numeros;

  cin >> x >> y;

  for( int i = 0; i < x*y; ++i )
  {
      cin >> tmp;
      numeros.push_back(tmp);
  }

  map<long, size_t> lista = Conteo( numeros );
  for( auto i = lista.begin(); i != lista.end(); i++ )
  {
      cout << i->second << " ";
  }
  return 0;
}