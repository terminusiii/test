#include <stdio.h>
#include <string>
#include <cstring>
#include <vector>
#include <deque>
#include <cstdio>

#include "class1.h"
#include "class2.h"
#include "crossdresser.h"

void testCrossdresser()
{
	printf("Testing crossdresser -> \r\n");

	Crossdresser tmp;

	string speakOutput = tmp.Speak();
	printf("Crossdresser Speak() output : %s \r\n", speakOutput.c_str());

	printf("<- Testing crossdresser \r\n");
}

~void testClass2()
{
	printf("Testing Class2 ->\r\n");

	class2 tmp2;
	printf("Class2 method 1 : %d\r\n" , tmp2.method1(100));

	std::string name = "Janne";
	printf("Class2 method 2 input 1 = %s output = %s \r\n", name.c_str(), (tmp2.method2(name)).c_str() );

	std::string name2 = "Jean";
	printf("Class2 method 3 input 1 = %s output = %s \r\n", name2.c_str(), (tmp2.method3(name)).c_str());

	std::string name3 = "Jippu";
	std::string result3 = tmp2.method3(name3);
	printf("Method 3 again. Output : %s\r\n", result3.c_str());

	printf("<- Testing Class2\r\n");
}

void printVector()
{
	printf("printVector Start -> \r\n");

	std::vector<std::string> tmp;

	tmp.push_back(std::string("Moi"));
	tmp.push_back(std::string("Taas"));

	while(tmp.size() != 0){
		std::string last = tmp.back();
		tmp.pop_back();
		printf("%s\r\n", last.c_str());
	}

	printf("<- printVector End \r\n");
}
void printDeque()
{
	printf("printDeque Start -> \r\n");

	std::deque<std::string> tmp;

	tmp.push_back(std::string("Moi"));
	tmp.push_back(std::string("Taas"));

	while(tmp.size() != 0){
		std::string first = tmp.front();
		tmp.pop_front();
		printf("%s\r\n", first.c_str());
	}

	printf("<- printDeque End \r\n");
}

void printFile(std::string filename)
{
	FILE* pFile = fopen(filename.c_str(), "w");
	if (pFile != NULL) {
		fputs("Testing Linux file write\r\n", pFile);
		fclose(pFile);
	}

	pFile = fopen("myfile.txt", "r");
	if (pFile != NULL) {
		char buffer[128];

		if (fgets(buffer, 128, pFile) != NULL) {
			printf("Contents of myfile.txt : \r\n");
			printf("%s", buffer);
		}
		fclose(pFile);
	}
}

void waitForCommand() {

	char buffer2[128];

	while (scanf("%s", buffer2)) {
		printf("%s", buffer2);

		if (strcmp(buffer2, "quit") == 0) {
			break;
		}

		if (strcmp(buffer2, "kiss") == 0) {
			printf("You get a big moist kiss back!\r\n");
		}
	}
}

int main() {

	printf("************************\r\n");
	printf("*** THE PROGRAM v1.8 ***\r\n");
	printf("************************\r\n");
	printf("\r\n");

	class1 koe;
	koe.value = 100;

	printf("class1 value is %d\r\n", koe.value);
	printf("class1 method1 output is %d\r\n", koe.method1(koe.value));
	printf("class1 method2 output is %d\r\n", koe.method2(koe.value));
	printf("class1 method3 output is %d\r\n", koe.method3());
	printf("class1 method4 output is %d\r\n", koe.method4());

	std::string tmp = "Hello! Now with Method3";
	tmp += " String";

	printf("Hello!\r\n");
	printf("%s\r\n", tmp.c_str());

	testClass2();

	testCrossdresser();

	std::vector<int> testVector;
	testVector.push_back(1);
	testVector.push_back(2);
	testVector.push_back(3);
	testVector.push_back(4);

	std::vector<int>::iterator iter;

	printf("Printing stuff:\r\n");

	int counter = 0;

	for (iter = testVector.begin(); iter != testVector.end(); iter++) {
		counter++;
		printf("Item %d : %d\r\n", counter, *iter);
	}

	printf("Finished printing stuff\r\n");

	std::string filename = "myfile.txt";

	printVector();	
	printDeque();

	printFile(filename);
	printf("Can you see me\r\n");

	waitForCommand();

	return 0;
}
