#include <iostream>
using namespace std;

int make_juice(int fruit, int water, int sugar)
{
    int juice;

    juice = fruit + water + sugar;
    return juice;
}

int read_fruit_composition(int fruit, int water, int sugar)
{

    cout << "Enter the fruit:" << endl;
    cin >> fruit;
    cout << "Enter the quantity of water:" << endl;
    cin >> water;
    cout << "Enter the quantity of sugar:" << endl;
    cin >> sugar;
    return fruit, water, sugar;
}

int main()
{
    int fruit, water, sugar;
    char juice_name;
    cout << " Hey, what juice do you want to make?" << endl;
    cin >> juice_name;
    read_fruit_composition;
    // cout << juice_name << "juice" << endl;

    // juice_name = make_juice(fruit, water, sugar);
}
