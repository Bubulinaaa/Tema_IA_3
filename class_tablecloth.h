#pragma once
#include "class_commodity.h"


class tablecloth : public commodity
{
public :
	double width;
	double length;

public : 
	double set_size(double InputWidth, double InputLength);

	void set_commodity(string InputItem, string InputRoom);

};