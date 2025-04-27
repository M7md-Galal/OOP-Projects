#include "Phone.h"

Phone::Phone(string& ph, string& ty, string& desc)
{
	phone = ph;
	type = ty;
	description = desc;
}

void Phone::set_phone(string& ph)
{
	phone = ph;
}

void Phone::set_type(string& ty)
{
	type = ty;
}

void Phone::set_description(string& desc)
{
	description = desc;
}

string Phone::get_phone()
{
	return phone;
}

string Phone::get_type()
{
	return type;
}

string Phone::get_description()
{
	return description;
}

