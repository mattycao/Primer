//chapter1_25.cpp
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item first, second;
	if(std::cin >> first) {
		while(std::cin >> second) {
			if(first.same_isbn(second)) {
				first = first + second;
			} else {
				std::cout << first << std::endl;
				first = second;
			}
		}
		std::cout << first << std::endl;
	} else {
		std::cerr << "NO data" << std::endl;
		return -1;
	}
	return 0;
}