#include "classes.h"

void Player::heal(){
	if (meds > 0) {
		health = 100;
		meds--;
	}
	else{
		cout << "you don't have neough medication to heal"; //replace with GUI text
	}
}

void Player::change_level(int upordown){
	if (upordown == 1) { // case to go up
		switch (level) {
			case 1:
				if (stairs_key == true){
					level++;
					//change minimap coords
					cout << "You open the door to the second floor and go in. There are more closed doors all around";
				}
				else {
					cout << "You cannot enter the second floor without a key";
				}
			
			case 2:
				if (attic_key == true) {
					level++;
					cout << "You open the door to the attic, and there's a zombie! this creature looks stronger than the rest, you have no other option but to fight it off";
				}
		}
	}
}

// room constructor
Room::Room(string com, int f, int r, bool lock, int d1, int d2, int dr1, int dr2, int c1, int c2, int c3, int b, int o, int co, int s, int e, int cl) {
	command = com;
	floor = f;
	ratio = r;
	locked = lock;
	drawer1 = d1,
	drawer2 = d2;
	dresser1 = dr1;
	dresser2 = dr2;
	cabinet1 = c1;
	cabinet2 = c2;
	cabinet3 = c3;
	bed = b;
	oven = o;
	couch = co;
	storage = s;
	entertainment = e;
	closet = cl;
}