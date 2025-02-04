cmake_minimum_required(VERSION 3.1)
project(BouncyBalls)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin/)

add_subdirectory(vendor/sfml)

add_executable(${PROJECT_NAME})

file(GLOB SRC_FILES src/*.cpp)
target_sources(${PROJECT_NAME} PRIVATE ${SRC_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE include/)
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics sfml-window sfml-system)