#include <iostream>
#include <unordered_set>

int main()
{  
	std::unordered_set<int> example = {1, 2, 3, 4};

	if(example.count(2)) {
		std::cout << "Found\n";
	}
	else {
		std::cout << "Not found\n";
	}
	if(example.count(5)) {
		std::cout << "Found\n";
	}
	else {
		std::cout << "Not found\n";
	}
}
