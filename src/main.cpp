#include "hello_triangle.hpp"

#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main() {
  HelloTriangle app;

  try {
    app.Run();
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
