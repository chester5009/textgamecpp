#include <iostream>
#include "gamefield.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;

    GameField *field=new GameField;
    field->create();

    return 0;
}
