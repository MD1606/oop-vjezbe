#include "header.hpp"

int main() {
	FileLoader loader;
	int min;
	int max;
	try {
		loader.init();
		int x = loader.count();
		loader.minmax(min, max);
		loader.deletesmaller();
		loader.sortElements();
		loader.printelements();
		//cout << x << endl;
	}
	catch (MyException& e) {
		e.showErrorMesage();
	}
	return 0;
}