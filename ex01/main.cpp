#include "ClapTrap.hpp"
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
  
    return 0;
}