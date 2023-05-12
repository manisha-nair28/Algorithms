cmake_minimum_required(VERSION 3.16)
project(main)
add_executable(${PROJECT_NAME}
 "binary_search_iterative.cpp"
 "binary_search_recursive.cpp"
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

enable_testing()
add_test(NAME main COMMAND main)
