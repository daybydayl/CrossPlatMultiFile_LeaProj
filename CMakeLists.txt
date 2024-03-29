#设置cmake支持最低版本
cmake_minimum_required(VERSION 3.0)

#项目名(必选)
project(SOLDIERSHOOT)

#包含绝对目录，有这个包含头文件可不加路径
include_directories(${CMAKE_SOURCE_DIR}/include)

#添加C++选项,如添加int a = 0;不用a
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# 根据当前系统或编译器类型添加特定编译选项
if(WIN32)
    # Windows-specific flags or settings
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_WIN32")
elseif(UNIX)
    # Unix-specific flags or settings
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__linux__")
endif()

#设置cmake构建的项目版本
set(CMAKE_BUILD_TYPE Debug)

#把文件设置为变量
set(SRC main.cpp src/Gun.cpp src/Soldier.cpp)

#生成可执行文件(必选)
add_executable(my_cmake_exe ${SRC})