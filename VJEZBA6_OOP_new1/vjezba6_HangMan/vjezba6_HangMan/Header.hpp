#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
using namespace std;
/*1. Klasa HangmanModel opisuje re�enicu koju treba pogoditi, trenutno stanje re�enice
koju gradimo, slova koja su pogo�ena i sli�no.
*/
class HangmanModel {
	vector<string> movies;
	string movie; //film za pogoditi
	string p;//Pogo�ena slova
	int lives;
public:
	HangmanModel();//konstruktor
	void set_game();
	int islive();
	bool is_present(char ch);
	void decrement_lives();
	bool game_over();
	string get_movie();
	string get_guessed();
};
/*2. Klasa HangmanView opisuje prikaz vje�ala, prikaz trenutnog stanja re�enice koja se
gradi i prikaz pogo�enih/proma�enih slova.
*/
class HangmanView{

	HangmanModel m;
public:
	HangmanView(){}// Defaultni konstruktor-mora postojati
	HangmanView(HangmanModel x);
	void display_status(int lives,string g);
	
	
};
/*3. Klasa HangmanController omogu�uje i verificira unos, updatea prikaz, modificira
model.
*/
class HangmanController {
	HangmanModel model;
	HangmanView view;
public:
	HangmanController(HangmanModel x1, HangmanView v); // konstruktor
	void game();
	void turn();
	string get_guessed();
	
};


