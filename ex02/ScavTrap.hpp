#include <iostream>
#include "ClapTrap.hpp" 

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

class ScavTrap : public ClapTrap {
public:
    // Constructors and destructor
    ScavTrap(std::string name);
    ~ScavTrap();

    // Unique method for ScavTrap
    void guardGate();
};

#endif // SCAVTRAP_HPP_