#include "Header.h"
/*1. Napisati funkciju koja ra�una najve�i i najmanji broj u nizu od n prirodnih
brojeva.Funkcija vra�a tra�ene brojeve pomo�u referenci.*/
void find(int arr[],int& min,int& max)
{
	 min=arr[0];
	 max=arr[0];
	 int i;

	for (i = 1; i< 4; i++)
	{
		if(arr[i] < min)
		min= arr[i];
	}
	for (i = 1; i<4; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
}
/*2. Napisati funkciju koja vra�a referencu na neki element niza. 
Koriste�i povratnu vrijednost funkcije kao lvalue uve�ajte i-ti element niza za jedan*/
int& ret(int* arr, int i)
{
	return arr[i];
}



































