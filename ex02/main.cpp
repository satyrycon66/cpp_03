#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main() {
    // Création d'un ClapTrap
    ClapTrap clap("CL4P-TP");

    // Tests des fonctions membres
    clap.attack("Ennemi");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("Ennemi");
    clap.attack("Ennemi");
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.beRepaired(3);
    clap.takeDamage(30);

     // Creating a ScavTrap instance
    ScavTrap scav("Guardian");

    // Using the guardGate method
    scav.guardGate();

    // Testing attack method inherited from ClapTrap
    scav.attack("Enemy");

     // Creating a FragTrap instance
    FragTrap frag("Destroyer");

    // Using attack method inherited from ClapTrap
    frag.attack("Enemy");

    // Using highFivesGuys method unique to FragTrap
    frag.highFivesGuys();
  
    return 0;
}