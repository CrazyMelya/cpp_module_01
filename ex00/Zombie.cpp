#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead!" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string Zombie::get_name()
{
	return (this->name);
}

void	Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
