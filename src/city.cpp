#include "point.h"
#include "city.h"

City::City(int city_id, double x_coord, double y_coord) : location(x_coord, y_coord) {
        id = city_id;
    }

// Set ID
void City::setID(int city_id) {
    id = city_id;
}

// Get ID
int City::getID() {
    return id;
}

// Set x-coordinate
void City::setX(double x_coord) {
    location.setX(x_coord);
}

// Set y-coordinate
void City::setY(double y_coord) {
    location.setY(y_coord);
}

// Get x-coordinate
double City::getX() {
    return location.getX();
}

// Get y-coordinate
double City::getY() {
    return location.getY();
}

Point City::getPoint()
{
	return location;
}

double City::distanceToPoint(Point other)
{
	return location.distanceTo(other);
}

// Calculate distance to another city
double City::distanceToCity(City other) 
{
    return location.distanceTo(other.location);
}
