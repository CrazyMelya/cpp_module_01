#include "Zombie.hpp"
#include <limits>
//#include <iomanip>

int	main(void)
{
	int	N;
	Zombie *zombies;
	std::string name;

	std::cout << "Enter name of zombies" << std::endl;
	std::getline(std::cin, name);
	while(true)
	{
		std::cout << "Enter cout of zombies" << std::endl;
		if (std::cin >> N)
		{
			zombies = zombieHorde(N, name);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break ;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
}
