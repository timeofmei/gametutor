cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 20)

project(game)

include_directories(include)

if(WIN32)
	include_directories(C:/Users/timeofmei/vcpkg/installed/x64-windows/include)
	link_directories(C:/Users/timeofmei/vcpkg/installed/x64-windows/lib)
else()
	include_directories(/opt/homebrew/include)
	link_directories(/opt/homebrew/lib)
endif()

find_package(SDL2 REQUIRED)

file(GLOB_RECURSE SRCS src/*.cpp)
add_executable(game ${SRCS})
target_link_libraries(game SDL2 SDL2_image)
