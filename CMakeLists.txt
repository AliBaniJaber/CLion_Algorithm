cmake_minimum_required(VERSION 3.15)
project(Algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithm.cpp Algorithm.h LinkedList.cpp LinkedList.h test.cpp test/main.cpp NODE.h Heap.cpp Heap.h main.cpp stack/main.cpp Tree.cpp Tree.h)

