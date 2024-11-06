#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <map>

class Items
{
	std::string m_name; 
	int m_id; 
	int m_quantity;
	std::map<std::string,int,int> container;  
public: 
	Items() = default; 
	void loadItemsFromFile(std::string& _filename, std::vector<std::string>& data);

	std::string getNameItems() const;
	int getIdItems() const; 
	int getQuantityItems() const; 

	void setNameItems(const std::string& _name); 
	void setIdItems(const int _id); 
	void setQuantityItems(const int _quantity); 

	
};

