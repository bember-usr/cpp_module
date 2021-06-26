#include <iostream>
#include "Replacer.hpp"

int main (int argc, char **argv) {
  if (argc != 4) {
	std::cerr << "Not correct num of arguments" << std::endl;
	return 1;
  }
  if (argv[2][0] == '\0' || argv[3][0] == '\0' || argv[1][0] == '\0') {
	std::cerr << "Not correct arguments" << std::endl;
	return 1;
  }
  try {
		Replacer replacer(argv[1], argv[2], argv[3]);
		replacer.replace();
	}
	catch (std::invalid_argument& e) {
	std::cerr << e.what() << std::endl;
	return 1;
  }
  catch(...)
  {
	std::cerr << "Problem with STD functions" << std::endl;
	return 1;
  }
  return 0;
} 