#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {

public:

	Horse();

	void init(int inId, int inTrackLength);

	void advance();

	void printLane();

	bool isWinner();

private:

	int position;

	int trackLength;

	int id;
};

#endif
