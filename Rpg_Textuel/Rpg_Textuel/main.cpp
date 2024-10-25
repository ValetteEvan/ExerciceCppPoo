#include <iostream>
#include <string>  
#include "class.h"

int main()
{
	int left, right; 
	std::cout << "Entre la longeur :"; 
	std::cin >> left; 
	std::cout << "Entre la largeur :";
	std::cin >> right; 
    
	Rectangle rectangle(left, right); 
	std::cout << "L'air est de : " << rectangle.areaRectangle(); 

	return 0; 
}