#设置cmake支持最低版本
cmake_minimum_required(VERSION 3.29.0)

#项目名(必选)
project(SOLDIERSHOOT)

# #包含绝对目录，有这个包含头文件可不加路径
# include_directories(${CMAKE_SOURCE_DIR}/include)

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

# #设置可执行文件存放目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) #针对可执行文件生成位置

#动态库(把一些cpp生成为动态库方式)
# #linux下是CMAKE_LIBRARY_OUTPUT_DIRECTORY。静态库CMAKE_ARCHIVE_OUTPUT_DIRECTORY,这个不关心exe
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) #动态库和可执行程序生成位置
# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS) #设置cpp文件为变量
# add_library(common SHARED ${SRC_LISTS}) #生成动态库名为common
# target_include_directories(common PUBLIC ${PROJECT_SOURCE_DIR}/include) #动态库包含依赖头文件

#把文件设置为变量
set(SRC_LISTS main.cpp src/Gun.cpp src/Soldier.cpp)
#aux_source_directory(. SRC_LISTS) #旨在当前目录下的cpp文件

#生成可执行文件(必选)
add_executable(my_cmake_exe ${SRC_LISTS})
target_include_directories(my_cmake_exe PUBLIC ${PROJECT_SOURCE_DIR}/include) #可执行文件也要包含依赖头文件

#动态库
# target_link_directories(my_cmake_exe PUBLIC common) #可执行文件链接动态库