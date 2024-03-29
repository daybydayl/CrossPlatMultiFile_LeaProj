# 基于vscode的跨平台多文件编译学习项目

## VScode成功编译该项目的前提：

### 1.安装应用程序：

​	安装MinGw(就是gcc)，安装cmake，win下最好配置下系统环境变量。

​	在Window下：
​	https://sourceforge.net/projects/mingw-w64/
​	https://cmake.org/download/
​	在Ubuntu下：
​	sudo apt-get install g++
​	sudo apt-get install cmake

### 2.VScode插件安装：

​	vscode中装C/C++、cmake、cmake tools插件。
​	（选装）安装Chinese中文、Remote DevelopmentRD可在Win下远程linux的项目操作。
​	

## 文件说明：

### .vscode:

​	launch.json 是 VSCode 中用于配置调试器（Debugger）的文件，用于定义调试过程中的启动参数、环境变量、调试器类型等信息。
​	tasks.json 是 VSCode 中用于配置任务（Tasks）的文件，用于定义项目的构建任务、编译任务、清理任务等。
​	settings.json 文件是 Visual Studio Code (VSCode) 中用于配置用户和工作区设置的文件。(可不管)

### build:

​	build 目录是用于存放 CMake 构建过程中生成的各种中间文件、构建产物和配置文件的临时目录，它的具体内容会随着项目的配置和构建方式而有所不同。（可不管）

### inlcude与src:

​	头文件与源程序文件
​	
CMakeLists.txt 是 CMake 工具的配置文件，用于描述项目的结构、依赖关系、编译选项等信息。

### 注：

​	1.项目是个简单的士兵装弹射击的多文件程序仅为学习多文件编译，main函数里的时间打印也仅为跨平台编译的学习。
​	2.CMakefiles.txt、tasks.json、launch.json文件必要部分都留有注释，其他还需待学习。
​	3.该项目的tasks.json、launch.json默认是Win下的情况，放入Linux中只用另对带(Linux)的文件改名即可。
​	4.若Win环境下有安装VS，tasks.json里command的cmake ..首次需要在空的build目录下手动cmake -G "MinGW Makefiles" ..再去运行，Linux下该文json直接可运行。