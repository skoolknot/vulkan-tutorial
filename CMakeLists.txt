cmake_minimum_required(VERSION 3.26.4)
project(VulkanTutorial VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
find_package(Vulkan REQUIRED)

add_subdirectory(lib/glfw-3.3.8)
add_subdirectory(lib/glm)

add_executable(
  ${PROJECT_NAME}
  src/main.cpp
  src/hello_triangle.hpp
  src/hello_triangle.cpp
)

target_link_libraries(${PROJECT_NAME} glm glfw Vulkan::Vulkan)
