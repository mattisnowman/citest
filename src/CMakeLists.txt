project(mylib LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

add_library(mylib myclass.h myclass.cpp)

target_link_libraries(mylib PRIVATE Qt6::Core)
