#include <vector>
#include "point.h"
#include "city.h"
#include "ant.h"

Ant::Ant(int id, int x, int y) : id_(id), position_(x, y), distance_travelled_(0) {}

int Ant::getID()
{
    	return id_;
}

int Ant::getX()
{
    	return position_.getX();
}

int Ant::getY()
{
    	return position_.getY();
}

double Ant::GetDistanceTravelled()
{
    return distance_travelled_;
}

void Ant::MoveToCity(City city) 
{
	Point new_point = city.getPoint();

    	distance_travelled_ += position_.distanceTo(new_point);

    	position_ = new_point;

    	path_.push_back(city);
}

std::vector<City> Ant::GetPath()
{
    	return path_;
}
