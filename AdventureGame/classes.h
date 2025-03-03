#pragma once
#include<iostream>
#include<string>

using namespace std;

//player class

#ifndef CLASSES_H
#define CLASSES_H
class Player {
	//variables for items
public:
	int health = 100;
	int meds = 0; // if meds > 1 you can heal yourself to 100
	int level = 1; // what floor you're on, there's 3 total floors
	string location = "MR";
	bool kichen_key = false;
	bool attic_key = false;
	bool closet_key = false;
	bool stairs_key = false;
	bool knife = false; // knives give more damage, you can find one in the kitchen
	bool lost = false; // goes to true if your health is <= 0

	//functions for hitting or checking things
	void heal();

	void change_level(int upordown);

	int check(int room, bool kitchen);
};

class Room {
	string command;
	int floor;
	int ratio;
	bool locked;
	int drawer1;
	int drawer2;
	int dresser1;
	int dresser2;
	int cabinet1;
	int cabient2;
	int cabinet3;
	int bed;
	int oven;
	int couch;
	int storage;
	int entertainment;
	int closet;

	void constructor();

};

#endif
