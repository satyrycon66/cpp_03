#include <iostream>
#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

// Class declaration
class ClapTrap {
 public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &rhs);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setName( std::string const name );
    std::string getName( void ) const;
    void setHit( int const hit );
    int getHit( void ) const;
    void setEnergy( int const energy );
    int getEnergy( void ) const;
    void setAttack( int const attack );
    int getAttack( void ) const;

    private:
    std::string _Name;
    int _Hit;
    int _Energy;
    int _Attack;
  
};

#endif // CLAPTRAP_HPP_
