cmake_minimum_required(VERSION 3.16.3)

if (MSVC)
	add_compile_options(/w4)
else()
	add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(arrowCSVReader arrowCSVReader.cpp)
target_compile_features(arrowCSVReader PRIVATE cxx_lambda_init_captures)
