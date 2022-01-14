#include "Header.hpp"

int main() {
	HangmanModel m;
	m.set_game();
	HangmanView v(m);
	HangmanController c(m, v);
	c.game();
}