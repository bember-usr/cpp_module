#ifndef UNIT_01_EX07_REPLACER_HPP_
#define UNIT_01_EX07_REPLACER_HPP_

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

class Replacer {
 private:
  const std::string from;
  const std::string to;
   std::ifstream original;
   std::ofstream resulting;
   std::string  stringFile;

  void replacer();
  void openfile(const std::string& filename);
 public:
  Replacer(const std::string &filename, const std::string &from, const std::string& to);
  ~Replacer();
  void replace();
};

#endif