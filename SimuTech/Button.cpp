#include <string.h>
#include <iostream>
//using namespace std

class Button
{
public:
	Button(string _name, int _posX, int _posY) {
		this.name = _name;
		this.posX = posX;
		this.posY = posY;
	}
	
	
	string name;
	int posX;
	int posY;

	bool state = false;

	Component target[];
};