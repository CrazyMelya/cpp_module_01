#include "Zombie.hpp"

int	main()
{
	Zombie *z;

	z = newZombie("Zed");
	z->announce();
	delete z;
	randomChump("Melya");
}
