#include "Header.hpp"
/*3. Koristeæi STL funkcije sortirajte vektor, ubacite 0 ispred najmanjeg elementa, te
sumu svih elemenata iza najveæeg elementa*/
void funk(vector <int>& v)
{   sort(v.begin(), v.end());
int sum = accumulate(v.begin(), v.end(),0);
	v.insert(v.begin(), 0);
	v.push_back(sum);
}
