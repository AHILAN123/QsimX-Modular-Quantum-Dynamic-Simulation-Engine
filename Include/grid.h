//Header file for grid

#ifndef GRID_h
#define GRID_h

class Grid{
public:
        int N; //Grid Points Checker
        double x_min; //As Finite space minm x(left bound)
        double x_max; //same maxm x(right bound)
        double dx; // sepration distance((xmax-xmin)/(N-1))

        Grid(int N_, double x_min_, double x_max_); //constructor

        double x(int i) const; //member function to return coord Xi

};

#endif
