#include "header.hpp"
int main() {
	int n;
	vector<int> v = { 20,30,40,50 };
	cout << "unesite indeks broja koji zelite maknuti: " << endl;
	cin >> n;
	funk(n, v);
	return 0;
}