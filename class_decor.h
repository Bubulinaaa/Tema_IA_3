#pragma once
#include "class_embroidery.h"

class decor : public embroidery
{
public:
	string style;
	string place;

public : 
	void set_decor(string InputStyle, string InputPlace);
	void all_canvas(string InputMaterial, string InputDurability);
};

