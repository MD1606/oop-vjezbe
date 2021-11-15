#include <iostream>
#include <iomanip>
using namespace std;
typedef struct matrix {
	float** mat;
	float r, s;
	void unos();
	void ispis();
	void zbroj(matrix* a, matrix* b);
	void oduzimanje(matrix* a, matrix* b);
	void mnozenje(matrix* a, matrix* b);
	void generiranje();
	void transponirana(matrix* a, matrix* b);
}matrix;

void matrix::unos()
{
	mat = new float* [r];
	for (int i = 0; i < r; i++)
		mat[i] = new float[s];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < s; j++)
		{
			cin >> mat[i][j];
		}
}

void matrix::ispis()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < s; j++)
			cout << fixed << setprecision(2) << mat[i][j] << " ";
		cout << endl;
	}
}


void matrix::zbroj(matrix* a, matrix* b)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < s; j++)
			a->mat[i][j] = b->mat[i][j] + a->mat[i][j];
}

void matrix::oduzimanje(matrix* a, matrix* b)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < s; j++)
			a->mat[i][j] = b->mat[i][j] - a->mat[i][j];
}
void matrix::mnozenje(matrix* a, matrix* b)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < s; j++)
			a->mat[i][j] = b->mat[i][j] * a->mat[i][j];
}
void matrix::generiranje()
{
	mat = new float* [r];
	for (int i = 0; i < r; i++)
		mat[i] = new float[s];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < s; j++)
		{
			mat[i][j] = (float(rand()) / float((RAND_MAX)) * 10);
		}
}
void matrix::transponirana(matrix* a, matrix* b)
{
	a->mat = new float* [r];
	for (int i = 0; i < r; i++)
	{
		a->mat[i] = new float[s];
		for (int j = 0; j < s; j++)
			a->mat[i][j] = b->mat[j][i];
	}
}



void main()
{
	matrix mat1, mat2;
	cout << "unestie redke i stupce 1. matrice: " << endl;
	cin >> mat1.r >> mat1.s;
	mat1.unos();
	cout << "unesite redke i stupce 2. matrice: " << endl;
	cin >> mat2.r >> mat2.s;
	mat2.unos();

	//mat1.transponirana(&mat1,&mat2);
	//mat1.ispis();
	//mat1.zbroj(&mat1, &mat2);
	//mat1.ispis();
	//mat1.generiranje();
	//mat1.ispis();
	//mat1.oduzimanje(&mat1, &mat2);
	//mat1.ispis();
	if (mat1.s == mat2.r)
	{
		mat1.mnozenje(&mat1, &mat2);
		mat1.ispis();
	}
	else
		cout << "mnozenje nije moguce" << endl;

}