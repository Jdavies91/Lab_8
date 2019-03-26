cmake_minimum_required(VERSION 3.13)
project(Lab_8_v2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab_8_v2 main.cpp Person.cpp Person.hpp placingPeopleandPlacesfromfile.cpp placingPeopleandPlacesfromfile.hpp peoplePlaces.txt)