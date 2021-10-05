cmake_minimum_required(VERSION 3.5)
project(hello_type)

##################################################
# set the default build type
##################################################

add_executable(${PROJECT_NAME} 
    main.cpp
)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message("Setting build type to 'RelWithDebInfo' as none was specified")
    set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Choose the type of build." FORCE)
    # set the possible values of build type for cmake-gui
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

# CMake has a number of build in build configurations which can be used to complie your project. 
# These specify the optimization levels and if debug information is to be included in the binary

# Release - Adds the -03 -DNDEBUG flags to the complier
# Debug - Adds the -g flag
# MinSizeRel - Adds -0s -DNDEBUG
# RelWithDebInfo - Adds -02 -g -DNDEBUG flags


# or 
# cmake .. -DCMAKE_BUILD_TYPE=Release