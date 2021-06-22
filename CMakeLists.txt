cmake_minimum_required(VERSION 3.16)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

# 遍历项目根目录下所有
#的 .cpp 文件1







add_executable(lcs lcs.cpp)
add_executable(list list.cpp)
add_executable(main main.cpp)
add_executable(posmidtree posmidtree.cpp)
add_executable(qsort qsort.cpp)
add_executable(union-find union-find.cpp)
add_executable(guibing guibing.cpp)
add_executable(palouti palouti.cpp)
add_executable(quan-pai-lie quan-pai-lie.cpp)
add_executable(lc-206-reverseLinkedList lc-206-reverseLinkedList.cpp)
add_executable(lc-100-panduanShu lc-100-panduanShu.cpp)
add_executable(lc-617-heBingShu lc-617-heBingShu.cpp)

add_executable(two-stack-to-queue two-stack-to-queue.cpp)
add_executable(test test.cpp)
add_executable(heapSort heapSort.cpp)