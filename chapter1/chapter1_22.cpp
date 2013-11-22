//chapter1_22.cpp
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item first, second;
	if(std::cin >> first) {
		while(std::cin >> second) {
			if(first.same_isbn(second)) {
				first += second;
			} else {
				std::cerr << "Diff ISBN" << std::endl;
				return -1;
			}
		}
	}
	std::cout << "Info:" << first << std::endl;
	
	return 0;
}