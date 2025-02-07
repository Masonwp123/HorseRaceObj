#include <iostream>

#include "race.h"

Race::Race() {
	for (int i = 0; i < MAX_HORSES; ++i) {
		Horse& horse = horses[i];
		horse.init(i, TRACK_LENGTH);
		horse.printLane();
	}
}

void Race::run() {
	bool horsesRacing = true;
	while (horsesRacing) {
		std::cout << "Press ENTER to continue..." << std::endl;
		std::cin.get();
		for (int i = 0; i < MAX_HORSES; ++i) {
			Horse& horse = horses[i];
			horse.advance();
			horse.printLane();
			if (horse.isWinner()) {
				horsesRacing = false;
			}
		}
	}
	for (int i = 0; i < MAX_HORSES; ++i) {
		Horse& horse = horses[i];
		if (horse.isWinner()) {
			std::cout << std::endl << "Horse " << i << " Won!" << std::endl;
			std::cout << "Press ENTER to end" << std::endl;
			std::cin.get();
		}
	}
}
