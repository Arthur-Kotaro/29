cmake_minimum_required(VERSION 3.30)

set(CMAKE_CXX_STANDARD 11)

set(HEADERS_LIST inc/main1.hpp inc/Talents.hpp inc/Animals.hpp)
set(SOURCES_LIST src/main1.cpp src/Talents.cpp src/Animals.cpp)

add_executable(main1 ${SOURCES_LIST} ${HEADERS_LIST})
target_include_directories(main1 PUBLIC inc)
