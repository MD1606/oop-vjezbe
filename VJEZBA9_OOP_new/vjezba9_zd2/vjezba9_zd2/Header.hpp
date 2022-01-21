#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class zivotinja 
{
public:
	virtual int broj_nogu() = 0;
	virtual string vrsta_zivotinje() = 0;
};
class kukac : public zivotinja
{
protected:
public:
};
class zohar : public kukac
{
protected:
	string ime = "zohar";
	int br_nogu = 6;
public:
	string vrsta_zivotinje()
	{
		return ime;
	}
	int broj_nogu()
	{
		return br_nogu;
	}
};
class ptica : public zivotinja
{
protected:
public:
};
class vrabac : public ptica
{
protected:
	string ime = "vrabac";
	int br_nogu = 2;
public:
	string vrsta_zivotinje()
	{
		
		return ime;
	}
	int broj_nogu()
	{
		return br_nogu;
	}
};
class pauk : public zivotinja
{
protected: 
public:
};
class tarantula : public pauk
{
protected:
	string ime = "tarantula";
	int br_nogu = 8;
public:
	string vrsta_zivotinje()
	{
		return ime;
	}
	int broj_nogu()
	{
		return br_nogu;
	}
};
class brojac
{
public:
	void count();
};
