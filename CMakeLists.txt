# cmake_minimum_required(VERSION <specify CMake version here>)
project(RecipeManager)

set(CMAKE_CXX_STANDARD 14)

add_executable(RecipeManager main.cpp Ingredient.cpp Ingredient.h RecipeBuilder.cpp RecipeBuilder.h Recipe.cpp Recipe.h)