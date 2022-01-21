#include "Player.hpp"
#include "ComputerPlayer.hpp"
#include "HumanPlayer.hpp"

void Game::play()
{
	int n;
	int p = 0;//bodovi Human
	int p1 = 0; //bodovi computer
	ComputerPlayer cp;
	HumanPlayer hp;
	Player* hplayer = &hp;
	Player* cplayer = &cp;
	while (1)
	{
		int sum =hplayer->rand_num()+cplayer->rand_num();
		cout << "Guess the total" << endl << "Player: ";
		cin >> n;
		if (n == sum)
		{
			cout << "Well done you have one point!" << endl;
			p++;
		}
		else if (n != sum)
		{
			cout << "False" << endl;
		}
		cout << "Guess the total" << endl << "Computer: ";
		int m = cp.computer_move();
		if (m == sum)
		{
			cout << "Well done you have one point!" << endl;
			p1++;
		}
		else if (m != sum)
		{
			cout << "False" << endl;
		}


		if (p == points)
		{
			cout << "you are win" << endl;
			break;
		}
		else if (p1 == points)
		{
			cout << "you lost,computer win" << endl;
			break;
		}
	}
}