#include "Karen.hpp"
#include "iostream"

int main(int argc, const char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "invalid num of argument\n";
		return (0);
	}
	karen.complain(argv[1]);
	return (0);
}