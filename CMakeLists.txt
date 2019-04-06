cmake_minimum_required (VERSION 3.2)
project (cpm)

file(GLOB source_files
"*.h"
"*.cpp")

add_executable(cpm ${source_files})
