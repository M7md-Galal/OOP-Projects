#include "Address.h"

Address::Address(string& pl, string& ty, string& desc)
{
	place = pl;
	type = ty;
	description = desc;
}

void Address::set_place(string& pl)
{
	place = pl;
}

void Address::set_type(string& ty)
{
	type = ty;
}

void Address::set_description(string& desc)
{
	description = desc;
}

string Address::get_place()
{
	return place;
}

string Address::get_type()
{
	return type;
}

string Address::get_description()
{
	return description;
}
