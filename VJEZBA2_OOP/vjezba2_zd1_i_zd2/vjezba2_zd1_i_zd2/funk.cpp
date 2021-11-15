#include "Header.hpp"
/*1. Napisati funkciju koja raèuna najveæi i najmanji broj u nizu od n prirodnih
brojeva.Funkcija vraæa tražene brojeve pomoæu referenci.*/
void find(int arr[], int& min, int& max)
{
	min = arr[0];
	max = arr[0];
	int i;

	for (i = 1; i < 4; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	for (i = 1; i < 4; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
}
/*2. Napisati funkciju koja vraæa referencu na neki element niza.
Koristeæi povratnu vrijednost funkcije kao lvalue uveæajte i-ti element niza za jedan*/
int& ret(int* arr, int i)
{
	return arr[i];
}