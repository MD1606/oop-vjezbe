#include "Header.hpp"
void brojac::count()
{
	zohar z;
	vrabac v;
	tarantula t;
	int sum = 0;

	zivotinja* zohar = &z;
    zivotinja* vrabac = &v;   
	zivotinja* tarantula =&t;
	string s;
	int n=0;
	
	while (n < 5)
	{
		cout << "unesite vrstu zivotinje: " << endl;
		cin >> s;
		if (s == zohar->vrsta_zivotinje())
		{
			cout << zohar->vrsta_zivotinje() << zohar->broj_nogu() << endl;
			sum = sum + zohar->broj_nogu();
		}
		else if (s == vrabac->vrsta_zivotinje())
		{
			cout << vrabac->vrsta_zivotinje() << vrabac->broj_nogu() << endl;
			sum = sum + vrabac->broj_nogu();
		}
		
		else if (s == tarantula->vrsta_zivotinje())
		{
			cout << tarantula->vrsta_zivotinje() << tarantula->broj_nogu() << endl;
			sum = sum + tarantula->broj_nogu();
		}
		n++;
	}
	cout<<"ukupan broj nogu je: "<<sum<<endl;
}