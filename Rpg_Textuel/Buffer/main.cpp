#include <iostream>
#include "buffer.hpp"

int main()
{
	Circulare_Buffer<int> cb(20); 
	cb.addElement(56); 
	cb.dequeElement(); 
	return 0; 
}