cmake_minimum_required(VERSION 3.9)
project(ft_nm)

set(CMAKE_C99_STANDARD 17)

# Rigourous Error management
set(CMAKE_C_FLAGS "-Wall -Werror -Wall")

# Including *.c and *.h project files
FILE(GLOB_RECURSE SOURCE test_des_fonctions.c)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "~/nm_otool")
# Build executable
add_executable(test.out ${SOURCE})

find_library(LIBFTS fts .)

target_link_libraries(test.out LINK_PUBLIC ${LIBFTS})

