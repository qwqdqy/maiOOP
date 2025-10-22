cmake_minimum_required(VERSION 3.16)

project(PureNum LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_CXX_STANDARD 11) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Пути к исходникам и заголовкам
include_directories(${PROJECT_SOURCE_DIR}/include)

# Основная программа
add_executable(PureNum
    main.cpp
    src/pure_num.cpp
)


enable_testing()
add_subdirectory(googletest)

# Тесты
add_executable(runTests
    test_pure_num.cpp
    src/pure_num.cpp
)

target_include_directories(runTests PRIVATE include)
target_link_libraries(runTests gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
