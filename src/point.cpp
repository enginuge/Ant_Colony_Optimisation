#include "point.h"

double absValue(double num) 
{
  	if (num < 0) 
  	  	return -num;

	else
  	  	return num;
}

double sq_rt(double x) 
{
  	if (x == 0 || x == 1)
  	  	return x;
  	
  	double precision = 0.0001;

  	double start = 0, end = x;
  	if (x < 1) {
  	  end = 1;
  	}
  	
  	double root = (start + end) / 2;
  	while (absValue(root * root - x) > precision) {
  	  if (root * root < x) {
  	    start = root;
  	  } else {
  	    end = root;
  	  }
  	  root = (start + end) / 2;
  	}
  	
  	return root;
}

Point::Point(double x_coord, double y_coord) 
{
        x = x_coord;
        y = y_coord;
}

// Set x-coordinate
void Point::setX(double x_coord) {
    x = x_coord;
}

// Set y-coordinate
void Point::setY(double y_coord) {
    y = y_coord;
}

// Get x-coordinate
double Point::getX() {
    return x;
}

// Get y-coordinate
double Point::getY() {
    return y;
}


// Calculate distance to another point
double Point::distanceTo(Point other) 
{
	double dx = x - other.getX();
	double dy = y - other.getY();
	
	return sq_rt(dx*dx + dy*dy);
}
