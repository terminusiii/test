#include <stdio.h>
#include <string>
#include <vector>

#include "class1.h"

int main() {

	class1 koe;
	koe.value = 100;

	printf("class1 value is %d\r\n", koe.value);
	printf("class1 method output is %d\r\n", koe.method1(koe.value));

	std::string tmp = "Hello";
	tmp += " String";

	printf("Hello!\r\n");
	printf("%s\r\n", tmp.c_str());

	std::vector<int> testVector;
	testVector.push_back(1);
	testVector.push_back(2);
	testVector.push_back(3);

	std::vector<int>::iterator iter;

	printf("Printing stuff:\r\n");
	for (iter = testVector.begin(); iter != testVector.end(); iter++) {
		printf("%d\r\n", *iter);
	}
	
	return 0;
}