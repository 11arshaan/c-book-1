#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::ifstream fin("woo.txt");
  std::string x, y, z;
  fin >> x;
  fin.close();
  std::cout << x;


  return 0;

}