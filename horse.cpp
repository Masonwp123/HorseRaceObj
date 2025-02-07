#include <iostream>
#include <random>

#include "horse.h"

std::random_device rd;
std::uniform_real_distribution<> dist(0.0, 2.0);

Horse::Horse() {
	position = 0;
	trackLength = 0;
	id = -1;
}

void Horse::init(int inId, int inTrackLength) {
	id = inId;
	trackLength = inTrackLength;
}

void Horse::advance() {
	if (id < 0) return;
	position += std::round(dist(rd));
	position = std::min(position, trackLength - 1);
}

void Horse::printLane() {
	if (id < 0) return;
	for (int i = 0; i < trackLength; ++i) {
		if (position == i) {
			std::cout << id;
			continue;
		}
		std::cout << '.';
	}
	std::cout << std::endl;
}

bool Horse::isWinner() {
	if (id < 0) return false;
	return position >= trackLength - 1;
}
