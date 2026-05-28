cmake_minimum_required(VERSION 3.20)

project(computer_repair_system CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-fsanitize=address,undefined -g)
    add_link_options(-fsanitize=address,undefined)
endif()

add_executable(computer_repair_system
    src/main.cpp
    src/client.cpp
    src/computer.cpp
    src/employee.cpp
    src/diagnosis.cpp
)

target_include_directories(computer_repair_system PRIVATE src)