#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Karen karen;
	if (argc > 1)
	{
		std::string str(argv[1]);
		karen.complain(str);
	}
	else
		karen.complain("lol");
}
