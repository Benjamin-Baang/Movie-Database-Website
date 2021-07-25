CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test 
    tests/test.cpp
    src/action.cpp
    src/adventure.cpp
    src/animation.cpp
    src/comedy.cpp
    src/crime.cpp
    src/drama.cpp
    src/horror.cpp
    src/romance.cpp
)

find_package(Sqlite3)
TARGET_LINK_LIBRARIES(test gtest sqlite3)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)