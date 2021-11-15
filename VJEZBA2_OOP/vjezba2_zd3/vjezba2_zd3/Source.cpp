/*3.Definirati strukturu kruznica i strukturu pravokutnik koja predstavlja
pravokutnik èije su stranice paralelne sa osima apscisa i ordinata. Napisati
funkciju koja prima niz pravokutnika i jednu kruznicu i vraæa broj pravokutnika koji sijeku kružnicu.
Niz pravokutnika i kružnica šalju se u funkciju pomoæu const referenci*/
#include <iostream>
#include <iomanip>
using namespace std;
typedef struct {
	int x, y, r;
}kruznica;

typedef struct {
	int a1, a2, b1, b2;
}pravokutnik;

void find(pravokutnik* arr, const kruznica& k, int d, int& m) // kruznica se salje preko reference (&) pravokutnik preko pointera
{
	for (int i = 0; i < d; i++)// presijek kruznice i kvadra
	{
		int kx = max(arr[i].a1, min(k.x, arr[i].b1));
		int ky = max(arr[i].a2, min(k.y, arr[i].b2));
		int p = pow((kx - k.x), 2) + pow((ky - k.y), 2);
		if (p <= k.r * k.r)
			m++; //vraca broj pravokutnika koji se sijeku(preko reference)
	}
}
int main()
{
	pravokutnik p;
	kruznica k;
	int d, m = 0;
	cout << "unesite broj pravokutnika" << endl;
	cin >> d;
	cout << "unesite tocke kruznice i radijus" << endl;
	cin >> k.x >> k.y >> k.r;
	pravokutnik* arr = new pravokutnik[d];// niz pravokutnika
	for (int i = 0; i < d; i++) // niz pravokutnika
	{
		cout << "unesite tocke pravokutnika" << endl;
		cin >> p.a1 >> p.a2 >> p.b1 >> p.b2;
	}
	find(arr, k, d, m);
	cout << "broj pravokutnika koji sijeku kruznicu je: " << m;
	return 0;
}