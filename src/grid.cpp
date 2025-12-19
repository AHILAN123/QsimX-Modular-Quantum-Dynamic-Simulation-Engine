//What actually my Grid is: - 

#include "grid.h"
Grid::Grid(int N_, double x_min_, double x_max_)
: N(N_), x_min(x_min_), x_max(x_max_){
	dx = (x_max - x_min)/(N-1) //Sepration length
}

//The function of the Grid. 
double Grid::x(int i) const;{
	 return x_min + i * dx; //the Xi coordinate of the grid
}
