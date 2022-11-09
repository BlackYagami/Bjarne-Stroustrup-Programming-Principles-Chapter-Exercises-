#include <iostream>

int main() //no need to put ; after parameter because function body follow parameter 
{
	std::cout << "Hello, programming!\n"; 
	std::cout << "Here we go!\n";
	(void)getchar(); // void function return type must be put in paranthesis to explicitly ignore return value that has no parameter attached to getchar
		return 0; 
}