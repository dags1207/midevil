#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include <navigate.h>
#include <classify.h>
#include <object.h>
#include <character.h>
#include <obstacle.h>
#include <cell.h>
#include <game.h>

using std::vector;
using classify::Level;
using classify::Type;
using navigate::Point;
using navigate::maxBoundary;

Arena::Arena() {
	this->dimensions = maxBoundary;
}

Arena::Arena(Point dimensions) {
	this->dimensions = dimensions;
	this->create();
}

void Arena::create() {}

void Arena::destroy() {}

void Arena::shuffle() {}

void Arena::toString() {}
