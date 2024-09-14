cmake_minimum_required(VERSION 3.20.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
#set(CMAKE_CXX_FLAGS "-fext-numeric-literals")
project(Zadanka VERSION 0.1.0 LANGUAGES C CXX)

file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

set(SOURCE_LIST 
    ${SRC_FILES}
)

add_executable(Zadanka ${SOURCE_LIST})


