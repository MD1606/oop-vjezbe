/*4. Napisati funkciju u za uklanjanje elementa iz vektora sa što manje operacija. Poredak elemenata u vektoru nije bitan.
*/
#include "header.hpp"
void funk(int n, vector<int>& v)
{

    v.erase(v.begin() + n);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}