#include <string>
#include <vector>

using namespace std;


class Crossdresser
{
	string firstname;
	string lastname;
	int age;

	typedef vector<string> ClothesList;
	ClothesList clothes;
	
	public:
	Crossdresser();
	string Speak();
};
