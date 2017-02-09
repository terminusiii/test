#include <string>

#include "crossdresser.h"

using namespace std;

Crossdresser::Crossdresser()
{
	firstname = "Jean";
        lastname = "Ping";
}

string Crossdresser::Speak()
{
	return "My name is " + firstname + " " + lastname;
}

