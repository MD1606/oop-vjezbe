#include "Header.hpp"
/*1. Napišite klasu timer koja sadrži privatne èlanove h, m tipa int i s tipa double,
koja predstavlja rezultat u trci Formule 1. Napišite potrebne konstruktore
i operatore kako bi za grupu vozaèa izraèunali: */
timer::timer(int h1, int m1, double s1)
{
	this->h = h1;//sati
	this->m = m1;//minute
	this->s = s1;//sekunde
}
timer::timer() {
	this->h = 0;
	this->m = 0;
	this->s = 0;
}
timer timer::operator+=(timer temp) {
	this->h +=temp.h;
	this->m +=temp.m;
	this->s += temp.s;
	return *this;
}
timer timer::operator/=(int br) {
	h = h / br;
	m = m / br;
	s = s / (double)br;
	return* this; // vracamo objekt
}
ostream& operator<<(ostream& output, timer& t) // printanje klase
{
	return output<<"sati " <<t.get_hours() <<"minuta "<< t.get_min() << " sekundi "<< t.get_seconds()<<endl;
}
bool operator<(timer t1, timer t2) // funkcija za usporeðivanje klasa
{
	if (t1.get_hours() < t2.get_hours())
	{
		return true;
	}
	else 
	{
		if (t1.get_min() < t2.get_min())
			return true;
		else {
			if (t1.get_seconds() < t2.get_seconds())
				return true;
			return false;
		}
	}
}
double operator-(timer t1, timer t2)
{
	return abs(t1.get_hours() - t2.get_hours()) * 3600 + abs(t1.get_min() - t2.get_min()) * 60 + abs(t1.get_seconds() - t2.get_seconds());
}

