#include "iostream"
#include "fstream"
#include "string"

int main(int argc, const char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid num of arguments\n";
		return (0);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Empty argument\n";
		return (0);
	}
	std::ifstream	old_file;
	std::ofstream	new_file;
	std::string		file_name = argv[1];
	std::string		str1 = argv[2];
	std::string		str2 = argv[3];
	std::string 	file_line;
	std::string		file_value;

	old_file.open(file_name);
	new_file.open(file_name + ".replace");

	while(std::getline(old_file, file_line))
		file_value += file_line + '\n';

	size_t	pos = 0;
	while((pos = (int) file_value.find(str1, pos)) != -1)
	{
		file_value.erase(pos, str1.length());
		file_value.insert(pos, str2);
		pos += str2.length();
	}
	new_file << file_value;

	old_file.close();
	new_file.close();
}