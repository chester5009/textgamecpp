#ifndef GAMEFIELD_H
#define GAMEFIELD_H


class GameField
{
private:
    int **field;
public:
    GameField();
    void create();
    void draw();
};

#endif // GAMEFIELD_H
