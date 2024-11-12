#include <iostream>
#include <vector>
#include <memory.h> 

class Buffer
{

private: 
	int MAX_BUFFER;   
	std::vector<int> buffer; 
public: 
	Buffer(int _max) : MAX_BUFFER(_max) {};  
	//void addOnBuffer(int _value);  
	//void extractLastOnBuffer(); 
	//void displayBuffer();  
};

template <typename T>  
class Circulare_Buffer
{
private: 
	std::unique_ptr<T[]> buffer; 
	size_t head = 0; 
	size_t tail = 0; 
	size_t max_size; 
public:
	Circulare_Buffer(size_t _max_size) : max_size(_max_size), buffer(std::make_unique<T[]>(max_size)) {} 
	void addElement(T);
	T dequeElement();  
};

template<typename T>
inline void Circulare_Buffer<T>::addElement(T _value)  
{
	buffer[tail] = _value;   
	tail = (tail + 1) % max_size;   
}

template<typename T>
inline T Circulare_Buffer<T>::dequeElement() 
{
	T item = buffer[head]; 
	buffer[head] = buffer.release();   
	head = (head + 1) % max_size; 
	return item;
}


