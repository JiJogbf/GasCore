cmake_minimum_required(VERSION 3.16)

add_library(Core 
    src/cpp/main/gas/string.cpp
)

add_executable(CoreTests
    src/cpp/test/test.cpp
)

include_directories(src/cpp/main)
target_link_libraries(CoreTests Core)