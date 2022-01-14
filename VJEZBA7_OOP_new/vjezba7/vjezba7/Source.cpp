#include "Header.hpp"
Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Board::Board()
{
	rows = 0;
	cols = 0;
	boarder = '0';
	matrix = NULL;
}

Board::Board(int cols, int rows, char boarder)
{
	matrix = new char* [rows];

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new char[cols];
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = ' ';
		}
	}
	this->rows = rows;
	this->cols = cols;
	this->boarder = boarder;
}

Board::Board(const Board& b)
{
	this->rows = b.rows;
	this->cols = b.cols;
	this->boarder = b.boarder;

	this->matrix = new char* [this->rows];
	if (!matrix) {
		cout << "Error alocating memmory" << endl;
		return;
	}
	for (int i = 0; i < this->rows; i++)
	{
		this->matrix[i] = new char[this->cols];
		if (!matrix[i]) {
			cout << "Error alocating memmory in columns" << endl;
			return;
		}
		for (int j = 0; j < this->cols; j++)
		{
			this->matrix[i][j] = ' ';
		}
	}

}
Board::~Board()
{
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
}

void Board::draw_board()
{
	for (int i = 0; i < this->rows; i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			if ((i == 0 || i == rows - 1) || (j == 0 || j == cols - 1))
				matrix[i][j] = boarder;
		}
	}
}

void Board::draw_char(Point p, char symbol)
{
	if (p.x + 1 >= cols || p.y + 1 >= rows || p.x == 0 || p.y == 0)
	{
		cout << "Presli ste rub ploce" << endl;
		exit(1);
	}
	matrix[(int)p.y][(int)p.x] = symbol;
}

void Board::draw_up_line(Point p1, char symbol)
{
	if (p1.x + 1 >= cols || p1.y + 1 >= rows || p1.x == 0 || p1.y == 0)
	{
		cout << "Presli ste rub ploce" << endl;
		exit(1);
	}

	for (int i = p1.y; i > 0; i--)
	{
		matrix[i][(int)p1.x] = symbol;
	}
}

void Board::draw_line(Point p1, Point p2, char symbol)
{
	if (p1.x + 1 >= cols || p1.y + 1 >= rows || p1.x == 0 || p1.y == 0)
	{
		cout << "Presli ste rub ploce" << endl;
		exit(1);
	}

	if (p2.x + 1 >= cols || p2.y + 1 >= rows || p2.x == 0 || p2.y == 0)
	{
		cout << "Presli ste rub ploce" << endl;
		exit(1);
	}

	while ((p1.x != p2.x) || (p1.y != p2.y))
	{
		if ((p1.x < p2.x) && (p1.y < p2.y))
		{
			matrix[(int)p1.y][(int)p1.x] = symbol;
			p1.x++;
			p1.y++;
		}
		if ((p1.x > p2.x) && (p1.y > p2.y))
		{
			matrix[(int)p1.y][(int)p1.x] = symbol;
			p1.x--;
			p1.y--;
		}
		if ((p1.x > p2.x) && (p1.y < p2.y))
		{
			matrix[(int)p1.y][(int)p1.x] = symbol;
			p1.x--;
			p1.y++;
		}
		if ((p1.x < p2.x) && (p1.y > p2.y))
		{
			matrix[(int)p1.y][(int)p1.x] = symbol;
			p1.x++;
			p1.y--;
		}
		if ((p1.x == p2.x) && (p1.y < p2.y))
		{
			matrix[(int)p1.y][(int)p1.x] = symbol;
			p1.y++;
		}
		if ((p1.x == p2.x) && (p1.y > p2.y))
		{
			matrix[(int)p1.y][(int)p1.x] = symbol;
			p1.y--;
		}
		if ((p1.x < p2.x) && (p1.y == p2.y))
		{
			matrix[(int)p1.y][(int)p1.x] = symbol;
			p1.x++;
		}
		if ((p1.x > p2.x) && (p1.y == p2.y))
		{
			matrix[(int)p1.y][(int)p1.x] = symbol;
			p1.x--;
		}
	}
	matrix[(int)p1.y][(int)p1.x] = symbol;
}

void Board::Clear_Board()
{
}

void Board::display_board()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void Board::Clear_Board() {
	for (int i = rows - 2; i >= 1; i--) {
		for (int j = 1; j < cols - 1; j++) {
			matrix[i][j] = ' ';
		}
		cout << endl;
	}
}