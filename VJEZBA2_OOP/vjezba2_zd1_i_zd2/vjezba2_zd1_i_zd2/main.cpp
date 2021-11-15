#include "Header.hpp"
int main()
{
	/*int arr1[4] = {6,5,4,9}; 1.PRVI ZD
	int min, max;
	find(arr1,min,max);
	cout << min<<endl<< max;
	return 0;*/

	int arr[4] = {1,5,7,8}; //2.DRUGI ZD
	for (int j =0; j<4; j++)
	cout << arr[j]<< endl;
	int i;
	cout << "indeks clana koji zelite promijeniti: ";
	cin >> i;
	if (i > 4)
		cout << "nema toliko clanova" << endl;
	ret(arr, i) = arr[i] + 1;
	cout << arr[i];
	return 0;



}