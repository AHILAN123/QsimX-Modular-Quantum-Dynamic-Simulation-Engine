# WHY WE NEED A GRID? 
1). Continous Space must be approximated
  Real quantum Mechanics include continous X over a infinite space
  
2). Grid is purely a Geometric representation.

3). Grid points represent POSITIONS.

4). Uniform spacing is essential

5). Grid enables derivatives
  Grid makes differential equations solvable numerically.
  
6). Grid enables integration
  A continuous integral can be approximated on a spatial grid by a finite sum
  
7). Grid is shared by all physics components
  Used by :-

    Wavefunction
   
    Potential
   
    Hamiltonian
   
    Observables

# WHY A WAVEFUNCTION CONTAINER?
1). We create a wavefunction container that stores the value of the wavefunction at different points on grid.

2). Handle complex numbers (because ψ is generally complex)

3). Provide access and initialization functions

4) .Support operations later like normalization, probability density calculation, etc.


# Outcome : - 
 1). Grid → defines space

 2). Wavefunction → defines the physical state on that space

 3). Grid + Wavefunction → now we can start building Hamiltonian and dynamics
