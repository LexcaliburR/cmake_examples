cmake_minimum_required(VERSION 3.5)

project(HelloThirdParty)

# Boost 1.77.0
# find_package(boost 1.77.0 REQUIRED COMPONENTS filesystem system)
find_package(Boost 1.77.0 REQUIRED COMPONENTS filesystem system)

# check if boost was found
if(Boost_FOUND)
    message("boost found")
else()
    message(FATAL_ERROR "Cannot find Boost")
endif()

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Boost::filesystem
)