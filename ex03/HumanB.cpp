#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (!this->weapon)
		std::cout << this->name << " says: \"I have no weapon! Let's live in peace!\"" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
