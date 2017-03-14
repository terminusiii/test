#include <string>
#include <vector>
#include <map>

using namespace std;


class Crossdresser
{
	string firstname;
	string lastname;
	int age;

	typedef vector<string> ClothesList;
	ClothesList clothes;
	
	typedef map<string, ClothesList> ClothSetsList;
	ClothSetsList clothesSets;

	public:
	Crossdresser();
	string Speak();

protected:
	string ClothesToString(ClothesList clothes);
};
