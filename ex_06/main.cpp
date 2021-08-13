#include "Karen.hpp"
#include "iostream"

int main(int argc, const char** argv)
{
	Karen karen;

	if (argc != 2)
		std::cout << "invalid num of argument\n";
	karen.complain(argv[1]);
}