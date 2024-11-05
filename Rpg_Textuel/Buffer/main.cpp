#include <iostream>
#include "buffer.hpp"

int main()
{
	int MAX_BUFFER = 5; 
	Buffer bufferInt(MAX_BUFFER); 
	bufferInt.addOnBuffer(0); 
	bufferInt.addOnBuffer(1);
	bufferInt.addOnBuffer(2);
	bufferInt.addOnBuffer(3);
	bufferInt.addOnBuffer(4);
	bufferInt.addOnBuffer(5);
	bufferInt.displayBuffer(); 
	return 0; 
}