#include "Header.hpp"
int main()
{
	srand(time(NULL));
	position c1;
	double x, y, z;
	c1.get(x, y, z); //dohvacamo clanove s funkcijom get iz klase position
	c1.game();
}