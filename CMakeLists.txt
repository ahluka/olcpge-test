cmake_minimum_required (VERSION 3.13)
project (olcpge-test)
add_executable (olcpge-test main.cpp)
target_link_libraries (olcpge-test GL png pthread X11)

