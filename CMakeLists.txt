cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}
	"${CMAKE_SOURCE_DIR}/CMakeModules/")

set(CMAKE_CXX_FLAGS "-Werror -Wall -Wextra -std=c++11 -pedantic")
project(serializor)
enable_testing()

add_subdirectory(utility)
add_subdirectory(serializer)
