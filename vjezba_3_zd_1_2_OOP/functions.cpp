#include "Header.hpp"

void unos1(vector <int>& v,int n)
{
	int el;
	for (int i = 0; i < n; i++)
	{
		cout << "unesite elemente vektora: " << endl;
		cin >> el;
		v.push_back(el);
	}
}
void unos2(vector <int>& v, int n1,int n2)
{
	int el;
	int n=1;
	for (int i = 0; i < n; i++)
	{
		cout << "unesite elemente vektora: " << endl;
		cin >> el;
		if (el >= n1 && el <= n2)
			n++; //dok je element u intervalu povecaj velicinu niza(n)
		v.push_back(el);
	}
	v.pop_back();
}
void ispis(vector <int> r)
{
	for (int i = 0; i < r.size(); i++)
		cout << r[i] << endl;
}

void new_vector()
{
	int n, n1, n2,size,suma=0;
	vector <int> new_v(suma);
	vector <int> v;
	vector <int> v1;
	cout << "unesite velicinu 1. vektora: " << endl;
	cin >> n;
	unos1(v, n);
	cout << "vektor 1 je; " << endl;
	ispis(v);
	cout << "unesite granice intervala 2.vektora: " << endl;
	cin >> n1 >> n2;
	unos2(v1, n1, n2);
	cout << "vektor 2 je: " << endl;
	ispis(v1);//ispis 2 vektora
	int cnt = 0;
	for (int i = 0; i <v.size(); i++)
	{
	  for (int j = 0; j < v1.size(); j++)
		if (v[i] == v1[j])
		{
			cnt++;
		}
	  if(cnt==0)// cnt je nula ako el iz prvog niza nije jednak niti jednom clanu u drugom nizu dodajemo u novi vektor element
	  new_v.push_back(v[i]);
	  cnt = 0;
	  }
	
	cout << "vektor sa razlièitim elementima je: " << endl;
	ispis(new_v);
}

