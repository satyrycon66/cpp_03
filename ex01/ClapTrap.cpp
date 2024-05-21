
#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() { return; }

// Default constructor
ClapTrap::ClapTrap(std::string name) {
    _Name = name;
    _Hit = 10;
    _Energy = 10;
    _Attack = 0;
    std::cout << "ClapTrap " << _Name << " est né !" << std::endl;
     return; }

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
  *this = other;
  return;
}

// Copy assignment overload
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _Name << " est mort..." << std::endl;
     return; }

    void ClapTrap::attack(const std::string& target) {
        if (_Energy > 0) {
            std::cout << "ClapTrap " << _Name << " attaque " << target << ", infligeant " << _Attack << " points de dégâts !" << std::endl;
            _Energy--;
        } else {
            std::cout << "ClapTrap " << _Name << " n'a pas assez d'énergie pour attaquer !" << std::endl;
        }
    }

    // Méthode pour prendre des dégâts
    void ClapTrap::takeDamage(unsigned int amount) {
        if (_Hit > 0 ) {
            _Hit -= amount;
            std::cout << "ClapTrap " << _Name << " subit " << amount << " points de dégâts !" << std::endl;
            if (_Hit <= 0) {
                std::cout << "ClapTrap " << _Name << " n'a plus de points de vie et est hors jeu !" << std::endl;
            }
        } else {
            std::cout << "ClapTrap " << _Name << " est déjà hors jeu !" << std::endl;
        }
    }

    // Méthode de réparation
    void ClapTrap::beRepaired(unsigned int amount) {
            
            if(_Energy <= 0)
            std::cout << "ClapTrap " << _Name << " n'a pas assez d'énergie pour ce réparer !" << std::endl;
            else if (_Hit > 0) {
            std::cout << "ClapTrap " << _Name << " se répare, regagnant " << amount << " points de vie !" << std::endl;
            _Hit += amount;
            _Energy--;
    
        } else {
            std::cout << "ClapTrap " << _Name << " ne peut pas se réparer car il est hors jeu !" << std::endl;
        }
    }

