#include <iostream>
#include <vector>
#pragma once
using namespace std;
class Player {
protected:
	vector <int> coins{ 1,2,5 };
public:
	virtual int rand_num() = 0;
};
class Game {
	int points = 3;// zadani br bodova
public:
	void play();
};