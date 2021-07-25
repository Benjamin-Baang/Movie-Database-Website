CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

include_directories(inc)

file(GLOB SOURCES "src/*.cpp")

ADD_EXECUTABLE(test 
    tests/test.cpp
    ${SOURCES}
)

find_package(Sqlite3)
TARGET_LINK_LIBRARIES(test gtest sqlite3)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)