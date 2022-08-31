# Projects Settings
cmake_minimum_required (VERSION 3.1)
project (screensaver)

# The main executable
add_executable(screensaver
  src/main.cpp "src/model/Face.cpp" "src/model/Group.hpp" "src/model/Group.cpp" "src/model/Mesh.cpp" "src/model/Mesh.hpp" "src/reader/ObjectReader.cpp" "src/reader/ObjectReader.h")

set_property(TARGET screensaver PROPERTY CXX_STANDARD 11)
target_compile_options(screensaver PRIVATE -Wall)

add_definitions(-DGLEW_STATIC)
add_subdirectory(lib/glfw EXCLUDE_FROM_ALL)
add_subdirectory(lib/glew EXCLUDE_FROM_ALL)
add_subdirectory(lib/glm EXCLUDE_FROM_ALL)

target_link_libraries(screensaver
  PRIVATE glfw
  PRIVATE libglew_static
  PRIVATE glm
)

target_include_directories(screensaver
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
  PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/src
)
