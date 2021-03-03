//
// Created by Dan.Boatman on 5/27/2020.
//
#include <string>
#include <list>

using namespace std;

#ifndef RECIPEMANAGER_RECIPE_H
#define RECIPEMANAGER_RECIPE_H


class Recipe {
public:
    string name;
    string type;
    list<string> ingredients;
    list<string> sideIngredients;
    list<string> steps;

    Recipe();
    void printRecipe() const;
    bool hasIngredient(string ingredient);
};


#endif //RECIPEMANAGER_RECIPE_H
