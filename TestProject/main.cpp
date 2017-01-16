#include <stdio.h>
#include <string>
#include <cstring>
#include <vector>
#include <cstdio>

#include "class1.h"

int main() {

	class1 koe;
	koe.value = 100;

	printf("class1 value is %d\r\n", koe.value);
	printf("class1 method1 output is %d\r\n", koe.method1(koe.value));
	printf("class1 method2 output is %d\r\n", koe.method2(koe.value));

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

	FILE* pFile = fopen("myfile.txt", "w");
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

	char buffer2[128];

	while (scanf("%s", buffer2)) {
		printf("%s", buffer2);

		if (strcmp(buffer2, "quit") == 0) {
			break;
		}
	}
	
	return 0;
}