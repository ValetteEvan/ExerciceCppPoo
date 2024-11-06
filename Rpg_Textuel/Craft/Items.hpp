#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Items
{
	std::string m_name; 
	int m_id; 
	int m_quantity;
public:   
	Items(std::string& _name,int _id,int _quantity); 

	void loadItemsFromFile(std::string& _filename); 

	std::string getNameItems() const;
	int getIdItems() const; 
	int getQuantityItems() const; 

	void setNameItems(const std::string& _name); 
	void setIdItems(const int _id); 
	void setQuantityItems(const int _quantity); 

	
};

