cmake_minimum_required(VERSION 3.5)

project(SortingAlgorithms)

add_subdirectory(bubble_sort)
add_subdirectory(quick_sort)
add_subdirectory(selection_sort)
# Добавьте сюда другие подпроекты, если необходимо

get_filename_component(CURRENT_DIR_ABSOLUTE ${CMAKE_CURRENT_SOURCE_DIR} ABSOLUTE)

# Создайте переменные CMake для путей к файлам
set(TEST1_TXT_PATH ${CURRENT_DIR_ABSOLUTE}/test1.txt)
set(TEST2_TXT_PATH ${CURRENT_DIR_ABSOLUTE}/test2.txt)

# Добавьте путь к каталогу, содержащему config.h, чтобы ваш код мог его найти
include_directories(${CMAKE_BINARY_DIR})

# Передайте переменные в ваш код C++
configure_file(config.h config.h)
