project(Project3)
set(CMAKE_CXX_STANDARD 20)
add_executable(Project3 main.cpp)
target_link_directories(Project3 PRIVATE logger.h)