#include "Items.hpp"

void Items::loadItemsFromFile(std::string& _filename, std::vector<std::string>& data)
{
	std::fstream file(_filename);
	std::string tmpName;
	int tmpId;
	int tmpQuantity;

	if (!file.is_open())
	{
	}
	std::cout << "Fichier ouvert\n";
	std::string line;
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string name; 
		int id, quantity;
		if (iss >> name >> id >> quantity)
		{
		
		}
	}

}
