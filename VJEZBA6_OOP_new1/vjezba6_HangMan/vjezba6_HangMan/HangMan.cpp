#include "Header.hpp"
HangmanModel::HangmanModel() {
	lives = 7;
	ifstream f("movie.txt");
	if (!f.is_open()) {
		cout << "error" << endl;
		return;
	}
	string m;
	while (getline(f, m)) {
		movies.push_back(m);
	}
};
void HangmanModel::set_game()
{
	movie = movies[rand() % movies.size()];// odabiremo random film
}
HangmanView::HangmanView(HangmanModel x) { //konstruktor, postavili smo model

	m = x;
}
HangmanController::HangmanController(HangmanModel m1, HangmanView v)
{
	model = m1;
	view = v;
}
void HangmanController::game()
{
	while (model.islive() > 0)
	{
		string temp = model.get_guessed(); // pogoðeno slovo
		view.display_status(model.islive(), temp);// objekt za ispis parametri su zivoti i pogoðena slova
		turn();//objekt za unos
		if (this->model.game_over()) {
			cout << "Win" << endl;
			return;
		}
	}
	return;
}
int HangmanModel::islive() {
	return lives;
}
string HangmanModel::get_movie() {
	return movie;
}
string HangmanModel::get_guessed() {
	return p;
}
string HangmanController::get_guessed() {
	return this->model.get_guessed();
}
void HangmanView::display_status(int lives, string guessed)
{
	string movie = m.get_movie();
	cout << "you have: " << lives << endl;
	for (int i = 0; i < movie.length(); i++) {
		if (movie[i] == ' ')
		{
			cout << " ";
		}
		if (guessed.find(movie[i]) != std::string::npos) { //ako je slovo u stringu
			cout << movie[i]<< " ";
		}
		else
			cout << "_";
	}
	cout << endl;
}
void HangmanController::turn()
{
	char letter;
	cout << " enter the letter: ";
	cin >> letter;
	if (!model.is_present(letter))
	{
		model.decrement_lives(); // ako je slovo pogrešno pozivamo funkciju s kojom oduzimmao zivot
	}

}
bool HangmanModel::is_present(char ch)
{
	if (movie.find(ch) != std::string::npos)// provjeravamo dali se slovo nalazi u stringu
	{
		p.push_back(ch);
		return true;
	}
	return false;

}
void HangmanModel::decrement_lives() //umanjivamo zivote
{
	lives--;
}
bool HangmanModel::game_over()
{
	for (int i = 0; i < movie.size(); i++)
	{
		bool flag = false;
		for (int j = 0; j < p.size(); j++) {
			if (movie[i] == p[j]) {
				flag = true;
			}
		}
		if (!flag) {
			return false;
		}
	}
	return true;
}


