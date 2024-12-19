#include "sdt.h"
#include <iostream>

int main() {
   int a, b;
   std::cout << "enter 2 int: ";
   std::cin >> a >> b;
   std::cout << "sum: " << a + b << std::endl;
   std::cout << "r: " << a - b << std::endl;
   return 0;
}