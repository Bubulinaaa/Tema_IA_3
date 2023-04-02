#pragma once
using namespace std;
#include <iostream>
#include "class_embroidery.h"


class commodity : public embroidery
{
public:
	string item;

protected :
	string room;

public:
	void set_commodity(string InputItem, string InputRoom);
	void all_canvas(string InputMaterial, string InputDurability);
};