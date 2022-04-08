#include <iostream>
#include <cctype>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

    string word;
    cin >> word;

    for(size_t i=0; i<word.size(); i++)
    {
        if( isupper( word[i] ) )
        {
            cout << "Si";
            return 0;
        }
    }
    cout << "No";

  return 0;
}
