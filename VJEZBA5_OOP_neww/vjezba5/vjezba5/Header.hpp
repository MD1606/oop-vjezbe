#include <iostream>
#include <stdlib.h>
using namespace std;
/*1. Napisati klasu za poziciju točke u prostoru koja ima tri double podatka: dužinu,
širinu i visinu (x, y, z koordinate). Klasa ima sljedeće funkcije:*/
class position
{

	double x = 0, y = 0, z = 0; //dužina širina visina, koordinate
	//position(){x = 0, y = 0, z = 0};//KONSTRUKTORI Funkciju za postavljanje vrijednosti članova (treba imati pretpostavljene vrijednosti 0).
public:
	void game();
	/*◦ Funkciju za postavljanje pseudorandom vrijednosti članova(granice intervala
		su parametri funkcije).*/
	void set(int min = 1, int max = 100)
	{
		x = rand() % max + min; // raspon od 1(min) do 10(max)
		y = rand() % max + min;
		z = rand() % max + min;
	};
	/*◦ Funkciju za dohvaćanje vrijednosti članova*/
	void get(double& x1, double& y1, double& z1)
	{
		x1 = x; // u slucaju da su clanovi private s ovom funk mozemo pristupiti clanovima
		y1 = y;
		z1 = z;
	}
	/*◦ Funkciju koja računa udaljenost do druge točke u 2D ravnini (zanemarujući z
	  koordinatu).*/
	void distance_2D(double& n)
	{
		n = sqrt(pow(x, 2) + pow(y, 2));
	}
	/*Funkciju koja računa udaljenost do druge točke u 3D prostoru*/
	void distance_3D(double& n)
	{
		n = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	}

};
/*2. Napisati klasu koja predstavlja oružje.Oružje ima svoj položaj u prostoru(jedna
	točka u prostoru), broj metaka koji stanu u jedno punjenje i trenutni broj metaka u
	punjenju.Može pucati(shoot) i ponovo se puniti(reload).*/
class weapon {
public:
	int n; //trenutni broj metaka
	int num; //br metaka koji stanu u jedno punjenje
	position p; // točka u prostoru (položaj oružja)
};
/*3. Napisati klasu koja predstavlja metu. Meta je oblika kvadra i zadana je donjom
lijevom i gornjom desnom točkom. Ima dva stanja: pogođena i nepogođena.
*/
class target {
public:
	position p1, p2;
	int p = 0; //pogođena
	int np = 0; // nepogođena
};
