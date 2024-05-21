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

 private:
 std::string _Name;
 int _Hit;
 int _Energy;
 int _Attack;
  
};

#endif // CLAPTRAP_HPP_
