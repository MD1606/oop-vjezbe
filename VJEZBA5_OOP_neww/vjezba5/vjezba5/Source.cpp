#include "Header.hpp"
/*4. Napisati program koji će generirati n meta i jednog pucača (oružje). Uz pretpostavku
da je položaj oružja horizontalan i da se oružje može zakretati za 360◦
, izračunati
koliko je meta pogođeno jednim punjenjem.*/
void position::game()
{
	weapon w;
	position p;
	double x, y, z;
	int n = rand() % 10 + 1; //BR meta
	target* arr = new target[n]; //alokacija niza meta
	for (int i = 0; i < n; i++) //niz meta (generiramo mete)
	{
		p.set(0, 10); // pozivamo funk za rand vrijednosti
		p.get(arr[i].p1.x, arr[i].p1.y, arr[i].p1.z);// pozivamo funk za dohvacsnje clanova
		p.set(0, 10);
		p.get(arr[i].p2.x, arr[i].p2.y, arr[i].p2.z);
		// << arr[i].p1.x<<endl;
	}
	cout << "Enter the number of bullets: " << endl;
	cin >> w.n;
	w.num = 20; //broj metaka koji stane u jedno punjenje
	p.set(0, 10);
	p.get(w.p.x, w.p.y, w.p.z);
	if (w.n > w.num)
		w.n = w.num; // ukoliko korisnik unese veci broj metaka nego što stane u jedno punjenje
	for (int i = 0; i < n; i++)
	{
		//provjeravamo da li je pozicija tocke unutar pozicija mete (x i z)
		if ((arr[i].p1.x < w.p.x && arr[i].p2.x > w.p.x && arr[i].p1.z < w.p.z && arr[i].p2.z > w.p.z)
			|| (arr[i].p1.x > w.p.x && arr[i].p2.x < w.p.x && arr[i].p1.z > w.p.z && arr[i].p2.z < w.p.z)
			|| (arr[i].p1.x < w.p.x && arr[i].p2.x > w.p.x && arr[i].p1.z > w.p.z && arr[i].p2.z < w.p.z)
			|| (arr[i].p1.x > w.p.x && arr[i].p2.x < w.p.x && arr[i].p1.z < w.p.z && arr[i].p2.z > w.p.z))
			arr->p += 1;
		else
			arr->np += 1;
	}
	cout << "number of targets: " << n << endl;
	cout << w.n << " bullets" << " hit the target: " << arr->p << " times" << " and missed: " << arr->np << endl;
}