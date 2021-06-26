#include "Replacer.hpp"

void Replacer::openfile(const std::string& filename) {
  original.open(filename.c_str());
  if (!original.is_open())
    throw std::invalid_argument("Can't open file");
  resulting.open((filename + ".replace").c_str());
  if (!resulting.is_open()) {
    if (original.is_open())
      original.close();
    throw std::invalid_argument("Can't open file");
  }
}

void Replacer::replace() {
  std::stringstream buffer;
  buffer << original.rdbuf();
  stringFile = buffer.str();
  buffer.clear();
  replacer();
  resulting << stringFile;
  stringFile.clear();
}

void Replacer::replacer() {
  std::string::size_type pos = 0;
  while ((pos = stringFile.find(from, pos)) != std::string::npos) {
    stringFile.erase(pos, from.length());
    stringFile.insert(pos, to);
    pos += to.size();
  }
}

Replacer::Replacer(const std::string &filename, const std::string &_from, const std::string &_to):
  from(_from), to(_to) {
  openfile(filename);
}

Replacer::~Replacer() {
  original.close();
  resulting.close();
}