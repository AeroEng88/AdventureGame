#include "classes.h"
//using namespace std;

int main() {
	Player character();
	Room Main("B1", 1, false, 1, 10, 7, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0);

	//Room::Room(string com, int f, int r, bool lock, int d1, int d2, int dr1, int dr2, int c1, int c2, int c3, int b, int o, int co, int s, int e, int cl)

	// all the rooms in the house, may be able to load this from a database in the future
	Room rooms[11] = {
		// first floor
		Room("MR", 1, 0, false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), // main room
		Room("B1", 1, 10, false, 7, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0), // bathroom 1
		Room("G1", 1, 3, false, 0, 0, 3, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0), // guest room 1
		Room("LR", 1, 4, false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 2, 0, 0), // living room
		Room("KI", 1, 4, false, 0, 0, 1, 1, 1, 1, 6, 0, 1, 0, 0, 0, 0), // kitchen
		// second floor
		Room("MB", 2, 1, true, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0), // main bedroom
		Room("G2", 2, 3, false, 0, 0, 3, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0), // guest room 2
		Room("G3", 2, 3, false, 0, 0, 3, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0), // guest room 3
		Room("B2", 3, 10, false, 7, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0), // bathroom 2, mini boss in here so the floor is "third"
		Room("SF", 2, 0, false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), // second floor main room
		// mini boss room (main bedroom bathroom, boss room so floor is fourth)
		Room("BB", 4, 10, false, 7, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0) // main bedroom bathroom
	};


}