#include "wavefunction.h"
#include <cmath>
#include <bits/stdc++.h>
#include "grid.h"

Wavefunction::Wavefunction(int N_) : N(N_) {
    psi.resize(N);
}
void Wavefunction::InitializeGaussian(double x0, double sigma, const Grid& grid){
	for(int i=0; i<N; i++){
		double x = grid.x(i);
		double exponent = - (x - x0) * (x - x0) / (2.0 * sigma * sigma);
		psi[i] = exp(exponent);
	}

	normalize(grid.dx) //If i dont normalize that is the total probability sum being 1, if it doesnt happen the answer wont be satisfied
}
vector<double> Wavefunction::ProbabilityDensity() const{
	vector<double> prob(N);
	for(int i=0;i<N;i++){
		prob[i] = norm(psi[i]);  //using norm to get the magnitude squared value of psi[i];
	}

	return prob;
}
void Wavefunction::normalize(double dx){
	double sum = 0;
	for(int i=0;i<N;i++){
		sum = sum+norm(psi[i]);
	}

	sum = sum*dx;
	double norm_factor = sqrt(sum); //Sqrt of the sum needed as it may happen the probability sum upto some C and then to make it 1 this is useful
	for(int j=0;j<N;j++){
		psi[i] /= norm_factor;
	}

}