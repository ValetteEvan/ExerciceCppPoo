#pragma once
#include "Items.hpp"

class inventory
{
	std::map<Items, int> m_inventory; 
public: 
	void addItemsInventory(Items _items,int _quantity);  
	void removeItemsInventory(Items _items); 
	bool hasItemInventory(Items _items); 
	void getItemsInventory(Items _items); 
	bool hasQuantityItemsInventory(Items _items); 
};

