using namespace std;
#include "class_tablecloth.h"
#include <iostream>

double tablecloth::set_size(double InputWidth, double InputLength)
{
	width = InputWidth;
	length = InputLength;

	return width * length;
}

void tablecloth::set_commodity(string InputItem, string InputRoom)
{
	item = "Tablecloth";
	room = "Kitchen";
}