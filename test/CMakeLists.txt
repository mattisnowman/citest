project(mytest LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Test)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

enable_testing(true)

qt_add_executable(mytest main.cpp)
add_test(NAME MyTest COMMAND mytest)

target_include_directories(mytest PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(mytest PRIVATE mylib Qt6::Test)