#include "Bird.h" 

Bird::Bird() {

}

//Randomness of Stats
void Bird::createStats() {
	int randomStats[6];
	for (int i = 0; i < 6; i++){
		srand(time(NULL)); //initializes random seed
		randomStats[i] = rand() % 16; //picks random number 0-15
	}
	int hp = randomStats[0];
	int atk = randomStats[1];
	int def = randomStats[2];
	int spatk = randomStats[3];
	int spdef = randomStats[4];
	int spd = randomStats[5];
}

//increaces level, resets exp, gives bounuses to stats
//defining the general Bird level up
void Bird::levelUp() {
	level = level++;
	maxExp = exp * 2;
	exp = 0;
	int randomStats[6];
	for (int i = 0; i < 6; i++){
		srand(time(NULL)); //creates random number
		randomStats[i] = rand() % 16; //picks random number 0-15
	}
	hp += randomStats[0];
	atk += randomStats[1];
	def += randomStats[2];
	spatk += randomStats[3];
	spdef += randomStats[4];
	spd += randomStats[5];
	curr_hp += randomStats[0];
	curr_atk += randomStats[1];
	curr_def += randomStats[2];
	curr_spatk += randomStats[3];
	curr_spdef += randomStats[4];
	curr_spd += randomStats[5];
}


//this is defining the level up for the Bird Grendel
void Grendel::levelUp(int hpGainedOnLevel) {
	Bird::levelUp();
	hp = hp + hpGainedOnLevel;
}
