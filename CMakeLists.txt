cmake_minimum_required(VERSION 3.16)
project(main)
add_executable(${PROJECT_NAME}

  "factorial.cpp"
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

enable_testing()
add_test(NAME main COMMAND main)
