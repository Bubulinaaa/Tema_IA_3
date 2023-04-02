#include <iostream>
#include "class_decor.h"
using namespace std;

void decor::set_decor(string InputStyle, string InputPlace)
{
	style = InputStyle;
	place = InputPlace;
}

void decor::all_canvas(string InputMaterial, string InputDurability)
{
	canvas.set_canvas(InputMaterial, InputDurability);
}