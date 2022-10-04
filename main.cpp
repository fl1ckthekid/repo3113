#include <iostream>
using namespace std;

struct fridge{
    int milk_liters;
    int meat_pieces;
    int cheese_pieces;
    int snack_pieces;
};

int main() {

    fridge my_fridge;
    fridge friends_fridge;

    cout << "Enter the number of milk liters, kg of meat, pieces of cheese, pieces of your favorite snack in your fridge:\n";
    cin >> my_fridge.milk_liters >> my_fridge.meat_pieces >> my_fridge.cheese_pieces >> my_fridge.snack_pieces;
    cout << "Enter the number of milk liters, kg of meat, pieces of cheese, pieces of friend's favorite snack in his fridge:\n";
    cin >> friends_fridge.milk_liters >> friends_fridge.meat_pieces >> friends_fridge.cheese_pieces >> friends_fridge.snack_pieces;

    cout << "\nYour fridge:\n   "
         << my_fridge.milk_liters << " liters of milk\n   "
         << my_fridge.meat_pieces << " pieces of meat\n   "
         << my_fridge.cheese_pieces << " pieces of cheese\n   "
         << my_fridge.snack_pieces << " pieces of favourite snack\n   ";

    cout << "\nFriend's fridge:\n   "
         << friends_fridge.milk_liters << " liters of milk\n   "
         << friends_fridge.meat_pieces << " pieces of meat\n   "
         << friends_fridge.cheese_pieces  << " pieces of cheese\n   "
         << friends_fridge.snack_pieces << " pieces of favourite snack\n";

    cout << "\nHas the amount of food in fridges changed? (write yes/no)\n";
    string changes;
    cin >> changes;
    if (changes != "yes" && changes != "Yes" && changes != "YES") {
        return 0;
    }

    cout << "How many liters of rotten milk did your friend throw away?\n";
    int milk;
    cin >> milk;
    friends_fridge.milk_liters -= milk;

    cout << "How many kg of spoiled meat did you throw out of your fridge?\n";
    int meat;
    cin >> meat;
    my_fridge.meat_pieces -= meat;

    cout << "How many pieces of cheese did your friend take from you?\n";
    int cheese;
    cin >> cheese;
    my_fridge.cheese_pieces -= cheese;
    friends_fridge.cheese_pieces += cheese;

    cout << "How many pieces of your favorite snack did your friend give you?\n";
    int snack;
    cin >> snack;
    my_fridge.snack_pieces += snack;
    friends_fridge.snack_pieces -= snack;

    cout << "\nYour fridge:\n   "
    << my_fridge.milk_liters << " liters of milk\n   "
    << my_fridge.meat_pieces << " pieces of meat\n   "
    << my_fridge.cheese_pieces << " pieces of cheese\n   "
    << my_fridge.snack_pieces << " pieces of favourite snack\n   ";

    cout << "\nFriend's fridge:\n   "
    << friends_fridge.milk_liters << " liters of milk\n   "
    << friends_fridge.meat_pieces << " pieces of meat\n   "
    << friends_fridge.cheese_pieces  << " pieces of cheese\n   "
    << friends_fridge.snack_pieces << " pieces of favourite snack\n   ";

    return 0;
}
