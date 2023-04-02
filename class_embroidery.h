#pragma once

#include <iostream>
#include "class_embroidery.h"
using namespace std;


class embroidery
{
private:
	int nr_colours;
	string name_pattern;
	double price;
	double nr_hours;
	int code;

public :
	void get_info();
	void set_info();
	void set_default_info();
	void set_name(string);
	void set_price(double);
	void set_colours(int);
	void set_hours(double);
	void set_code(int);


};
