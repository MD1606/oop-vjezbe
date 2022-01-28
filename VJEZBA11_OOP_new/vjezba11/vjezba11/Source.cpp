#include "header.hpp"

void FileLoader::init() {
	ifstream file;
	file.open("martina.txt");
	if (!file.is_open()) {
		throw MyException();
	}
	istream_iterator<int>it(file);
	istream_iterator<int>eof;
	copy(it, eof, back_inserter(this->numbers));
}
int FileLoader::count() {

	int num = count_if(this->numbers.begin(), this->numbers.end(), [](int n) { return n > 500; });
	return num;
}
void FileLoader::minmax(int& min, int& max) {
	max = *max_element(this->numbers.begin(), this->numbers.end());
	min = *min_element(this->numbers.begin(), this->numbers.end());
}
void FileLoader::deletesmaller() {
	this->numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int n) { return n < 300; }), numbers.end());
}
void FileLoader::sortElements() {
	sort(this->numbers.begin(), this->numbers.end(), [](int x, int y) { return x > y; });
}
void FileLoader::printelements() {
	std::copy(this->numbers.begin(), this->numbers.end(), std::ostream_iterator<int>(std::cout, " "));
}