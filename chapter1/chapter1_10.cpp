//chapter1_10.cpp
#include <iostream>
int main() {
	int sum = 0;
	for(int i = 50; i <= 100; ++i) {
		sum += i;
	}
	std::cout << "The sum is:" << sum << std::endl;
	int value = 50;
	sum = 0;
	while( value <= 100) {
		sum += value;
		++value;
	}
	std::cout << "The sum is:" << sum << std::endl;

	return 0;
}