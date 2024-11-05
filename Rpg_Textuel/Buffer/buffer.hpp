#include <iostream>
#include <vector>

class Buffer
{

private: 
	int MAX_BUFFER;  
	std::vector<int> buffer; 
public: 
	Buffer(int _max) : MAX_BUFFER(_max) {}; 
	void addOnBuffer(int _value);  
	void extractLastOnBuffer(); 
	int getValueOnBUffer(); 
	void displayBuffer();  
};