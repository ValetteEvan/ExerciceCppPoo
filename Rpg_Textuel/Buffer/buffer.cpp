#include "buffer.hpp"

void Buffer::addOnBuffer(int _value)
{
	if (buffer.size() >= MAX_BUFFER) {
		std::cout << "Buffer plein !" << std::endl;
	}
	else{ buffer.push_back(_value); }
}

void Buffer::extractLastOnBuffer()
{
	if (buffer.empty()) {
		buffer.pop_back();
	}
 }

void Buffer::displayBuffer()
{
	for (int i = 0; i < buffer.size(); i++) {
		std::cout << buffer[i] << std::endl;  
	}
}
