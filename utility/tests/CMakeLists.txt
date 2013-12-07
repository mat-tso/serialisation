enable_testing()

include_directories(. ../include)
add_executable(convert_test convert_test.cpp)
target_link_libraries(convert_test utility)
add_test(convert_test ${CMAKE_CURRENT_BINARY_DIR}/convert_test)
