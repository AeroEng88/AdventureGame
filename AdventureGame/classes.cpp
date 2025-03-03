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