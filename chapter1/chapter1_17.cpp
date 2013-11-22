//chapter1_17.cpp
#include <iostream>
int main() {
	int value;
	int n = 0;
	std::cout << "Please enter a series of numbers:" << std::endl;
	// end of file is ctrl + D
	while(std::cin >> value) {
		if(value < 0) {
			++n;
		}
	}
	std::cout << "The total negative number is:" << n << std::endl;
	return 0;
}