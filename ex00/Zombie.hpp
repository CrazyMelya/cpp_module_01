#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	set_name(std::string name);
		std::string	get_name();
		void	announce();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
