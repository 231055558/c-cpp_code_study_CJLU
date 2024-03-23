cmake_minimum_required(VERSION 3.27)
project(CLcode)

# 按照书本要求设定C语言和C++版本
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)

# 设定构建运行路径，避免污染根目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/.archive)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/.library)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/.runtime)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/.runtime)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/.library)

# 遍历项目根目录下所有的 .c 文件，自动添加
file(GLOB_RECURSE files src/**/*.c src/**/*.cpp src/*.c src/*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable(${exe} ${file})
    message(\ \ \ \ --\ \[${exe}\]\ will\ be\ compiled\ to\ \'.runtime/${exe}.exe\')
endforeach ()