cmake_minimum_required(VERSION 3.5)

project(SortingAlgorithms)

add_subdirectory(bubble_sort)
add_subdirectory(quick_sort)
# Добавьте сюда другие подпроекты, если необходимо

# Создайте переменные CMake для путей к файлам
set(TEST1_TXT_PATH "${CMAKE_BINARY_DIR}/test1.txt")
set(TEST2_TXT_PATH "${CMAKE_BINARY_DIR}/test2.txt")

# Добавьте путь к каталогу, содержащему config.h, чтобы ваш код мог его найти
include_directories(${CMAKE_BINARY_DIR})

# Передайте переменные в ваш код C++
configure_file(config.h config.h)
