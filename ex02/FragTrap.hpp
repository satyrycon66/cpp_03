#include <iostream>
#include "ClapTrap.hpp" // Include the definition of the base class

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

class FragTrap : public ClapTrap {
public:
    // Constructors and destructor
    FragTrap(std::string name);
    ~FragTrap();

    // Additional methods specific to FragTrap
    void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP_