#include <iostream>
#include "RecipeBuilder.h"

using namespace std;

Recipe SwedishPancakes();
Recipe ChocolateChipCookies();
Recipe BakedChickenWithAsparagus();

int main() {
    Recipe recipes[3];
    recipes[0] = SwedishPancakes();
    recipes[1] = ChocolateChipCookies();
    recipes[2] = BakedChickenWithAsparagus();

    string input = "";
    while (input != "x") {
        cout << "Enter i to search by ingredient, t to search by type, g to get a recipe, or x to exit:";
        cin >> input;

        if (input == "i") {
            cout << "Enter ingredient:";
            cin >> input;

            for (int i = 0; i < 3; i++) {
                if (recipes[i].hasIngredient(input)) {
                    cout << recipes[i].name << endl;
                }
            }
        } else if (input == "t") {
            cout << "main course or dessert?";
            cin >> input;

            for (int i = 0; i < 3; i++) {
                if (recipes[i].type == input) {
                    cout << recipes[i].name << endl;
                }
            }
        } else if (input == "g") {
            cout << "Choose a recipe:" << endl;
            for (int i = 0; i < 3; i++) {
                cout << i << ": " << recipes[i].name << endl;
            }

            int num = 0;
            cin >> num;

            cout << endl;
            recipes[num].printRecipe();
        }

        cout << endl;
        input = "";
    }

    return 0;
}

Recipe SwedishPancakes() {
    RecipeBuilder builder;
    string ingredients[4] = {"milk", "eggs", "butter", "flour"};
    string steps[3] = {"melt butter", "mix ingredients", "fry"};

    builder.recipe.name = "Swedish Pancakes";
    builder.recipe.type = "main course";
    builder.addIngredients(ingredients, 4);
    builder.addSteps(steps, 3);

    return builder.getResult();
}

Recipe ChocolateChipCookies() {
    RecipeBuilder builder;
    string ingredients[6] = {"butter", "sugar", "baking soda", "flour", "chocolate chips", "salt"};
    string steps[3] = {"mix ingredients", "form into balls of cookie dough", "bake at 350 degrees"};

    builder.recipe.name = "Chocolate Chip Cookies";
    builder.recipe.type = "dessert";
    builder.addIngredients(ingredients, 6);
    builder.addSteps(steps, 3);

    return builder.getResult();
}

Recipe BakedChickenWithAsparagus() {
    RecipeBuilder builder;
    string ingredients[3] = {"chicken", "salt", "pepper"};
    string sides[2] = {"asparagus", "butter"};
    string steps[3] = {"season chicken with salt and pepper", "Bake chicken at 425 degrees", "Saute asparagus in butter"};

    builder.recipe.name = "Baked Chicken with Asparagus";
    builder.recipe.type = "main course";
    builder.addIngredients(ingredients, 3);
    builder.addSideIngredients(sides, 2);
    builder.addSteps(steps, 3);

    return builder.getResult();
}