#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

class FileLoader {
private:
	vector<int> numbers;
public:
	void init();
	int count();
	void minmax(int& min, int& max);
	void deletesmaller();
	void sortElements();
	void printelements();
};
class MyException {
private:
public:
	void showErrorMesage() {
		cout << "File is not existing" << endl;
	}
};
