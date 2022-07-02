cmake_minimum_required(VERSION 3.22)
project(DZ32)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)

add_subdirectory(nlohmann_json)

target_link_libraries(DZ32 PRIVATE nlohmann_json::nlohmann_json)