#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

#include <iostream>
using namespace std;

struct Point
{
	double x;
	double y;
	Point();
	Point(double, double);
	~Point() {}; //destruktor
};

class Board
{
private:
	int rows;
	int cols;
	char boarder;
	char** matrix;
public:
	Board(); //def. konstruktor
	Board(int, int, char);
	Board(const Board&); //copy konstr.
	~Board(); //destruktor
	void draw_board();
	void draw_char(Point, char);
	void display_board();
	void draw_up_line(Point, char);
	void draw_line(Point, Point, char);
	int getRows() { return rows; };
	int getCols() { return cols; };
	void Clear_Board();
};