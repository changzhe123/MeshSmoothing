cmake_minimum_required(VERSION 3.15)

project(MeshSmoothing LANGUAGES CXX)

# 使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 收集所有源文件
file(GLOB_RECURSE PROJECT_SOURCES
    ${PROJECT_SOURCE_DIR}/src/circle.cpp
	${PROJECT_SOURCE_DIR}/src/fourcutter.cpp
	${PROJECT_SOURCE_DIR}/src/main.cpp
	${PROJECT_SOURCE_DIR}/src/point3.cpp
	${PROJECT_SOURCE_DIR}/src/rectangle.cpp
	${PROJECT_SOURCE_DIR}/src/shape.cpp
	${PROJECT_SOURCE_DIR}/src/triangle.cpp
)

file(GLOB_RECURSE PROJECT_HEADERS
	${PROJECT_SOURCE_DIR}/include/circle.h
	${PROJECT_SOURCE_DIR}/include/fourcutter.h
	${PROJECT_SOURCE_DIR}/include/point3.h
	${PROJECT_SOURCE_DIR}/include/rectangle.h
	${PROJECT_SOURCE_DIR}/include/shape.h
	${PROJECT_SOURCE_DIR}/include/shape_namespace_def.h
	${PROJECT_SOURCE_DIR}/include/triangle.h
)

# 防御性检查，避免 No SOURCES 错误
if (PROJECT_SOURCES STREQUAL "")
    message(FATAL_ERROR
        "No source files found in src/. "
        "Please make sure your .cpp files are located in the src directory."
    )
endif()

# 生成可执行文件
add_executable(MeshSmoothing
    ${PROJECT_SOURCES}
	${PROJECT_HEADERS}
)

# 头文件搜索路径
target_include_directories(MeshSmoothing PRIVATE include)

# Windows / MSVC 下的常用设置（可选，但推荐）
if (MSVC)
    target_compile_options(MeshSmoothing PRIVATE /W4)
else()
    target_compile_options(MeshSmoothing PRIVATE -Wall -Wextra)
endif()
