cmake_minimum_required(VERSION 3.10)
project(arc_extractor)

set(CMAKE_CXX_STANDARD 17)

find_package(ZLIB REQUIRED)

add_executable(arc_extractor arc_extractor.cpp)
target_link_libraries(arc_extractor PRIVATE ZLIB::ZLIB)
