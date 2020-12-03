# CMakeList.txt: CarRecgnize 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)
include_directories("D:/Lance/ndk/opencv/opencv/build/include")
link_directories("D:/Lance/ndk/opencv/opencv/build/x64/vc15/lib")
# 将源代码添加到此项目的可执行文件。
add_executable (CarRecgnize "CarRecgnize.cpp" CarPlateLocation.cpp CarColorPlateLocation.cpp CarSobelPlateLocation.cpp CarPlateRecgnize.cpp )
target_link_libraries( CarRecgnize opencv_world343d )
# TODO: 如有需要，请添加测试并安装目标。
