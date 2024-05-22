#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << ClapTrap::getName() << " reporting for duty! Defending the Gate!" << std::endl;
    // Assigning specific values for ScavTrap
    ClapTrap::setHit(100);
    ClapTrap::setEnergy(50);
    ClapTrap::setAttack(20);
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << ClapTrap::getName() << " signing off... Gate is secure." << std::endl;
}

// Unique method for ScavTrap
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << ClapTrap::getName() << " enters Gate Keeper mode. Gate secured!" << std::endl;
}