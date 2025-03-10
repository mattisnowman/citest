project(mybenchmark LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Test)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

enable_testing(true)

qt_add_executable(mybenchmark main.cpp)

add_test(NAME BenchmarkTest COMMAND mybenchmark)

target_include_directories(mybenchmark PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(mybenchmark PRIVATE mylib Qt6::Test)