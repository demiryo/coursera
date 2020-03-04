/**
 * C++ code for creating a Cube of length 2.4 units.
 * - See ../cpp-std/main.cpp for a similar program with print statements.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"

class A;

int main() {
  Cube c;

  c.setLength(100);
  double length = c.getLength();

  double volume = c.getVolume();
  std::cout << "Volume: " << volume << ", length = " << length << std::endl;

  return 0;
}
