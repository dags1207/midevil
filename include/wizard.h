#ifndef WIZARD_H
#define WIZARD_H

class Wizard : public Character {
public:
	Wizard();
	Wizard(Point);

	string toString();
};

#endif

