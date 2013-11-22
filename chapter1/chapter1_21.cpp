//chapter1_21.cpp
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item book;
	while(std::cin >> book) {
		std::cout << "Info:" << book << std::endl;
	}
	return 0;
}