#ifndef CHARACTER_H
#define CHARACTER_H

#include <stdint.h>
#include <navigate.h>
#include <classify.h>
#include <object.h>

using classify::Level;
using classify::Type;
using navigate::Point;

class Character : public Object {
private:
	static int count;
	Type type;
	Level level;

public:
	Character();
	Character(Point, Type, Level);

	virtual bool movedBy(Object*);
	virtual bool reactTo(Object*);
	virtual void moveTo(Point);
	virtual string toString();

	virtual ~Character() {}
};

#endif
