#ifndef ANT_H
#define ANT_H

#include "point.h"
#include "city.h"
#include <vector>

class Ant {
	public:
		Ant(int id, int x, int y);
		
		int getID();
	
		int getX();
	
		int getY();
	
		double GetDistanceTravelled();
	
		void MoveToCity(City);
	
		std::vector<City> GetPath();
	
	private:
			int id_;

			Point position_;

			double distance_travelled_;

			std::vector<City> path_;
};
#endif
