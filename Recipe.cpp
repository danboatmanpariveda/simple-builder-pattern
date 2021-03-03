//
// Created by Dan.Boatman on 5/27/2020.
//
#include <iostream>
#include "Recipe.h"

using namespace std;

Recipe::Recipe() = default;

void Recipe::printRecipe() const {
    cout << this->name << endl;
    cout << this->type << endl << endl;

    cout << "Ingredients:" << endl;
    list<string> temp(this->ingredients);
    int size = this->ingredients.size();
    for (int i = 0; i < size; i++) {
        cout << temp.front() << endl;
        temp.pop_front();
    }

    cout << endl;

    if (!this->sideIngredients.empty()) {
        temp = this->sideIngredients;
        size = this->sideIngredients.size();
        cout << "Sides:" << endl;
        for (int i = 0; i < size; i++) {
            cout << temp.front() << endl;
            temp.pop_front();
        }

        cout << endl;
    }

    cout << "Steps:" << endl;
    temp = this->steps;
    size = this->steps.size();
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ") "  << temp.front() << endl;
        temp.pop_front();
    }
}

bool Recipe::hasIngredient(string ingredient) {
    int size = this->ingredients.size();
    list<string> temp(this->ingredients);

    for (int i = 0; i < size; i++) {
        if (temp.front() == ingredient) {
            return true;
        }
        temp.pop_front();
    }
    return false;
}
