#include "Header.hpp"
/*3. Koriste�i STL funkcije sortirajte vektor, ubacite 0 ispred najmanjeg elementa, te
sumu svih elemenata iza najve�eg elementa*/
void funk(vector <int>& v)
{   sort(v.begin(), v.end());
int sum = accumulate(v.begin(), v.end(),0);
	v.insert(v.begin(), 0);
	v.push_back(sum);
}
