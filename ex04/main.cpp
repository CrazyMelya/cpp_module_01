#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ofstream	fout;
	std::ifstream	fin;

	if (argc == 4)
	{
		std::string	filename(argv[1]);
		std::string	s1(argv[2]);
		std::string s2(argv[3]);
		std::string str;
		int			pos;

		fin.open(filename);
		if (fin.is_open())
		{
			fout.open(filename + ".replace");
			while(std::getline(fin, str))
			{
				pos = str.find(s1);
				while (pos != -1)
				{
					str.erase(pos, s1.length());
					str.insert(pos, s2);
					pos = str.find(s1);
				}
				fout << str;
				if (!fin.eof())
					fout << std::endl;
			}
			fout.close();
			fin.close();
		}
		else
			std::cout << "Error: " + filename + " is not opened" << std::endl;
	}
	else
		std::cout << "Error: need 3 arguments!" << std::endl;
}
