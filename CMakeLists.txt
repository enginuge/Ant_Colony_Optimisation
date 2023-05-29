cmake_minimum_required(VERSION 3.25.1)

project(Ant_Colony_Optimisation
	VERSION 0.1
	DESCRIPTION "Trying to make coded ants find quick paths"
	LANGUAGES CXX)

add_executable(Ant_Colony_Optimisation
	src/point.h
	src/point.cpp
	src/city.h
	src/city.cpp
	src/ant.h
	src/ant.cpp
	src/city_maker.h
	src/city_maker.cpp
	src/main.cpp)

target_compile_features(Ant_Colony_Optimisation PRIVATE cxx_std_20)
