//
// Created by Dan.Boatman on 5/27/2020.
//

#include "RecipeBuilder.h"
#include <iostream>

RecipeBuilder::RecipeBuilder() = default;

void RecipeBuilder::addIngredients(string ingredients[], int length) {
    for (int i = 0; i < length; i++) {
        this->recipe.ingredients.push_back(ingredients[i]);
    }
}

void RecipeBuilder::addSideIngredients(string sides[], int length) {
    for (int i = 0; i < length; i++) {
        this->recipe.sideIngredients.push_back(sides[i]);
    }
}

void RecipeBuilder::addSteps(string steps[], int length) {
    for (int i = 0; i < length; i++) {
        this->recipe.steps.push_back(steps[i]);
    }
}

Recipe RecipeBuilder::getResult() {
    return this->recipe;
}

RecipeBuilder &RecipeBuilder::operator=(const RecipeBuilder &builder) {
    this->recipe = builder.recipe;
    return *this;
}
