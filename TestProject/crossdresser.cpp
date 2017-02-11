#include <string>
#include <stdio.h>

#include "crossdresser.h"

using namespace std;

Crossdresser::Crossdresser()
{
	firstname = "Jean";
        lastname = "Ping";
	age = 42;

	clothes.push_back("Bugatti trousers");
	clothes.push_back("Ecco shoes");
	clothes.push_back("Shenzhen belt");
	clothes.push_back("Lindex scarf");
	clothes.push_back("Stockman cap");
	clothes.push_back("Red H&M mens underwear");
}

string Crossdresser::Speak()
{
	// Age
	string ageSentence;

	char ageSentenceChar[] = "My age is 100";
	sprintf(ageSentenceChar, "My age is %d.", age);

	ageSentence = ageSentenceChar;

	// Clothes
	string clothesSentence = "I am wearing ";
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

	// Output
	string output;

	output += "My name is " + firstname + " " + lastname + ". \r\n";
	output += ageSentence;
	output += "\r\n";
	output += clothesSentence;

	return output;
}
