#include "ComputerPlayer.hpp"
int ComputerPlayer::computer_move()
{
	srand(time(NULL));
	vector<int> m{ 0, 1,2,5,3,6,7,8 }; // svi moguci zbrojevi kovanica komp. bira rand broj 
	int j = 8; //rand() % m.size();
	cout << j << endl;
	return j;
}
int ComputerPlayer::rand_num()
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
		j = rand() % coins.size();
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