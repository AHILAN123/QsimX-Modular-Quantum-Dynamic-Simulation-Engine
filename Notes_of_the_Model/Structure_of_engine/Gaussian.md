# Why are we taking a Gaussian Wavepacket? 

  The speciality of a Gaussian Wavepacket,
    The product of the uncertainity in Momments and in the position is minimum that is,
         $$\Delta x * \Delta p = \frac{\hbar}{2}$$
    
1. We are considering the Gaussian Wavepacket, because it is often gives us the idea that a particle is localized particle.
2. Gaussian functions are smooth and differentiable → easy to compute derivatives for the Hamiltonian later
3. Parameter and Mathematical flexibility.

The function for the gaussian WavePacket is as follows: - 

    void initializeGaussian(double x0, double sigma, const Grid& grid);
  
  Here "X0" reprents the center or the "mean value" of the wavefunction. 

  "Sigma" is the "standard deviation" that occurs in, how much the particles position is deviating from the central position.

__THIS WAS THE REASON FOR CHOOSING A GAUSSIAN WAVEPACKET__ 
