//Header file declaring the wavefunction exists.
#ifndef WAVEFUNCTION_H
#define WAVEFUNCTION_H
#include <bits/stdc++.h>
#include "grid.h"
using namespace std;

class Wavefunction{
public:
        vector<complex<double>>psi; //The WAVEFUNCTION at each point in the grid
        int N; //Grid points

        Wavefunction(int N_);    //the wavefunction constructor
        void initializeGaussian(double x0, double sigma, const Grid& grid); //intialize the wavefunction
        vector<double> probabilityDensity() const; //Probability density psi^2
        void normalize(double dx); //Checks total proabab = 1 to maintain true.
};

#endif
