cmake_minimum_required(VERSION 3.20)
project(AdvancedProgrammingT1)

set(CMAKE_CXX_STANDARD 17)

add_executable(AdvancedProgrammingT1 main.cpp Game.cpp Game.h GameComponent.cpp GameComponent.h DrawableGameComponent.cpp DrawableGameComponent.h)
