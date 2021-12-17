#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>
using namespace std;
/*1. Napišite klasu timer koja sadrži privatne èlanove h, m tipa int i s tipa double,
koja predstavlja rezultat u trci Formule 1*/
class timer {
	int h;
	int m;
	double s;
public:
	timer(int h1,int m1,double s1);
	timer();
	int get_hours() {
		return h;
	}
	int get_min() {
		return m;
	}
	double get_seconds() {
		return s;
	}
	timer operator+=(timer temp);
	timer operator/=(int br);
	void add(int a) {
		s += a;
	}
};
ostream& operator<<(ostream& output,timer& t);//printanje klase
bool operator<(timer t1, timer t2);
double operator-(timer t1, timer t2);
class Penalty {
	int x;
public:
	Penalty(int a) {
		x = a;
	}
	void operator()(timer& p) {
		p.add(x);// uvecavamo vrijeme sekundi za x

	}
};
