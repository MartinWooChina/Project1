
#include <stdio.h>
#include <iostream>

#include"Sales_item.h"






int main() {
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)  
	{
		sum += i;
		std::cout << i << " " << sum << std::endl;
	}

	std::cout << i << " " << sum << std::endl;

	system("pause");

}