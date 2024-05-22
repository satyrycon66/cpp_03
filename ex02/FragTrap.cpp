#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap " << ClapTrap::getName() << " activated, ready for action!" << std::endl;
    // Assigning specific values for FragTrap
    ClapTrap::setHit(100);
    ClapTrap::setEnergy(100); 
    ClapTrap::setAttack(30);
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << ClapTrap::getName() << " deactivated. System shutting down..." << std::endl;
}

// Additional method
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << ClapTrap::getName() << " gives high fives to everyone!" << std::endl;
}