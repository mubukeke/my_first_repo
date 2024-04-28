#include <iostream>

int Hello() {
  std::cout << "Hello";
  return 0;
}

int World() {
  std::cout << " World" << std::endl;
  return 0;
}

int main() {
  // std::cout << "Hello World," << std::endl;
  Hello();
  World();

  return 0;
}

