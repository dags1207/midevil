#ifndef ARENA_H
#define ARENA_H

#include <navigate.h>
#include <object.h>
#include <cell.h>

using navigate::Point;

class Arena {
private:	
	Point dimensions;
	Cell*** cells;

	Arena();
	Arena(Point);

	Arena(const Arena& copy);
	Arena& operator=(const Arena& copy);
	
public:
	static Arena* getArena();
	static Arena* getArena(Point);

	void create();
	void destroy();
	void settings();
	void shuffle();
	void toString();
};
#endif


