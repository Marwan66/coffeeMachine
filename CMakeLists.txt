
cmake_minimum_required(VERSION 3.0.0)
project(MyCMakeproject VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(MyCMakeproject 
    main.cpp
    Logger/Log.cpp
    Machine/Machine.cpp)

set_property(TARGET MyCMakeproject PROPERTY CXX_STANDARD 17)
