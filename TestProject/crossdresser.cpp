#include <string>
#include <stdio.h>
#include <map>
#include <vector>

#include "crossdresser.h"

using namespace std;

Crossdresser::Crossdresser()
{
	firstname = "Melinda";
        lastname = "Ping";
	age = 42;

	clothes.push_back("Bugatti trousers");
	clothes.push_back("Ecco shoes");
	clothes.push_back("Shenzhen belt");
	clothes.push_back("Lindex scarf");
	clothes.push_back("Stockman cap");
	clothes.push_back("Red H&M mens underwear");

	clothesSets["basic"] = clothes;

	ClothesList nude;
	nude.push_back("LIDL womens underwear");
	nude.push_back("Special trade E-cup black lace bra");

	clothesSets["nude"] = nude;

	ClothesList skiing;
	skiing.push_back("Halti blue skiing jacket");
	skiing.push_back("Blue skiing trousers");
	skiing.push_back("Light blue HH cap");
	skiing.push_back("Neon yellow green technical underwear");

	clothesSets["skiing"] = skiing;
}

string Crossdresser::Speak()
{
	// Age
	string ageSentence;

	char ageSentenceChar[] = "My age is 100";
	sprintf(ageSentenceChar, "My age is %d.", age);

	ageSentence = ageSentenceChar;

	// Clothes
	string clothesSentence = "Now I am wearing ";

	clothesSentence += ClothesToString(clothes);
	clothesSentence += ".";

	string nudeClothesSentence = "When nude I wear ";

	nudeClothesSentence += ClothesToString(clothesSets["nude"]);
	nudeClothesSentence += ".";

	string skiingClothesSentence = "When skiing I wear ";

	skiingClothesSentence += ClothesToString(clothesSets["skiing"]);
	skiingClothesSentence += ".";

	
	// Output
	string output;

	output += "My name is " + firstname + " " + lastname + ". \r\n";
	output += ageSentence;
	output += "\r\n";
	output += clothesSentence;
	output += "\r\n";
	output += nudeClothesSentence;
	output += "\r\n";
	output += skiingClothesSentence;

	return output;
}

string Crossdresser::ClothesToString(ClothesList clothes)
{
	string clothesSentence;

	ClothesList::iterator clothesIter;
	int clothesCount = 0;
	
	for(clothesIter=clothes.begin();clothesIter != clothes.end(); clothesIter++){

		clothesCount++;

		clothesSentence += *clothesIter;

		// Add separators if more than one item
		if(clothes.size() > 1 && clothesCount < clothes.size()){

			if (clothesCount == clothes.size() - 1){
				clothesSentence += " and ";
			}else{
				// SECOND last item
				clothesSentence += ", ";
			}
		}
	}

	return clothesSentence;	
}
