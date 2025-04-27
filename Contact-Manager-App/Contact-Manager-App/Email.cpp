#include "Email.h"

Email::Email(string& em, string& ty, string& desc)
{
	email = em;
	type = ty;
	description = desc;
}

void Email::set_email(string& em)
{
	email = em;
}

void Email::set_type(string& ty)
{
	type = ty;
}

void Email::set_description(string& desc)
{
	description = desc;
}

string Email::get_email()
{
	return email;
}

string Email::get_type()
{
	return type;
}

string Email::get_description()
{
	return description;
}
