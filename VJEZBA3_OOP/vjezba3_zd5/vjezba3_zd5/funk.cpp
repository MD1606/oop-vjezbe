#include "Header.hpp"
int suma(string prvi, string drugi)
{
	int cnt = 0;

	for (int i = 0; i < prvi.size(); i++)
	{
		if (prvi[i] == drugi[0])
		{
			string treci(prvi, i, drugi.size());
			if (drugi == treci)
				cnt++;
		}

	}
	return cnt;
}