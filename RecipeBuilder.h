//
// Created by Dan.Boatman on 5/27/2020.
//
#include "Recipe.h"

using namespace std;

#ifndef RECIPEMANAGER_RECIPEBUILDER_H
#define RECIPEMANAGER_RECIPEBUILDER_H


class RecipeBuilder {
public:
    Recipe recipe;

    RecipeBuilder();
    RecipeBuilder& operator=(const RecipeBuilder &builder);
    void addIngredients(string ingredients[], int length);
    void addSideIngredients(string sides[], int length);
    void addSteps(string steps[], int length);
    Recipe getResult();
};


#endif //RECIPEMANAGER_RECIPEBUILDER_H
