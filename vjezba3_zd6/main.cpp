#include "Header.hpp"
int main()
{
    vector <string> str;
    rev_sort(str);
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
    }
	return 0;
}