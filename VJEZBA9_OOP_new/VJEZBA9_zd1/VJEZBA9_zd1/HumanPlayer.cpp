#include "HumanPlayer.hpp"
int HumanPlayer::rand_num()
{
	int i, j;
	srand(time(NULL));
	//int c = rand() % 3 + 1; // odabiremo broj kovanica koji cemo drzati u ruci od 0 do 3
	int c = 3;
	int sum;
	if (c == 0)
		sum = 0;
	else if (c == 1)
	{
		sum = rand() % coins.size(); //random broj iz vektora 1 ,2 ili 5
	}
	else if (c == 2)
	{
		i = rand() % coins.size();
		j = rand() % coins.size();// ako su i i j jednaki ponovo vrtit!!!!!!!!!!!!!!
		sum = i + j;
	}
	else if (c == 3)
	{
		/*i = rand() % coins.size();
		j= rand() % coins.size();
		k= rand() % coins.size();
		sum = i + j + k;*/
		sum = 8;
	}
	return sum;
}