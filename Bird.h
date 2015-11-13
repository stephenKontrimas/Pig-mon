#ifndef BIRD_H
#define BIRD_H
#include "Bird.h"
#include <stdlib.h> 
#include <time.h>
#include <string>
using namespace std;

class Bird
{
public:
	//Base Stats
	int hp = 0;
	int atk = 0;
	int def = 0;
	int spatk = 0;
	int spdef = 0;
	int spd = 0;

	//Current Stats
	int curr_hp = 0;
	int curr_atk = 0;
	int curr_def = 0;
	int curr_spatk = 0;
	int curr_spdef = 0;
	int curr_spd = 0;

	//Other info
	int number = 1; //like pokemon's number
	int exp = 0; // experience points
	int maxExp = 1000;
	int level = 1;
	string nickName; // name of this particular Bird

	void createStats();
	void levelUp();
};

//this class extends the Bird class giving it access to the things in bird
class Grendel : public Bird {
public:
	//this makes a more personalized version of the level up function for the class Grendel
	void levelUp(int hpGainedOnLevel);

};

#endif
