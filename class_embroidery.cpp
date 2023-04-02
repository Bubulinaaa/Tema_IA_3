#include <iostream>
#include "class_embroidery.h"
using namespace std;

void embroidery::get_info()
{
	cout << "Name pattern = " << name_pattern << endl;
	cout << "Price = " << price << endl;
	cout << "Number colours = " << nr_colours << endl;
	cout << "Number hours = " << nr_hours << endl;
	cout << "Code = " << code << endl;
	cout << endl;

}
void embroidery::set_info()
{	
	cout << "Name pattern = ";
	cin >> name_pattern;

	cout << "Price = ";
	cin >> price;

	cout << "Number colours = ";
	cin >> nr_colours;

	cout << "Number hours = ";
	cin >> nr_hours;

	cout << "Code = ";
	cin >> code;
	cout << endl;
}

void embroidery::set_name(string object)
{
	name_pattern = object;
}

void embroidery::set_price(double object)
{
	price = object;
}

void embroidery::set_colours(int object)
{
	nr_colours = object;
}

void embroidery::set_hours(double object)
{
	nr_hours = object;
}

void embroidery::set_code(int object)
{
	code = object;
}

void embroidery::set_default_info()
{
	set_name("Antonia");
	set_price(19.45);
	set_hours(2.5);
	set_colours(8);
	set_code(1234);
}