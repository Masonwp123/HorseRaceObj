#include "horse.h"

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {

public:
		
	Race();

	void run();

private:

	const int TRACK_LENGTH = 15;
	const static int MAX_HORSES = 5;
	Horse horses[MAX_HORSES];
};


#endif
