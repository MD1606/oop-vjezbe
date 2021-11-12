#include "Header.hpp"
/*6. Napišite funkciju koja stringove, koje korisnik unosi, sprema u vektor stingova,
svaki string preokrene te sortira vektor po preokrenutim stringovima.*/

void rev_sort(vector <string>& str)
{
	string str1;
	for (int i = 0; i < 5; i++)
	{
		cout << "unesite string" << endl;
		cin >> str1;
        str.push_back(str1);
	}
	for (int i = 0; i < str.size(); i++)
	{
		reverse(str[i].begin(), str[i].end());
	}
	sort(str.begin(), str.end());
}