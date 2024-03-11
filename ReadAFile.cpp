#include <iostream>
#include <fstream>
#include <string>

int main()
{
	const char* pathToFile = "D:\\SimpleTextFile.txt";

	std::ifstream file;
	file.open(pathToFile);

	std::string line = "";
	if (file.is_open())
	{
		while (file.good())
		{
			std::getline(file, line);
			std::cout << line << std::endl;
		}
	}
	else
	{
		std::cout << "Error: Could not open the file." << std::endl;
	}
	return 0;
}