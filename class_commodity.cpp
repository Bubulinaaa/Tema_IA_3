#include "class_commodity.h"


void commodity::set_commodity(string InputItem, string InputRoom)
{
	item = InputItem;
	room = InputRoom;
}


void commodity::all_canvas(string InputMaterial, string InputDurability)
{
	canvas.set_canvas(InputMaterial, InputDurability);
}