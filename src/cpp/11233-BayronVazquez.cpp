#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
    int n,i, valor, mayor = 0, moda;
    map<int, int> contador;
    map<int, int>::iterator it;
    pair<map<int,int>::iterator, bool> ret;

    cin >> n;
    for(i=0; i<n; ++i){
    		cin >> valor;
        ret = contador.insert( pair<int, int>(valor, 1) );
        if(ret.second == false){
                ret.first->second++;
        }
    }

    for( it = contador.begin(); it != contador.end(); it++){
            if( it->second > mayor ){
                    mayor = it->second;
                    moda  = it->first;
            }
    }
    cout << moda;
    return 0;
}