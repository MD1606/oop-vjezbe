#include "Header.hpp"
int main()
{
	vector <int> v{ 30,40,10,20,50,6 };
	funk(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}
