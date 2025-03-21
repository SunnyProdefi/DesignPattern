cmake_minimum_required(VERSION 3.10)

# 项目名称
project(FactoryMethodPattern)

# 指定 C++ 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 生成可执行文件
add_executable(factory_method_pattern 
    main.cpp
    factory_method_pattern.cpp
)

# 设置编译输出目录
set_target_properties(factory_method_pattern PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin
)
