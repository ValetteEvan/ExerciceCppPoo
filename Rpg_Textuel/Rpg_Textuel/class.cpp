#include "class.h"

Rectangle::Rectangle(const float _left, const float _right)
{
	this->left = _left; 
	this->right = _right; 
}

float Rectangle::areaRectangle()
{
	return left * right;
}
